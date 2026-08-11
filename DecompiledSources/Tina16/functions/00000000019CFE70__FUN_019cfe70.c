/* Ghidra address: 019cfe70 */
/* Ghidra symbol: FUN_019cfe70 */


void FUN_019cfe70(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  FUN_00409a70(param_2,*(undefined8 *)(param_1 + 0x18),0x1fd8);
  *(undefined8 *)(param_1 + 0x38) = param_3;
  *(undefined8 *)(param_1 + 0x30) = param_4;
  *(undefined4 *)(param_1 + 0x6c) = param_5;
  *(undefined4 *)(param_1 + 0x70) = param_6;
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(param_1 + 100) = 300;
  *(undefined4 *)(param_1 + 0x68) = 300;
  *(undefined4 *)(param_1 + 0x40) = 0x28;
  *(undefined4 *)(param_1 + 0x44) = 0x14;
  *(undefined4 *)(param_1 + 0x48) = 0x14;
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x68) + -0x28;
  uVar1 = FUN_019cfd00(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x48));
  *(undefined8 *)(param_1 + 0x90) = uVar1;
  uVar1 = FUN_019cfd00(*(int *)(param_1 + 100) - *(int *)(param_1 + 0x44),
                       *(undefined4 *)(param_1 + 0x4c));
  *(undefined8 *)(param_1 + 0x98) = uVar1;
  *(undefined4 *)(param_1 + 0x58) = 4;
  FUN_019cffb0(param_1,param_1 + 0x90,param_1 + 0xa0);
  FUN_019cffb0(param_1,param_1 + 0x98,param_1 + 0xa8);
  FUN_005fd4e0(*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x78),0);
  FUN_005fd6d0(*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x78),1);
  FUN_005fdab0(*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x80),0xf8f8c0);
  FUN_005fdcb0(*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x80),0);
  FUN_019d2180(param_1,*(undefined8 *)(param_1 + 8),0);
  return;
}

