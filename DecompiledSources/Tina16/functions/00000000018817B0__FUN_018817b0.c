/* Ghidra address: 018817b0 */
/* Ghidra symbol: FUN_018817b0 */


void FUN_018817b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  longlong lVar1;
  
  lVar1 = FUN_004b1ca0();
  *(undefined8 *)(lVar1 + 0x18) = param_2;
  *(undefined8 *)(lVar1 + 0x20) = param_3;
  FUN_00414ad0(lVar1 + 0x28,param_4);
  *(undefined8 *)(lVar1 + 0x30) = param_5;
  return;
}

