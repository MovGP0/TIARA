/* Ghidra address: 00ea7ad0 */
/* Ghidra symbol: FUN_00ea7ad0 */


undefined8 * FUN_00ea7ad0(undefined8 *param_1,undefined8 param_2,char param_3)

{
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  FUN_00ea4190(&DAT_00ea1f68,param_1,param_2);
  FUN_00450070(&local_10,*param_1,&DAT_00ea7c88,L"\\r\\n",1);
  FUN_00414ad0(param_1,local_10);
  if (param_3 != '\0') {
    FUN_00450070(&local_18,*param_1,&DAT_00ea7cb4,L"(.*)",1);
    FUN_00414ad0(param_1,local_18);
    FUN_00450070(&local_20,*param_1,&DAT_00ea7ce0,&DAT_00ea7cf4,1);
    FUN_00414ad0(param_1,local_20);
    FUN_00450070(&local_28,*param_1,L"(.*)(.*)",&DAT_00ea7cb4,1);
    FUN_00414ad0(param_1,local_28);
    FUN_00450070(&local_30,*param_1,L"(.)(.)",&DAT_00ea7ce0,1);
    FUN_00414ad0(param_1,local_30);
  }
  FUN_00414560(&local_30,5);
  return param_1;
}

