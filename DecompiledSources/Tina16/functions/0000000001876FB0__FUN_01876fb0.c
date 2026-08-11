/* Ghidra address: 01876fb0 */
/* Ghidra symbol: FUN_01876fb0 */


void FUN_01876fb0(longlong *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  FUN_01877510(param_1,param_2);
  iVar1 = (**(code **)(*param_1 + 0x18))(param_1);
  if (param_2 <= iVar1 + -2) {
    iVar1 = ((iVar1 + -2) - param_2) + 1;
    do {
      uVar3 = (**(code **)(*param_1 + 0x28))(param_1,param_2 + 1);
      uVar4 = (**(code **)(*param_1 + 0x28))(param_1,param_2);
      iVar2 = (**(code **)(*param_1 + 0x10))(param_1);
      FUN_00409a70(uVar3,uVar4,(longlong)iVar2);
      param_2 = param_2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  iVar1 = (**(code **)(*param_1 + 0x18))(param_1);
  (**(code **)(*param_1 + 0x20))(param_1,iVar1 + -1);
  return;
}

