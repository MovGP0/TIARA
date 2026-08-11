/* Ghidra address: 018aae70 */
/* Ghidra symbol: FUN_018aae70 */


void FUN_018aae70(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  longlong local_30;
  longlong local_28;
  longlong *local_20;
  
  local_40 = auStack_68;
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x278))(param_1);
  local_30 = (**(code **)(*plVar2 + 8))(plVar2,(int)param_1[0xa5] + -1);
  local_28 = 0;
  if (local_30 != 0) {
    cVar1 = FUN_004113d0(local_30,&PTR_FUN_018837f0);
    if (cVar1 == '\0') {
      local_20 = (longlong *)FUN_0196b2d0(&PTR_FUN_01934910,1,0);
    }
    else {
      local_20 = (longlong *)FUN_01884990(&PTR_FUN_018837f0,1,0);
    }
    local_28 = FUN_0196e3c0(&PTR_FUN_0193aeb8,1,0);
    FUN_0194f7b0(local_20,local_30,0);
    (**(code **)(*local_20 + 0xc0))(local_20,local_28);
    FUN_018aacb0(auStack_68);
    cVar1 = FUN_01976e80(local_28);
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0x298))(param_1);
      plVar2 = (longlong *)(**(code **)(*param_1 + 0x278))(param_1);
      uVar3 = FUN_0196f4e0(local_28,0);
      (**(code **)(*plVar2 + 0x108))(plVar2,(int)param_1[0xa5] + -1,uVar3);
      (**(code **)(*param_1 + 0x2a0))(param_1,1);
    }
  }
  if (local_28 != 0) {
    FUN_00410f20(local_28);
  }
  return;
}

