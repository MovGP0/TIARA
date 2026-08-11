/* Ghidra address: 00685270 */
/* Ghidra symbol: FUN_00685270 */


void FUN_00685270(longlong *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x260))(param_1);
  if (iVar1 != -1) {
    uVar2 = (**(code **)(*param_1 + 0x260))(param_1);
    (**(code **)(*(longlong *)param_1[0x9e] + 0x98))((longlong *)param_1[0x9e],uVar2);
  }
  return;
}

