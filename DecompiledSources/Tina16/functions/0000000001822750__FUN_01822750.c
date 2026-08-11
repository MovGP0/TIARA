/* Ghidra address: 01822750 */
/* Ghidra symbol: FUN_01822750 */


void FUN_01822750(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  iVar1 = (**(code **)(*DAT_021102c8 + 0xb8))(DAT_021102c8,param_1);
  if (iVar1 == -1) {
    FUN_00416cd0(local_20,3,param_1,&LAB_01822858,param_2);
    (**(code **)(*DAT_021102c8 + 0x78))(DAT_021102c8,local_20[0]);
  }
  else {
    FUN_00416cd0(&local_28,3,param_1,&LAB_01822858,param_2);
    (**(code **)(*DAT_021102c8 + 0x40))(DAT_021102c8,iVar1,local_28);
  }
  FUN_00414560(&local_28,2);
  return;
}

