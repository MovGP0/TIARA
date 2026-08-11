/* Ghidra address: 0040f840 */
/* Ghidra symbol: FUN_0040f840 */


void FUN_0040f840(longlong param_1,longlong param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = param_3;
  if (param_3 - 1U < 0x80000000) {
    do {
      *(undefined1 *)(param_2 + iVar1) = 0;
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (param_3 <= param_4 + -1) {
    iVar1 = ((param_4 + -1) - param_3) + 1;
    iVar2 = param_3;
    do {
      *(undefined1 *)(param_2 + iVar2) = *(undefined1 *)(param_1 + (iVar2 - param_3));
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  if (param_4 < 0x20) {
    do {
      *(undefined1 *)(param_2 + param_4) = 0;
      param_4 = param_4 + 1;
    } while (param_4 != 0x20);
  }
  return;
}

