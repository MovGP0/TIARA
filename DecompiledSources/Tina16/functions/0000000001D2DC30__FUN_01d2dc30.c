/* Ghidra address: 01d2dc30 */
/* Ghidra symbol: FUN_01d2dc30 */


void FUN_01d2dc30(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  
  uVar1 = FUN_01a90ee0(param_6);
  FUN_005fdab0(param_1[0x10],uVar1);
  *(undefined4 *)(param_1 + 0x12) = 0xcc0020;
  if (DAT_01ff3f84 == '\0') {
    FUN_005fdcb0(param_1[0x10],0);
  }
  else {
    FUN_005fdcb0(param_1[0x10],1);
  }
  uVar1 = FUN_01a90ee0(param_6);
  FUN_005fd4e0(param_1[0xf],uVar1);
  if (DAT_01ff3f84 == '\0') {
    FUN_005fd670(param_1[0xf],0);
  }
  else {
    FUN_005fd670(param_1[0xf],5);
  }
  FUN_005fd640(param_1[0xf],4);
  (**(code **)(*param_1 + 0xf8))(param_1,param_2,param_3,param_4,param_5);
  return;
}

