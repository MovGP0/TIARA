/* Ghidra address: 00abf790 */
/* Ghidra symbol: FUN_00abf790 */


void FUN_00abf790(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined8 param_7)

{
  longlong lVar1;
  
  lVar1 = FUN_00410e60(&DAT_00abf6c0,1);
  *(undefined8 *)(lVar1 + 8) = param_2;
  *(undefined8 *)(lVar1 + 0x10) = param_3;
  *(undefined4 *)(lVar1 + 0x18) = param_4;
  *(undefined4 *)(lVar1 + 0x1c) = param_5;
  *(undefined4 *)(lVar1 + 0x20) = param_6;
  *(undefined8 *)(lVar1 + 0x28) = param_7;
  FUN_004ae7e0(param_1,lVar1);
  return;
}

