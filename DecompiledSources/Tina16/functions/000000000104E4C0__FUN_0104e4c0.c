/* Ghidra address: 0104e4c0 */
/* Ghidra symbol: FUN_0104e4c0 */


void FUN_0104e4c0(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x9d8) != 0) {
    *(undefined1 *)(param_1 + 0x8ea) = 1;
    *(undefined1 *)(param_1 + 0x941) = 0;
    FUN_00f8d1a0(*(undefined8 *)(param_1 + 0x9d8),1);
    FUN_00f8d180(*(undefined8 *)(param_1 + 0x9d8));
    if ((*(int *)(param_1 + 0x918) == 1) && (*(char *)(param_1 + 0x8eb) == '\0')) {
      FUN_00f8f400(*(undefined8 *)(param_1 + 0x9d8),param_2);
    }
  }
  return;
}

