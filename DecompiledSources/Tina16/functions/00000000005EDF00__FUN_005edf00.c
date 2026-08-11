/* Ghidra address: 005edf00 */
/* Ghidra symbol: FUN_005edf00 */


int FUN_005edf00(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  longlong local_48;
  char local_40 [4];
  int local_3c;
  char local_35;
  int local_34;
  longlong local_30;
  undefined8 local_28;
  undefined8 *local_20;
  
  local_50 = auStack_78;
  local_34 = 0;
  local_48 = *(longlong *)(param_1 + 0x10);
  local_30 = FUN_005ebee0(*(undefined8 *)(param_1 + 0x10),param_2);
  if (local_30 != 0) {
    local_28 = *(undefined8 *)(local_48 + 8);
    FUN_005ea700(*(undefined8 *)(param_1 + 0x10),local_30);
    cVar1 = FUN_005eb550(local_48,param_3,local_40);
    if (cVar1 != '\0') {
      local_34 = local_3c;
      local_35 = local_40[0];
      cVar1 = FUN_004113d0(param_4,&PTR_FUN_0047cbc0);
      local_20 = param_4;
      if (cVar1 == '\0') {
        local_20 = (undefined8 *)FUN_00410e60(&PTR_FUN_0047cbc0,1);
      }
      if ((local_35 == '\x04') || (local_35 == '\0')) {
        lVar3 = FUN_004b6da0(local_20);
        FUN_004b6e40(local_20,lVar3 + local_3c);
        lVar3 = FUN_004b6da0(local_20);
        uVar2 = (**(code **)*local_20)(local_20);
        local_34 = FUN_005ebcb0(local_48,param_3,local_20[1] + lVar3,uVar2);
        if (local_20 != param_4) {
          lVar3 = (**(code **)*local_20)(local_20);
          lVar4 = FUN_004b6da0(local_20);
          FUN_004b8ba0(param_4,local_20,lVar3 - lVar4);
        }
      }
      if (local_20 != param_4) {
        FUN_00410f20(local_20);
      }
    }
    FUN_005ea700(*(undefined8 *)(param_1 + 0x10),local_28);
    thunk_FUN_0418fb4b(local_30);
  }
  return local_34;
}

