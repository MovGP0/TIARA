/* Ghidra address: 004d1e40 */
/* Ghidra symbol: FUN_004d1e40 */


void FUN_004d1e40(longlong param_1)

{
  int iVar1;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined1 local_9;
  
  local_20 = auStack_48;
  local_9 = *(undefined1 *)(param_1 + 0x1b);
  *(undefined1 *)(param_1 + 0x1b) = 1;
  iVar1 = thunk_FUN_041762c7(*(undefined8 *)(param_1 + 0x10));
  FUN_004d10c0(param_1,-1 < iVar1);
  return;
}

