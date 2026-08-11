/* Ghidra address: 0080ac00 */
/* Ghidra symbol: FUN_0080ac00 */


void FUN_0080ac00(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (*(longlong *)(param_1 + 0x188) != 0) {
    iVar3 = (int)*(undefined8 *)(*(longlong *)(param_1 + 0x188) + -8);
  }
  iVar1 = 0;
  if (iVar3 - 1U < 0x80000000) {
    do {
      lVar2 = (longlong)iVar1;
      if (*(longlong *)(*(longlong *)(param_1 + 0x188) + 8 + lVar2 * 0x18) == param_2) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x188) + 8 + lVar2 * 0x18) = 0;
        *(undefined4 *)(*(longlong *)(param_1 + 0x188) + lVar2 * 0x18) = 0xffffffff;
        return;
      }
      iVar1 = iVar1 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

