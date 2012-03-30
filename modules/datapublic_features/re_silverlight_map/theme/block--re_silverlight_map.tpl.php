        <div id="silverlightControlHost" style="line-height: 1em;">
            <object data="data:application/x-silverlight-2," height="300" style="height: 300px;" type="application/x-silverlight-2" width="100%">
                <param name="source" value="/<?php print  drupal_get_path('module', 're_silverlight_map'); ?>/map/SilverlightMap.xap">
                <param name="onError" value="onSilverlightError">
                <param name="background" value="white">
                <param name="minRuntimeVersion" value="4.0.50826.0">
                <param name="initParams" value="feedURL=../../../../../../<?php print $map_feed; ?>,isRelative=1" />
                <param name="autoUpgrade" value="true">
                <a href="http://go.microsoft.com/fwlink/?LinkID=149156&amp;v=4.0.50826.0" style="text-decoration:none"><img alt="Get Microsoft Silverlight" src="http://go.microsoft.com/fwlink/?LinkId=161376" style="border-style:none"></a>
            </object>
            <iframe id="_sl_historyFrame" style="visibility:hidden;height:0px;width:0px;border:0px" ></iframe>
        </div>

<script type="text/javascript">
        function onSilverlightError(sender, args) {
            var appSource = "";
            if (sender != null && sender != 0) {
              appSource = sender.getHost().Source;
            }
            
            var errorType = args.ErrorType;
            var iErrorCode = args.ErrorCode;

            if (errorType == "ImageError" || errorType == "MediaError") {
              return;
            }

            var errMsg = "Unhandled Error in Silverlight Application " +  appSource + "\n" ;

            errMsg += "Code: "+ iErrorCode + "    \n";
            errMsg += "Category: " + errorType + "       \n";
            errMsg += "Message: " + args.ErrorMessage + "     \n";

            if (errorType == "ParserError") {
                errMsg += "File: " + args.xamlFile + "     \n";
                errMsg += "Line: " + args.lineNumber + "     \n";
                errMsg += "Position: " + args.charPosition + "     \n";
            }
            else if (errorType == "RuntimeError") {           
                if (args.lineNumber != 0) {
                    errMsg += "Line: " + args.lineNumber + "     \n";
                    errMsg += "Position: " +  args.charPosition + "     \n";
                }
                errMsg += "MethodName: " + args.methodName + "     \n";
            }

            throw new Error(errMsg);
        }
    </script>