/* Ghidra address: 00600830 */
/* Ghidra symbol: FUN_00600830 */


void FUN_00600830(longlong param_1,int *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *param_2 + -1;
  iVar3 = 1;
  if (0 < iVar4) {
    do {
      puVar1 = (undefined1 *)(param_1 + (longlong)iVar3 * 4);
      puVar2 = (undefined1 *)(param_1 + (longlong)iVar3 * 3);
      puVar2[2] = puVar1[2];
      puVar2[1] = puVar1[1];
      *puVar2 = *puVar1;
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (*param_2 < 0x100) {
    FUN_0040d200(param_1 + (longlong)*param_2 * 3,(longlong)((0x100 - *param_2) * 3),0);
    *param_2 = 0x100;
  }
  return;
}

