/* Ghidra address: 017941c0 */
/* Ghidra symbol: FUN_017941c0 */


void FUN_017941c0(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(longlong *)(param_1 + 0xd10) + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),iVar2);
      FUN_00410f20(uVar1);
      FUN_004aedb0(*(undefined8 *)(param_1 + 0xd10),iVar2,0);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_004aee80(*(undefined8 *)(param_1 + 0xd10));
  return;
}

