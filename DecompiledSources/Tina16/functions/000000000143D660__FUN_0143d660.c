/* Ghidra address: 0143d660 */
/* Ghidra symbol: FUN_0143d660 */


void FUN_0143d660(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  ulonglong uVar2;
  undefined8 local_40 [2];
  undefined4 local_30;
  undefined1 local_2c [4];
  undefined8 local_28;
  undefined8 local_20;
  
  local_40[0] = FUN_00498310(param_5,param_6);
  local_20 = FUN_0064d1f0(param_2,local_40);
  uVar2 = FUN_0064d3a0(*(undefined8 *)(param_1 + 0x700),&local_20);
  local_28._4_4_ = (undefined4)(uVar2 >> 0x20);
  uVar1 = local_28._4_4_;
  local_28 = uVar2;
  FUN_00849eb0(*(undefined8 *)(param_1 + 0x700),uVar2 & 0xffffffff,uVar1,local_2c,&local_30);
  FUN_0143d630(param_1,local_30,*(undefined1 *)(*(longlong *)(param_1 + 0x748) + 0x499));
  return;
}

