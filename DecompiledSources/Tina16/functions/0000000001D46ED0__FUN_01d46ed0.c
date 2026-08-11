/* Ghidra address: 01d46ed0 */
/* Ghidra symbol: FUN_01d46ed0 */


void FUN_01d46ed0(longlong param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 *param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_5;
  uVar2 = param_5[1];
  *(undefined8 *)(param_1 + 0x1c) = *param_2;
  *(undefined4 *)(param_1 + 0x24) = param_3;
  *(undefined4 *)(param_1 + 0x28) = param_4;
  *(undefined8 *)(param_1 + 0x2c) = uVar1;
  *(undefined8 *)(param_1 + 0x34) = uVar2;
  FUN_00414ad0(param_1 + 0x40,param_6);
  return;
}

