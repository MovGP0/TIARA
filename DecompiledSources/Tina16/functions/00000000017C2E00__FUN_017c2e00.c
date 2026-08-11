/* Ghidra address: 017c2e00 */
/* Ghidra symbol: FUN_017c2e00 */


void FUN_017c2e00(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_2 + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar1 = FUN_004aeac0(param_2,iVar2);
      FUN_004ae7e0(*(undefined8 *)(param_1 + 0x2d0),uVar1);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

