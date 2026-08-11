/* Ghidra address: 016e7150 */
/* Ghidra symbol: FUN_016e7150 */


void FUN_016e7150(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                 undefined1 param_5)

{
  FUN_016e2ea0(param_1,param_2,param_3,param_4,param_5);
  *(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xa0) = *(undefined8 *)(param_2 + 8);
  if (*(double *)(param_2 + 0x10) <= 1e-18) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x68) + 0x78) = 0;
  }
  else {
    *(double *)(*(longlong *)(param_1 + 0x68) + 0x78) = 1.0 / *(double *)(param_2 + 0x10);
  }
  if (*(double *)(param_2 + 0x18) <= 1e-18) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x68) + 0x80) =
         *(undefined8 *)(*(longlong *)(param_1 + 0x68) + 0x78);
  }
  else {
    *(double *)(*(longlong *)(param_1 + 0x68) + 0x80) = 1.0 / *(double *)(param_2 + 0x18);
  }
  FUN_016e7220(param_1,param_5);
  return;
}

