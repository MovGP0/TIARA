/* Ghidra address: 01d072c0 */
/* Ghidra symbol: FUN_01d072c0 */


void FUN_01d072c0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined1 local_38 [11];
  undefined1 local_2d [4];
  byte local_29;
  
  if (-1 < *(char *)(param_1 + 0x3b8)) {
    lVar2 = FUN_01d06fb0(param_1,*(undefined1 *)(param_1 + 0xd1));
    if (lVar2 != 0) {
      cVar1 = FUN_00c3d380(lVar2,local_38,local_2d);
      if (cVar1 != '\0') {
        *(char *)(param_1 + 0x3b8) = (char)((*(char *)(param_1 + 0x3b8) + 1) % (int)(uint)local_29);
      }
    }
  }
  return;
}

