/* Ghidra address: 01c32d30 */
/* Ghidra symbol: FUN_01c32d30 */


void FUN_01c32d30(longlong param_1)

{
  undefined8 local_10;
  
  local_10 = 0;
  if (*(int *)(param_1 + 0x14) == *(int *)(param_1 + 0x18)) {
    FUN_004194b0(&local_10,*(undefined8 *)(param_1 + 8),&DAT_01c32798);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x10);
    FUN_00419260(param_1 + 8,&DAT_01c32798,1,(longlong)*(int *)(param_1 + 0x14));
    FUN_00419430(&local_10,&DAT_01c32798);
  }
  FUN_00419430(&local_10,&DAT_01c32798);
  return;
}

