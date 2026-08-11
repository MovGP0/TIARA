/* Ghidra address: 006fd340 */
/* Ghidra symbol: FUN_006fd340 */


void FUN_006fd340(longlong param_1,longlong param_2)

{
  if (*(longlong *)(param_1 + 0x508) != 0) {
    FUN_007d7c60(*(longlong *)(param_1 + 0x508),*(undefined8 *)(param_1 + 0x510));
  }
  *(longlong *)(param_1 + 0x508) = param_2;
  if (param_2 == 0) {
    FUN_006fd300(param_1,0);
  }
  else {
    FUN_007d7c70(param_2,*(undefined8 *)(param_1 + 0x510));
    FUN_004d26c0(*(undefined8 *)(param_1 + 0x508),param_1);
  }
  FUN_006fd640(param_1);
  return;
}

