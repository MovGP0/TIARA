/* Ghidra address: 00d7c630 */
/* Ghidra symbol: FUN_00d7c630 */


void FUN_00d7c630(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined4 local_24;
  longlong *local_20;
  
  local_30 = auStack_58;
  if ((0 < *(int *)((longlong)param_1 + 0x84)) && (0 < (int)param_1[0x11])) {
    local_24 = *(undefined4 *)((longlong)param_1 + 0x114);
    local_20 = (longlong *)FUN_005fc570(&PTR_FUN_005f2d40,1);
    uVar2 = (**(code **)(*param_1 + 0x88))(param_1);
    (**(code **)(*local_20 + 0x10))(local_20,uVar2);
    cVar1 = *(char *)((longlong)param_1 + 0x99);
    if (cVar1 == '\x05') {
      plVar3 = (longlong *)(**(code **)(*param_1 + 0x88))(param_1);
      (**(code **)(*plVar3 + 0x10))(plVar3,param_1[0x25]);
      *(int *)((longlong)param_1 + 0x114) = (int)param_1[0x24];
    }
    else if (cVar1 == '\x06') {
      plVar3 = (longlong *)(**(code **)(*param_1 + 0x88))(param_1);
      (**(code **)(*plVar3 + 0x10))(plVar3,param_1[0x28]);
      *(int *)((longlong)param_1 + 0x114) = (int)param_1[0x26];
    }
    else if (cVar1 == '\a') {
      plVar3 = (longlong *)(**(code **)(*param_1 + 0x88))(param_1);
      (**(code **)(*plVar3 + 0x10))(plVar3,param_1[0x2a]);
      *(undefined4 *)((longlong)param_1 + 0x114) = *(undefined4 *)((longlong)param_1 + 0x134);
    }
    else if (cVar1 == '\b') {
      plVar3 = (longlong *)(**(code **)(*param_1 + 0x88))(param_1);
      (**(code **)(*plVar3 + 0x10))(plVar3,param_1[0x29]);
      *(int *)((longlong)param_1 + 0x114) = (int)param_1[0x27];
    }
    FUN_00d76910(param_1,param_2,param_3);
    plVar3 = (longlong *)(**(code **)(*param_1 + 0x88))(param_1);
    (**(code **)(*plVar3 + 0x10))(plVar3,local_20);
    *(undefined4 *)((longlong)param_1 + 0x114) = local_24;
    FUN_00410f20(local_20);
  }
  return;
}

