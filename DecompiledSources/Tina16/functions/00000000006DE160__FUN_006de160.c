/* Ghidra address: 006de160 */
/* Ghidra symbol: FUN_006de160 */


void FUN_006de160(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_006dfe80(*(undefined8 *)(param_1 + 8));
  if (*(char *)(param_1 + 0x38) == '\0') {
    uVar1 = FUN_006dc7c0(param_1);
    uVar1 = FUN_0065b870(uVar1);
    thunk_FUN_041b2403(uVar1,0x1102,0x8001,*(undefined8 *)(param_1 + 0x20));
  }
  FUN_006dd340(param_1,0);
  return;
}

