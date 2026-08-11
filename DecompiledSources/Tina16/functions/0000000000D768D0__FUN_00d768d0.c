/* Ghidra address: 00d768d0 */
/* Ghidra symbol: FUN_00d768d0 */


void FUN_00d768d0(longlong param_1)

{
  undefined8 uVar1;
  
  if ((*(char *)(param_1 + 0x8c) != '\0') && (*(longlong *)(param_1 + 0xa0) != 0)) {
    uVar1 = FUN_0065b870(*(longlong *)(param_1 + 0xa0));
    thunk_FUN_041b2403(uVar1,0x849,0,(longlong)(int)param_1);
  }
  return;
}

