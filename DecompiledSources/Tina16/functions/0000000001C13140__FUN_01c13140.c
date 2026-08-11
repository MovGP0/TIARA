/* Ghidra address: 01c13140 */
/* Ghidra symbol: FUN_01c13140 */


void FUN_01c13140(longlong param_1,ulonglong *param_2,byte param_3)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  int local_50 [2];
  undefined8 local_48;
  undefined8 local_40;
  
  local_48 = *param_2;
  local_40 = param_2[1];
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0xf0))(*(longlong **)(param_1 + 0x60));
  if (cVar2 != '\0') {
    if ((((*(char *)(*(longlong *)(param_1 + 0x60) + 0x366) != '\x02') &&
         (*(char *)(*(longlong *)(param_1 + 0x60) + 0x365) != '\0')) &&
        (*(char *)(*(longlong *)(param_1 + 0x60) + 0x363) == '\0')) &&
       (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x228))
                          (*(longlong **)(param_1 + 0x60)), cVar2 == '\0')) {
      return;
    }
    local_50[0] = FUN_00635840(*(undefined4 *)(*(longlong *)(param_1 + 0x60) + 200),0x13);
    local_50[1] = FUN_00635930(*(undefined4 *)(*(longlong *)(param_1 + 0x60) + 200),0xffffffce);
    FUN_005fd4e0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x310) + 0x78),
                 local_50[param_3]);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x60) + 0x310);
    uVar3 = (uint)(param_3 == 0);
    (**(code **)(*plVar1 + 200))(plVar1,(int)local_40 - uVar3,local_48._4_4_);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x60) + 0x310);
    (**(code **)(*plVar1 + 0xc0))(plVar1,local_48 & 0xffffffff,local_48._4_4_);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x60) + 0x310);
    (**(code **)(*plVar1 + 0xc0))(plVar1,local_48 & 0xffffffff,local_40._4_4_ - uVar3);
    FUN_005fd4e0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x310) + 0x78),
                 local_50[param_3 == 0]);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x60) + 0x310);
    (**(code **)(*plVar1 + 200))(plVar1,(int)local_40 + -1,local_48._4_4_ - (uint)param_3);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x60) + 0x310);
    (**(code **)(*plVar1 + 0xc0))(plVar1,(int)local_40 + -1,local_40._4_4_ + -1);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x60) + 0x310);
    (**(code **)(*plVar1 + 0xc0))(plVar1,(int)local_48 + (uint)param_3,local_40._4_4_ + -1);
  }
  return;
}

