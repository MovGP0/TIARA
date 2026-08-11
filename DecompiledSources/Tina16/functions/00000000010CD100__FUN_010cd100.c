/* Ghidra address: 010cd100 */
/* Ghidra symbol: FUN_010cd100 */


void FUN_010cd100(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 0x7301;
  *(undefined2 *)(param_1 + 0x2a) = 0x5601;
  *(undefined2 *)(param_1 + 0x53) = 0x7401;
  *(undefined4 *)(param_1 + 0x7c) = 0x74754f03;
  param_1[0xa5] = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0x3ef4f8b588e368f0;
  *(undefined4 *)(param_1 + 0xe0) = 100;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0xec) = 0;
  param_1[0xf4] = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0xffffffff;
  return;
}

