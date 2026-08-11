/* Ghidra address: 004c6e30 */
/* Ghidra symbol: FUN_004c6e30 */


void FUN_004c6e30(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined8 local_10;
  
  local_20 = auStack_48;
  local_10 = 0;
  FUN_004c6c50(param_1);
  FUN_00414b50(&local_10,*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x58));
  FUN_00414480(*(longlong *)(param_1 + 0x60) + 0x58);
  FUN_004c48b0(*(undefined8 *)(param_1 + 0x60),param_2);
  FUN_00414ad0(*(longlong *)(param_1 + 0x60) + 0x58,local_10);
  FUN_00414480(&local_10);
  return;
}

