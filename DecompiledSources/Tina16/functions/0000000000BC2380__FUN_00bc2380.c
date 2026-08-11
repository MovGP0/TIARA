/* Ghidra address: 00bc2380 */
/* Ghidra symbol: FUN_00bc2380 */


void FUN_00bc2380(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  
  FUN_00414ad0(param_1 + 0x22,param_3);
  lVar1 = FUN_00416740();
  param_1[0x20] = lVar1;
  uVar2 = 0;
  if (param_1[0x22] != 0) {
    uVar2 = *(undefined4 *)(param_1[0x22] + -4);
  }
  *(undefined4 *)(param_1 + 0x21) = uVar2;
  (**(code **)(*param_1 + 0xb0))(param_1,param_2,param_4);
  (**(code **)(*param_1 + 0x148))(param_1);
  return;
}

