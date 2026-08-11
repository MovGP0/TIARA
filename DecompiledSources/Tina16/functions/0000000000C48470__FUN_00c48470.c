/* Ghidra address: 00c48470 */
/* Ghidra symbol: FUN_00c48470 */


void FUN_00c48470(longlong param_1,byte param_2)

{
  undefined1 auStack_38 [40];
  undefined1 *local_10;
  
  local_10 = auStack_38;
  FUN_00411a80(param_1,param_2);
  thunk_FUN_03c938c5(*(undefined8 *)(param_1 + 0xa8));
  thunk_FUN_041d2921(*(undefined8 *)(param_1 + 0xa8));
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_004d1f00(*(longlong *)(param_1 + 0x68));
  }
  thunk_FUN_041652c2(*(undefined8 *)(param_1 + 0xa0));
  thunk_FUN_041d2921(*(undefined8 *)(param_1 + 0x90));
  thunk_FUN_041652c2(*(undefined8 *)(param_1 + 0x98));
  thunk_FUN_041d2921(*(undefined8 *)(param_1 + 0x88));
  thunk_FUN_041d2921(*(undefined8 *)(param_1 + 0x58));
  thunk_FUN_041d2921(*(undefined8 *)(param_1 + 0x60));
  FUN_00410ef0(param_1,param_2 & 0xfc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

