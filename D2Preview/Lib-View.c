//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Library_D2()
{
	truclient_step("1", "Function Connect", "snapshot=D2_1.inf");
	{
		lr_start_transaction("T0_LoginScreen");
		truclient_step("1.1", "Navigate to URL", "snapshot=D2_1.1.inf");
		truclient_step("1.2", "Wait until Sign in button exists", "snapshot=D2_1.2.inf");
		lr_end_transaction("T0_LoginScreen",0);
		truclient_step("1.3", "Click on User name textbox", "snapshot=D2_1.3.inf");
		truclient_step("1.4", "Type User in User name textbox", "snapshot=D2_1.4.inf");
		truclient_step("1.5", "Click on Password passwordbox", "snapshot=D2_1.5.inf");
		truclient_step("1.6", "Type *** in Password passwordbox", "snapshot=D2_1.6.inf");
		lr_start_transaction("T1_Login");
		truclient_step("1.7", "Click on Sign in button", "snapshot=D2_1.7.inf");
		truclient_step("1.11", "Wait until Document list exists", "snapshot=D2_1.11.inf");
		lr_end_transaction("T1_Login",0);
	}

	return 0;
}
