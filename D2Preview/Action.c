//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	truclient_step("1", "Call Function D2.Connect", "snapshot=Action_1.inf");
	truclient_step("5", "Wait until Document list exists", "snapshot=Action_5.inf");
	truclient_step("6", "Click on Document list", "snapshot=Action_6.inf");
	lr_start_transaction("T2_DocumentList");
	truclient_step("7", "Click on Document list", "snapshot=Action_7.inf");
	truclient_step("8", "Wait until Repository exists", "snapshot=Action_8.inf");
	lr_end_transaction("T2_DocumentList",0);
	truclient_step("10", "Click on Expand", "snapshot=Action_10.inf");
	truclient_step("12", "Click on Operations", "snapshot=Action_12.inf");
	truclient_step("15", "Click on PGTD", "snapshot=Action_15.inf");
	truclient_step("21", "Click on Big Wolf link", "snapshot=Action_21.inf");
	truclient_step("24", "Click on Operations Documentation link", "snapshot=Action_24.inf");
	truclient_step("27", "Click on Regulatory link", "snapshot=Action_27.inf");
	truclient_step("30", "Click on CPUC link", "snapshot=Action_30.inf");
	lr_start_transaction("T3_DocMetaData");
	truclient_step("32", "Click on Advice 3914 G5186 E.pdf link", "snapshot=Action_32.inf");
	truclient_step("35", "Verify DocumentName 's Visible Text contains Advice 3914-G5186-E.pdf", "snapshot=Action_35.inf");
	lr_end_transaction("T3_DocMetaData",0);
	truclient_step("36", "Click on Go back", "snapshot=Action_36.inf");
	lr_start_transaction("T98_Home");
	truclient_step("42", "Click on Home", "snapshot=Action_42.inf");
	lr_end_transaction("T98_Home",0);
	lr_start_transaction("T99_SignOut");
	truclient_step("44", "Click on M", "snapshot=Action_44.inf");
	truclient_step("45", "Click on Sign out", "snapshot=Action_45.inf");
	truclient_step("46", "Wait until You have been logged... exists", "snapshot=Action_46.inf");
	lr_end_transaction("T99_SignOut",0);

	return 0;
}
