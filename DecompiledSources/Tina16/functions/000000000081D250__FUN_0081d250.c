/* Ghidra address: 0081d250 */
/* Ghidra symbol: FUN_0081d250 */


void FUN_0081d250(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(*(longlong *)(param_1 + 0x10) + 0x4d6) == '\x01') {
    FUN_00785c20(param_1);
    uVar1 = FUN_0065b870(*(undefined8 *)(DAT_02012668 + 0xa8));
    thunk_FUN_041b2403(uVar1,0x52c,0,0);
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  return;
}

