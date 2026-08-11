/* Ghidra address: 0188c330 */
/* Ghidra symbol: FUN_0188c330 */


void FUN_0188c330(longlong param_1)

{
  undefined8 local_30;
  undefined8 local_28;
  undefined1 *local_20;
  
  FUN_0188c570(param_1);
  local_30 = FUN_00416740(*(undefined8 *)(param_1 + 0xc0));
  local_28 = 0;
  local_20 = &LAB_0188c38c;
  thunk_FUN_041e8c4b(*(undefined8 *)(param_1 + 0x50),1,&local_30);
  thunk_FUN_041b49d9(*(undefined8 *)(param_1 + 0x50));
  return;
}

