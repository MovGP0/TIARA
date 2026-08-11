/* Ghidra address: 010883f0 */
/* Ghidra symbol: FUN_010883f0 */


void FUN_010883f0(longlong *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 local_28;
  int local_1c [3];
  
  local_28 = 0;
  (**(code **)(*param_1 + 0x348))(param_1,0);
  _MCU_SetAborted(param_1[0x164],0);
  if (param_1[0x9a4] != 0) {
    *(undefined4 *)(param_1[0x9a4] + 0x22c8) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x4c34) == '\0') {
    *(undefined4 *)((longlong)param_1 + 0x4c9c) = 0;
    if (*(char *)((longlong)param_1 + 0x4c37) == '\0') {
      uVar2 = _Debug_GetStackFrame(param_1[0x164],param_1 + 0x98f);
      *(undefined4 *)(param_1 + 0x992) = uVar2;
      if ((int)param_1[0x98f] == 0) {
        FUN_01087910(param_1,param_2);
      }
      else {
        uVar2 = FUN_01085d60(param_1,(int)param_1[0x991],param_1 + 0x997,0);
        *(undefined4 *)(param_1 + 0x993) = uVar2;
        do {
          FUN_01088320(param_1,local_1c,&local_28);
          if ((int)param_1[0x993] != local_1c[0]) break;
          iVar4 = FUN_00416db0(param_1[0x997],local_28);
        } while (iVar4 == 0);
      }
    }
    else {
      uVar2 = FUN_01085d30(param_1);
      *(undefined4 *)(param_1 + 0x991) = uVar2;
      iVar4 = 0;
      _Debug_Unwind_GetReturnAddr(param_1[0x165],uVar2,param_1 + 0x992);
      do {
        FUN_01087620(param_1);
        uVar2 = FUN_01085d30(param_1);
        *(undefined4 *)(param_1 + 0x991) = uVar2;
        uVar1 = FUN_010874a0();
        *(undefined1 *)((longlong)param_1 + 0x6c4) = uVar1;
        iVar4 = iVar4 + 1;
        if (iVar4 % 1000 == 0) {
          FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
        }
      } while (((int)param_1[0x991] != (int)param_1[0x992]) &&
              (*(char *)((longlong)param_1 + 0x6c4) == '\0'));
      for (iVar4 = 0;
          (iVar3 = FUN_01085d60(param_1,(int)param_1[0x991],param_1 + 0x996,0), iVar3 < 0 &&
          (iVar4 < 1000)); iVar4 = iVar4 + 1) {
        FUN_01087620(param_1);
        uVar2 = FUN_01085d30(param_1);
        *(undefined4 *)(param_1 + 0x991) = uVar2;
      }
    }
    uVar2 = FUN_01085d60(param_1,(int)param_1[0x991],param_1 + 0x996,0);
    *(undefined4 *)((longlong)param_1 + 0x4c94) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0x4c9c) = 1;
    FUN_01087460();
  }
  else if (*(char *)((longlong)param_1 + 0x4c37) == '\0') {
    uVar2 = _Debug_GetStackFrame(param_1[0x164],param_1 + 0x98f);
    *(undefined4 *)(param_1 + 0x992) = uVar2;
    if ((int)param_1[0x98f] == 0) {
      FUN_01087910(param_1,param_2);
    }
    else {
      *(undefined4 *)((longlong)param_1 + 0x4c8c) = 0;
      _Debug_SetTraceOverPc(param_1[0x164],0);
      uVar2 = FUN_01085d60(param_1,(int)param_1[0x991],param_1 + 0x996,0);
      *(undefined4 *)((longlong)param_1 + 0x4c94) = uVar2;
      (**(code **)(*param_1 + 0x340))(param_1,0,0);
      FUN_0108b840(param_1,1);
      *(undefined1 *)(param_1 + 0x17d) = 0;
      *(undefined4 *)(param_1 + 0xd8) = 9;
    }
  }
  else {
    uVar2 = FUN_01085d30(param_1);
    *(undefined4 *)(param_1 + 0x991) = uVar2;
    _Debug_Unwind_GetReturnAddr(param_1[0x165],uVar2,param_1 + 0x992);
    uVar2 = FUN_01085d60(param_1,(int)param_1[0x991],param_1 + 0x996,0);
    *(undefined4 *)((longlong)param_1 + 0x4c94) = uVar2;
    (**(code **)(*param_1 + 0x340))(param_1,0,0);
    FUN_0108b840(param_1,1);
    *(undefined1 *)(param_1 + 0x17d) = 0;
    *(undefined4 *)(param_1 + 0xd8) = 0xb;
  }
  FUN_00414480(&local_28);
  return;
}

