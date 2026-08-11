/* Ghidra address: 01877200 */
/* Ghidra symbol: FUN_01877200 */


void FUN_01877200(longlong *param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  
  FUN_01877510(param_1,param_2);
  iVar1 = (**(code **)(*param_1 + 0x18))(param_1);
  (**(code **)(*param_1 + 0x20))(param_1,iVar1 + 1);
  iVar1 = (**(code **)(*param_1 + 0x18))(param_1);
  iVar1 = iVar1 + -2;
  if (param_2 <= iVar1) {
    iVar5 = (param_2 - iVar1) + -1;
    do {
      uVar3 = (**(code **)(*param_1 + 0x28))(param_1,iVar1);
      uVar4 = (**(code **)(*param_1 + 0x28))(param_1,iVar1 + 1);
      iVar2 = (**(code **)(*param_1 + 0x10))(param_1);
      FUN_00409a70(uVar3,uVar4,(longlong)iVar2);
      iVar1 = iVar1 + -1;
      iVar5 = iVar5 + 1;
    } while (iVar5 != 0);
  }
  uVar3 = (**(code **)(*param_1 + 0x28))(param_1,param_2);
  iVar1 = (**(code **)(*param_1 + 0x10))(param_1);
  FUN_00409a70(param_3,uVar3,(longlong)iVar1);
  return;
}

