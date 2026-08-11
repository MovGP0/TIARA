/* Ghidra address: 00c3c390 */
/* Ghidra symbol: FUN_00c3c390 */


void FUN_00c3c390(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_01d31740(param_1,*(undefined4 *)(param_2 + 0x10));
  iVar3 = *(int *)(param_2 + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar1 = FUN_004aeac0(param_2,iVar2);
      FUN_00c3c150(param_1,uVar1);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

