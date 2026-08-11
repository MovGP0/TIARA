/* Ghidra address: 0134e850 */
/* Ghidra symbol: FUN_0134e850 */


void FUN_0134e850(uint param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  if (DAT_021080fc == -1) {
    iVar1 = DAT_021080f8 * 2;
    lVar3 = 0;
    if (DAT_021080f0 != 0) {
      lVar3 = *(longlong *)(DAT_021080f0 + -8);
    }
    if (lVar3 < iVar1) {
      FUN_00419260(&DAT_021080f0,&DAT_0134e818,1,(longlong)iVar1);
    }
    DAT_021080fc = DAT_021080f8;
    if (DAT_021080f8 <= iVar1 + -2) {
      iVar2 = ((iVar1 + -2) - DAT_021080f8) + 1;
      do {
        *(int *)(DAT_021080f0 + 4 + (longlong)DAT_021080f8 * 8) = DAT_021080f8 + 1;
        DAT_021080f8 = DAT_021080f8 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    *(undefined4 *)(DAT_021080f0 + 4 + (longlong)(iVar1 + -1) * 8) = 0xffffffff;
    DAT_021080f8 = iVar1;
  }
  iVar1 = DAT_021080fc;
  lVar3 = (longlong)DAT_021080fc;
  DAT_021080fc = *(undefined4 *)(DAT_021080f0 + 4 + (longlong)DAT_021080fc * 8);
  *(undefined4 *)(DAT_021080f0 + lVar3 * 8) = param_2;
  *(undefined4 *)(DAT_021080f0 + 4 + lVar3 * 8) = (&DAT_021078e8)[(int)(param_1 & 0x1ff)];
  (&DAT_021078e8)[(int)(param_1 & 0x1ff)] = iVar1;
  DAT_02108100 = DAT_02108100 + 1;
  return;
}

