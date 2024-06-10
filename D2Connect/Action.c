//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	lr_start_transaction("T0_LoginScreen");
	truclient_step("1", "Navigate to URL", "snapshot=Action_1.inf");
	truclient_step("2", "Wait until Sign in button exists", "snapshot=Action_2.inf");
	lr_end_transaction("T0_LoginScreen",0);
	truclient_step("3", "Click on User name textbox", "snapshot=Action_3.inf");
	truclient_step("4", "Type User in User name textbox", "snapshot=Action_4.inf");
	truclient_step("5", "Click on Password passwordbox", "snapshot=Action_5.inf");
	truclient_step("6", "Type *** in Password passwordbox", "snapshot=Action_6.inf");
	lr_start_transaction("T1_Login");
	truclient_step("7", "Click on Sign in button", "snapshot=Action_7.inf");
	truclient_step("11", "Wait until Document list exists", "snapshot=Action_11.inf");
	lr_end_transaction("T1_Login",0);
	truclient_step("12", "Click on M", "snapshot=Action_12.inf");
	truclient_step("14", "Click on Sign out", "snapshot=Action_14.inf");

	return 0;
}
