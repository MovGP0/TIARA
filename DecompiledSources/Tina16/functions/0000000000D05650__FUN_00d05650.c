/* Ghidra address: 00d05650 */
/* Ghidra symbol: FUN_00d05650 */


void FUN_00d05650(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x1d0);
  if (lVar1 != param_2) {
    if (lVar1 != 0) {
      if (*(char *)(param_1 + 0x1e0) == '\0') {
        FUN_004d2d90(lVar1,param_1);
      }
      else {
        *(undefined8 *)(param_1 + 0x1d0) = 0;
        *(undefined1 *)(param_1 + 0x1e0) = 0;
        FUN_00410f20(lVar1);
      }
    }
    *(longlong *)(param_1 + 0x1d0) = param_2;
    *(undefined1 *)(param_1 + 0x1e0) = 0;
    if (param_2 != 0) {
      FUN_004d26c0(param_2,param_1);
    }
  }
  return;
}

