/* Ghidra address: 01615860 */
/* Ghidra symbol: FUN_01615860 */


undefined8 FUN_01615860(undefined8 param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined8 local_28;
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_20[0] = 0;
  local_28 = 0;
  local_10._4_4_ = (undefined4)(*param_2 >> 0x20);
  uVar1 = local_10._4_4_;
  local_10 = *param_2;
  FUN_01615570(local_20,uVar1);
  FUN_0043f750(&local_28,local_10 & 0xffffffff);
  FUN_00416cd0(param_1,3,local_20[0],&LAB_01615908,local_28);
  FUN_00414560(&local_28,2);
  return param_1;
}

