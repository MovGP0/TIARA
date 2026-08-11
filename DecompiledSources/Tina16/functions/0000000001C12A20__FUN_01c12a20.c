/* Ghidra address: 01c12a20 */
/* Ghidra symbol: FUN_01c12a20 */


void FUN_01c12a20(longlong param_1,ulonglong *param_2,byte param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  uint uVar3;
  int local_50 [2];
  undefined8 local_48;
  undefined8 local_40;
  
  local_48 = *param_2;
  local_40 = param_2[1];
  if (*(char *)(param_1 + 0x363) != '\0') {
    uVar1 = FUN_01c07120(param_1);
    lVar2 = FUN_01c03e40(uVar1);
    local_50[0] = *(int *)(lVar2 + 0xc4);
    uVar1 = FUN_01c07120(param_1);
    lVar2 = FUN_01c03e40(uVar1);
    local_50[1] = *(undefined4 *)(lVar2 + 0xcc);
    FUN_005fd4e0(*(undefined8 *)(*(longlong *)(param_1 + 0x310) + 0x78),local_50[param_3]);
    uVar3 = (uint)(param_3 == 0);
    (**(code **)(**(longlong **)(param_1 + 0x310) + 200))
              (*(longlong **)(param_1 + 0x310),(int)local_40 - uVar3,local_48._4_4_);
    (**(code **)(**(longlong **)(param_1 + 0x310) + 0xc0))
              (*(longlong **)(param_1 + 0x310),local_48 & 0xffffffff,local_48._4_4_);
    (**(code **)(**(longlong **)(param_1 + 0x310) + 0xc0))
              (*(longlong **)(param_1 + 0x310),local_48 & 0xffffffff,local_40._4_4_ - uVar3);
    FUN_005fd4e0(*(undefined8 *)(*(longlong *)(param_1 + 0x310) + 0x78),local_50[param_3 == 0]);
    (**(code **)(**(longlong **)(param_1 + 0x310) + 200))
              (*(longlong **)(param_1 + 0x310),(int)local_40 + -1,local_48._4_4_ - (uint)param_3);
    (**(code **)(**(longlong **)(param_1 + 0x310) + 0xc0))
              (*(longlong **)(param_1 + 0x310),(int)local_40 + -1,local_40._4_4_ + -1);
    (**(code **)(**(longlong **)(param_1 + 0x310) + 0xc0))
              (*(longlong **)(param_1 + 0x310),(int)local_48 + (uint)param_3,local_40._4_4_ + -1);
  }
  return;
}

