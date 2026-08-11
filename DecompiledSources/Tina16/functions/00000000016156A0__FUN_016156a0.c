/* Ghidra address: 016156a0 */
/* Ghidra symbol: FUN_016156a0 */


undefined8 * FUN_016156a0(undefined8 *param_1,ulonglong *param_2,char param_3)

{
  undefined4 uVar1;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_38 = 0;
  local_30 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_10._4_4_ = (undefined4)(*param_2 >> 0x20);
  uVar1 = local_10._4_4_;
  local_10 = *param_2;
  FUN_01615570(local_20,uVar1);
  FUN_0043f750(&local_28,local_10 & 0xffffffff);
  FUN_00416cd0(param_1,3,local_20[0],&DAT_016157d8,local_28);
  if (param_3 != '\0') {
    FUN_00450070(&local_30,*param_1,L"IntReserved1258",&DAT_01615814,1);
    FUN_00414ad0(param_1,local_30);
    FUN_00450070(&local_38,*param_1,L"ExtReserved1258",&LAB_01615854,1);
    FUN_00414ad0(param_1,local_38);
  }
  FUN_00414560(&local_38,4);
  return param_1;
}

