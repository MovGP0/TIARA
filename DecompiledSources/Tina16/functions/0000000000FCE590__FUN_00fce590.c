/* Ghidra address: 00fce590 */
/* Ghidra symbol: FUN_00fce590 */


void FUN_00fce590(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 param_5)

{
  FUN_00414610(param_5);
  FUN_00417c40(param_1 + 0x7f0,param_2 + 0x128,&DAT_00f68330);
  *(undefined8 *)(param_1 + 0xc88) = param_3;
  *(undefined4 *)(param_1 + 0x7e0) = param_4;
  FUN_00414ad0(param_1 + 0x7e8,param_5);
  FUN_00414480(&param_5);
  return;
}

