/* Ghidra address: 0040f6a0 */
/* Ghidra symbol: FUN_0040f6a0 */


void FUN_0040f6a0(int param_1,int param_2,int param_3,longlong param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  iVar2 = param_3;
  if (-1 < param_3 + -1) {
    do {
      *(undefined1 *)(param_4 + iVar1) = 0;
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (param_3 * 8 <= param_2) {
    param_2 = param_3 * 8 + -1;
  }
  if (param_1 < 0) {
    param_1 = 0;
  }
  if (param_1 <= param_2) {
    iVar1 = param_2 / 8;
    *(char *)(param_4 + param_1 / 8) = (char)(0xff << ((byte)(param_1 % 8) & 0x1f));
    iVar2 = param_1 / 8 + 1;
    if (iVar2 <= iVar1) {
      iVar3 = (iVar1 - iVar2) + 1;
      do {
        *(undefined1 *)(param_4 + iVar2) = 0xff;
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    *(byte *)(param_4 + iVar1) =
         *(byte *)(param_4 + iVar1) & (byte)(0xff >> (7U - (char)(param_2 % 8) & 0x1f));
  }
  return;
}

