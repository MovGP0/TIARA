/* Ghidra address: 018776a0 */
/* Ghidra symbol: FUN_018776a0 */


void FUN_018776a0(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x18))(param_1);
  if ((int)param_1[1] < iVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1);
  }
  iVar1 = (**(code **)(*param_1 + 0x18))(param_1);
  (**(code **)(*param_1 + 0x20))(param_1,iVar1 + 1);
  iVar1 = (**(code **)(*param_1 + 0x18))(param_1);
  (**(code **)(*param_1 + 0x68))(param_1,iVar1 + -1,param_2);
  return;
}

