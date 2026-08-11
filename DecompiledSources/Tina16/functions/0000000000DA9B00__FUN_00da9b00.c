/* Ghidra address: 00da9b00 */
/* Ghidra symbol: FUN_00da9b00 */


void FUN_00da9b00(longlong param_1)

{
  undefined8 local_10;
  
  local_10 = 0;
  FUN_004194b0(&local_10,*(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x10),&DAT_00da95d8);
  FUN_004194b0(*(longlong *)(param_1 + 0x80) + 0x10,
               *(undefined8 *)(*(longlong *)(param_1 + 0x80) + 8),&DAT_00da95d8);
  FUN_004194b0(*(longlong *)(param_1 + 0x80) + 8,
               *(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x30),&DAT_00da95d8);
  FUN_004194b0(*(longlong *)(param_1 + 0x80) + 0x30,local_10,&DAT_00da95d8);
  FUN_00419430(&local_10,&DAT_00da95d8);
  FUN_00419430(&local_10,&DAT_00da95d8);
  return;
}

