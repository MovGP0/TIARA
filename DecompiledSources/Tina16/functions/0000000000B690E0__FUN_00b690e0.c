/* Ghidra address: 00b690e0 */
/* Ghidra symbol: FUN_00b690e0 */


void FUN_00b690e0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  longlong *local_30;
  
  local_40 = auStack_68;
  local_30 = (longlong *)FUN_00b622d0(&DAT_00b61de8,1,param_1);
  local_30[0x10] = *(longlong *)(param_1 + 0x10);
  local_30[0x11] = *(longlong *)(param_1 + 0x18);
  iVar1 = FUN_00416420(param_3,0);
  if (iVar1 == 0) {
    FUN_00b62f90(local_30,param_2);
  }
  else {
    FUN_00b62fb0(local_30,param_2,param_3);
  }
  (**(code **)(*local_30 + -0x20))(local_30,1);
  return;
}

