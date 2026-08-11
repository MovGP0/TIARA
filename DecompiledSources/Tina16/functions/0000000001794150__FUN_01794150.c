/* Ghidra address: 01794150 */
/* Ghidra symbol: FUN_01794150 */


void FUN_01794150(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  iVar1 = (**(code **)(*param_2 + 0x28))();
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      uVar2 = (**(code **)(*param_2 + 0x30))(param_2,iVar3);
      FUN_00410f20(uVar2);
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  (**(code **)(*param_2 + 0x90))(param_2);
  FUN_004b67b0(param_2,0);
  return;
}

