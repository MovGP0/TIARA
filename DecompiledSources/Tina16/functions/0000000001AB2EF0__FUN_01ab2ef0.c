/* Ghidra address: 01ab2ef0 */
/* Ghidra symbol: FUN_01ab2ef0 */


void FUN_01ab2ef0(longlong param_1,double param_2,undefined8 param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  undefined4 uVar1;
  
  uVar1 = FUN_01cd60f0(*(undefined8 *)(param_1 + 0xf8),param_2 + *(double *)(param_1 + 0xf0));
  *param_4 = uVar1;
  uVar1 = FUN_01cd60f0(*(undefined8 *)(param_1 + 0x100),param_3);
  *param_5 = uVar1;
  return;
}

