/* Ghidra address: 01ab2f40 */
/* Ghidra symbol: FUN_01ab2f40 */


void FUN_01ab2f40(longlong param_1,undefined8 param_2,undefined4 param_3,double *param_4,
                 undefined8 *param_5)

{
  double dVar1;
  undefined8 uVar2;
  
  dVar1 = (double)FUN_01cd62b0(*(undefined8 *)(param_1 + 0xf8));
  *param_4 = dVar1 - *(double *)(param_1 + 0xf0);
  uVar2 = FUN_01cd62b0(*(undefined8 *)(param_1 + 0x100),param_3);
  *param_5 = uVar2;
  return;
}

