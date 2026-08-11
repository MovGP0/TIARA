/* Ghidra address: 00806900 */
/* Ghidra symbol: FUN_00806900 */


void FUN_00806900(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x678) != param_2) {
    *(char *)(param_1 + 0x678) = param_2;
    if ((*(char *)(param_1 + 0x678) != '\0') &&
       (*(char *)(*(longlong *)(param_1 + 0x688) + 0x10) != '\0')) {
      FUN_0080fd80(*(undefined8 *)(param_1 + 0x688),0);
    }
    FUN_00806770(param_1);
  }
  return;
}

