/* Ghidra address: 01618cb0 */
/* Ghidra symbol: FUN_01618cb0 */


undefined8 * FUN_01618cb0(undefined8 *param_1,longlong param_2,char param_3)

{
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_28 = 0;
  local_20 = 0;
  local_10 = 0;
  local_18 = 0;
  FUN_01615570(&local_10,*(undefined4 *)(param_2 + 0xc));
  FUN_0043f750(&local_18,*(undefined4 *)(param_2 + 8));
  FUN_00416cd0(param_1,3,local_10,&DAT_01618de8,local_18);
  if (param_3 != '\0') {
    FUN_00450070(&local_20,*param_1,L"IntReserved1258",&DAT_01618e24,1);
    FUN_00414ad0(param_1,local_20);
    FUN_00450070(&local_28,*param_1,L"ExtReserved1258",&LAB_01618e64,1);
    FUN_00414ad0(param_1,local_28);
  }
  FUN_00414560(&local_28,4);
  return param_1;
}

