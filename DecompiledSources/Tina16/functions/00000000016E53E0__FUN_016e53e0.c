/* Ghidra address: 016e53e0 */
/* Ghidra symbol: FUN_016e53e0 */


void FUN_016e53e0(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined1 param_5)

{
  *(undefined8 *)(param_1 + 0x10) = *param_2;
  *(undefined8 *)(param_1 + 0x70) = param_2[1];
  *(undefined8 *)(param_1 + 0x68) = param_2[1];
  FUN_016e5440(param_1,param_5);
  return;
}

