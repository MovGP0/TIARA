/* Ghidra address: 00cc3cb0 */
/* Ghidra symbol: FUN_00cc3cb0 */


void FUN_00cc3cb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  longlong lVar1;
  
  lVar1 = FUN_00cc3df0(DAT_02019f70);
  FUN_00414ad0(lVar1 + 0x18,param_1);
  FUN_00414ad0(lVar1 + 0x20,param_2);
  FUN_00414ad0(lVar1 + 0x28,param_3);
  FUN_00414ad0(lVar1 + 0x30,param_4);
  FUN_00414ad0(lVar1 + 0x38,param_5);
  *(undefined8 *)(lVar1 + 0x40) = param_6;
  *(undefined8 *)(lVar1 + 0x48) = param_7;
  return;
}

