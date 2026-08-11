/* Ghidra address: 008f9720 */
/* Ghidra symbol: FUN_008f9720 */


longlong FUN_008f9720(longlong param_1,int param_2,char param_3)

{
  if (param_3 == '\0') {
    *(int *)(param_1 + 0x18) = param_2;
  }
  else if (param_3 == '\x01') {
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + param_2;
  }
  else if (param_3 == '\x02') {
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x10) - param_2;
  }
  if (*(int *)(param_1 + 0x10) < *(int *)(param_1 + 0x18)) {
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x10);
  }
  else if (*(int *)(param_1 + 0x18) < 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return (longlong)*(int *)(param_1 + 0x18);
}

