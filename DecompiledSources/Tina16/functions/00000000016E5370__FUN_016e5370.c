/* Ghidra address: 016e5370 */
/* Ghidra symbol: FUN_016e5370 */


void FUN_016e5370(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined1 param_5)

{
  undefined8 uVar1;
  
  FUN_016e2ea0(param_1,param_2,param_3,param_4,param_5);
  *(undefined8 *)(param_1 + 0x10) = *param_2;
  *(undefined8 *)(param_1 + 0x70) = param_2[1];
  *(undefined8 *)(param_1 + 0x68) = param_2[2];
  if (*(double *)(param_1 + 0x68) <= *(double *)(param_1 + 0x70) &&
      *(double *)(param_1 + 0x70) != *(double *)(param_1 + 0x68)) {
    uVar1 = *(undefined8 *)(param_1 + 0x70);
    *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x68) = uVar1;
  }
  FUN_016e5440(param_1,param_5);
  return;
}

