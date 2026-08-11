/* Ghidra address: 00807930 */
/* Ghidra symbol: FUN_00807930 */


undefined4 FUN_00807930(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  int iVar1;
  undefined8 local_30 [2];
  undefined8 local_20;
  
  local_30[0] = 0;
  local_20 = 0;
  FUN_00416830(&local_20,param_1 + 0x1c,0x20);
  iVar1 = (**(code **)(*param_4 + 0x28))(param_4);
  if (iVar1 != 0) {
    iVar1 = (**(code **)(*param_4 + 0x28))(param_4);
    (**(code **)(*param_4 + 0x18))(param_4,local_30,iVar1 + -1);
    iVar1 = FUN_0043e6d0(local_30[0],local_20);
    if (iVar1 == 0) goto LAB_008079b6;
  }
  (**(code **)(*param_4 + 0x78))(param_4,local_20);
LAB_008079b6:
  FUN_00414480(local_30);
  FUN_00414480(&local_20);
  return 1;
}

