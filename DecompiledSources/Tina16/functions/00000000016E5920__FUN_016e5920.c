/* Ghidra address: 016e5920 */
/* Ghidra symbol: FUN_016e5920 */


void FUN_016e5920(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                 undefined1 param_5)

{
  FUN_016e2ea0(param_1,param_2,param_3,param_4,param_5);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 8);
  FUN_016e5970(param_1,param_5);
  return;
}

