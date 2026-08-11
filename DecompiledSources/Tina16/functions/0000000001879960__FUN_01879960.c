/* Ghidra address: 01879960 */
/* Ghidra symbol: FUN_01879960 */


void FUN_01879960(longlong param_1)

{
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  local_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  if ((*(char *)(param_1 + 0x28) != '\0') && (*(char *)(param_1 + 0x80) == '\0')) {
    *(undefined1 *)(param_1 + 0x80) = 1;
    *(undefined4 *)(param_1 + 0xe0) = 0;
    FUN_0046f180(&local_30);
    FUN_00461840(param_1 + 0xe8,&local_30);
  }
  FUN_00460ba0(&local_30);
  return;
}

