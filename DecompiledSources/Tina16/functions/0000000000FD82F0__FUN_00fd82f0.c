/* Ghidra address: 00fd82f0 */
/* Ghidra symbol: FUN_00fd82f0 */


void FUN_00fd82f0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 uVar1;
  
  FUN_00414610(param_7);
  FUN_00414ad0(param_1 + 0x700,param_7);
  *(undefined8 *)(param_1 + 0x708) = param_8;
  *(undefined4 *)(param_1 + 0x6fc) = param_6;
  *(undefined8 *)(param_1 + 0x710) = param_2;
  *(undefined8 *)(param_1 + 0x718) = param_3;
  *(undefined8 *)(param_1 + 0x720) = param_4;
  *(undefined8 *)(param_1 + 0x728) = param_5;
  uVar1 = FUN_00fd81f0(param_1,*(undefined4 *)(param_1 + 0x6fc));
  (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0x268))(*(longlong **)(param_1 + 0x6e8),uVar1);
  FUN_00fd8220(param_1,*(undefined4 *)(param_1 + 0x6fc),*(undefined8 *)(param_1 + 0x700));
  FUN_00b90440(*(undefined8 *)(param_1 + 0x6c8),*(undefined8 *)(param_1 + 0x708));
  FUN_00414480(&param_7);
  return;
}

