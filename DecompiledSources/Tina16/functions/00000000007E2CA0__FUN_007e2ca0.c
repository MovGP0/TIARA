/* Ghidra address: 007e2ca0 */
/* Ghidra symbol: FUN_007e2ca0 */


void FUN_007e2ca0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  if (*(longlong *)(param_1 + 200) != 0) {
    iVar1 = FUN_007e2ef0();
    iVar3 = 0;
    if (-1 < iVar1 + -1) {
      do {
        lVar2 = FUN_007e2f10(*(undefined8 *)(param_1 + 200),iVar3);
        if (((lVar2 != param_1) && (*(char *)(lVar2 + 0x85) != '\0')) &&
           (*(char *)(lVar2 + 0x87) == *(char *)(param_1 + 0x87))) {
          FUN_007e2d20(lVar2,0);
        }
        iVar3 = iVar3 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  return;
}

