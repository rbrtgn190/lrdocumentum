//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	truclient_step("1", "Call Function D2.Connect", "snapshot=Action_1.inf");
	truclient_step("5", "Wait until Document list exists", "snapshot=Action_5.inf");
	truclient_step("6", "Wait 3 seconds", "snapshot=Action_6.inf");
	truclient_step("7", "Click on Document list", "snapshot=Action_7.inf");
	lr_start_transaction("T2_DocumentList");
	truclient_step("8", "Click on Document list", "snapshot=Action_8.inf");
	truclient_step("9", "Wait until Repository exists", "snapshot=Action_9.inf");
	lr_end_transaction("T2_DocumentList",0);
	truclient_step("11", "Click on Expand", "snapshot=Action_11.inf");
	truclient_step("13", "Click on Operations", "snapshot=Action_13.inf");
	truclient_step("16", "Click on PGTD", "snapshot=Action_16.inf");
	truclient_step("22", "Click on Big Wolf link", "snapshot=Action_22.inf");
	truclient_step("25", "Click on Operations Documentation link", "snapshot=Action_25.inf");
	truclient_step("28", "Click on Regulatory link", "snapshot=Action_28.inf");
	truclient_step("31", "Click on CPUC link", "snapshot=Action_31.inf");
	lr_start_transaction("T3_DocMetaData");
	truclient_step("33", "Click on Advice 3914 G5186 E.pdf link", "snapshot=Action_33.inf");
	truclient_step("36", "Verify DocumentName 's Visible Text contains Advice 3914-G5186-E.pdf", "snapshot=Action_36.inf");
	lr_end_transaction("T3_DocMetaData",0);
	truclient_step("37", "Click on Go back", "snapshot=Action_37.inf");
	lr_start_transaction("T98_Home");
	truclient_step("43", "Click on Home", "snapshot=Action_43.inf");
	lr_end_transaction("T98_Home",0);
	lr_start_transaction("T99_SignOut");
	truclient_step("45", "Click on M", "snapshot=Action_45.inf");
	truclient_step("46", "Click on Sign out", "snapshot=Action_46.inf");
	truclient_step("47", "Wait until You have been logged... exists", "snapshot=Action_47.inf");
	lr_end_transaction("T99_SignOut",0);

	return 0;
}
