/* Ghidra address: 00689130 */
/* Ghidra symbol: FUN_00689130 */


void FUN_00689130(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  if (*(int *)(*(longlong *)(param_2 + 0x10) + 0x10) == -0x4e0) {
    if (*(longlong *)(param_1 + 0x508) != 0) {
      (**(code **)(param_1 + 0x508))(*(undefined8 *)(param_1 + 0x510),param_1);
    }
    if (*(longlong *)(param_1 + 0x4b0) != 0) {
      local_40 = *(undefined8 *)(*(longlong *)(param_2 + 0x10) + 0x18);
      uVar1 = *(undefined8 *)(*(longlong *)(param_2 + 0x10) + 0x20);
      uStack_38._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
      local_48 = (undefined4)local_40;
      local_44 = uStack_38._4_4_;
      uStack_38 = uVar1;
      uVar3 = FUN_0064d1f0(param_1,&local_48);
      local_30._4_4_ = (undefined4)(uVar3 >> 0x20);
      uVar2 = local_30._4_4_;
      local_30 = uVar3;
      (**(code **)(**(longlong **)(param_1 + 0x4b0) + 0xa8))
                (*(longlong **)(param_1 + 0x4b0),uVar3 & 0xffffffff,uVar2);
    }
  }
  return;
}

