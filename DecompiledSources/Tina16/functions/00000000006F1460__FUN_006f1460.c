/* Ghidra address: 006f1460 */
/* Ghidra symbol: FUN_006f1460 */


void FUN_006f1460(undefined8 param_1,undefined4 *param_2,undefined4 param_3,undefined8 param_4)

{
  *param_2 = 0x106;
  param_2[1] = param_3;
  param_2[2] = 0;
  param_2[9] = 0xffffffff;
  param_2[0xd] = 0xffffffff;
  *(undefined8 *)(param_2 + 10) = param_4;
  return;
}

