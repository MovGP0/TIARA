/* Ghidra address: 0098cfa0 */
/* Ghidra symbol: FUN_0098cfa0 */


void FUN_0098cfa0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined1 *local_b0;
  undefined4 local_94;
  undefined8 local_90;
  longlong local_88;
  undefined4 local_6c;
  longlong local_68 [3];
  undefined4 local_4c;
  longlong local_48;
  longlong local_40;
  uint local_34;
  longlong *local_30;
  longlong local_28;
  longlong local_20;
  
  local_b0 = auStack_e8;
  cVar2 = (**(code **)(*param_1 + 0xe8))(param_1);
  if (cVar2 == '\0') {
    if (param_2 != (longlong *)0x0) {
      plVar3 = (longlong *)(**(code **)(*param_2 + 0x188))(param_2);
      local_c8 = 0;
      local_30 = (longlong *)(**(code **)(*plVar3 + 0x310))(plVar3,param_2,0x1fa,0);
      lVar4 = (**(code **)(*local_30 + 0x28))(local_30);
      lVar1 = local_48;
      while (local_48 = lVar4, local_28 = local_48, local_48 != 0) {
        local_40 = param_1[9];
        local_4c = FUN_00597e50(local_40 + 8,&local_48);
        lVar4 = (**(code **)(*local_30 + 0x28))(local_30);
        lVar1 = local_48;
      }
      local_48 = lVar1;
      (**(code **)(*local_30 + 0x20))(local_30);
      plVar3 = (longlong *)(**(code **)(*param_2 + 0x188))(param_2);
      (**(code **)(*plVar3 + 0x308))(plVar3);
    }
  }
  else if (param_2 != (longlong *)0x0) {
    local_20 = FUN_009aa410(&PTR_FUN_00945ed8,1);
    plVar3 = (longlong *)(**(code **)(*param_2 + 0x188))(param_2);
    local_c8 = 0;
    local_30 = (longlong *)(**(code **)(*plVar3 + 0x310))(plVar3,param_2,0x1fa,0);
    lVar4 = (**(code **)(*local_30 + 0x28))(local_30);
    lVar1 = local_68[0];
    while (local_68[0] = lVar4, local_28 = local_68[0], local_68[0] != 0) {
      local_6c = FUN_00597e50(local_20 + 8,local_68);
      lVar4 = (**(code **)(*local_30 + 0x28))(local_30);
      lVar1 = local_68[0];
    }
    local_68[0] = lVar1;
    (**(code **)(*local_30 + 0x20))(local_30);
    plVar3 = (longlong *)(**(code **)(*param_2 + 0x188))(param_2);
    (**(code **)(*plVar3 + 0x308))(plVar3);
    local_34 = *(int *)(local_20 + 0x10) - 1;
    if (-1 < (int)local_34) {
      do {
        if (*(uint *)(local_20 + 0x10) <= local_34) {
          FUN_00594f90();
        }
        local_88 = param_1[9];
        local_90 = *(undefined8 *)(*(longlong *)(local_20 + 8) + (longlong)(int)local_34 * 8);
        local_94 = FUN_00597e50(local_88 + 8,&local_90);
        local_34 = local_34 - 1;
      } while (local_34 != 0xffffffff);
    }
    FUN_00410f20(local_20);
  }
  return;
}

