--  Strategic_Response_Web_Service.applescript
--  Strategic Response Web Service

--  Created by keith scharding on 2/6/13.
--  Copyright (c) 2013 keith scharding. All rights reserved.

script Strategic_Response_Web_Service
	property parent : class "AMBundleAction"
	
	on runWithInput_fromAction_error_(input, anAction, errorRef)
		-- Add your code here, returning the data to be passed to the next action.
		
		return input
	end runWithInput_fromAction_error_
	
end script
