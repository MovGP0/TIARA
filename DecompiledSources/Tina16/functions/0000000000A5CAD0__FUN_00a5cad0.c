/* Ghidra address: 00a5cad0 */
/* Ghidra symbol: FUN_00a5cad0 */


void FUN_00a5cad0(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  iVar1 = (**(code **)(*param_1 + 0x28))();
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      uVar2 = (**(code **)(*param_1 + 0x30))(param_1,iVar3);
      FUN_00410f20(uVar2);
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  *(undefined4 *)(param_1 + 0xf) = 10;
  FUN_004b5980(param_1);
  return;
}

