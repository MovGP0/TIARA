/* Ghidra address: 0165dc50 */
/* Ghidra symbol: FUN_0165dc50 */


void FUN_0165dc50(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  FUN_0165dc20(param_1);
  iVar3 = 0;
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    iVar3 = (int)*(undefined8 *)(*(longlong *)(param_1 + 0xc0) + -8);
  }
  iVar3 = iVar3 + -1;
  iVar1 = 1;
  if (0 < iVar3) {
    do {
      lVar2 = (longlong)iVar1;
      FUN_0165d6a0(param_1,*(longlong *)(*(longlong *)(param_1 + 0xc0) + lVar2 * 8) + 0x50);
      FUN_004d1f00(*(undefined8 *)(*(longlong *)(param_1 + 0xc0) + lVar2 * 8));
      FUN_004d1ec0(*(undefined8 *)(*(longlong *)(param_1 + 0xc0) + lVar2 * 8));
      FUN_00410f20(*(undefined8 *)(*(longlong *)(param_1 + 0xc0) + lVar2 * 8));
      iVar1 = iVar1 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00419430(param_1 + 0xc0,&DAT_0165b7d8);
  return;
}

