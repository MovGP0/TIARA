/* Ghidra address: 01b66b60 */
/* Ghidra symbol: FUN_01b66b60 */


void FUN_01b66b60(longlong param_1)

{
  undefined8 local_10;
  
  local_10 = 0;
  FUN_00414b50(&local_10,&DAT_01b66bf4);
  if (*(char *)(*(longlong *)(param_1 + 0xda8) + 0x2c) == '\x03') {
    FUN_00414b50(&local_10,&LAB_01b66c04);
  }
  FUN_0064de00(*(undefined8 *)(param_1 + 0xd40),local_10);
  FUN_00414480(&local_10);
  return;
}

