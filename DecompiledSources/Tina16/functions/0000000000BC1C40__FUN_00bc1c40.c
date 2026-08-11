/* Ghidra address: 00bc1c40 */
/* Ghidra symbol: FUN_00bc1c40 */


void FUN_00bc1c40(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if (*(int *)(param_1 + 0x88) < 1) {
    if ((*(ushort *)(param_1 + 0x34) & 1) == 0) {
      lVar1 = *(longlong *)(param_1 + 0x80);
      *(undefined8 *)(lVar1 + 0x20) = param_2;
      FUN_00bbbdb0(lVar1);
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x14c) = 1;
  }
  return;
}

