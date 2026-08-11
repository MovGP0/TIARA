/* Ghidra address: 01088180 */
/* Ghidra symbol: FUN_01088180 */


void FUN_01088180(longlong *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 local_28;
  int local_1c [3];
  
  local_28 = 0;
  if (*(char *)((longlong)param_1 + 0x4c34) == '\0') {
    *(undefined4 *)((longlong)param_1 + 0x4c9c) = 0;
    *(undefined4 *)((longlong)param_1 + 0x4c8c) = 0;
    _Debug_SetTraceOverPc(param_1[0x164],0);
    uVar1 = FUN_01085d60(param_1,(int)param_1[0x991],param_1 + 0x997,0);
    *(undefined4 *)(param_1 + 0x993) = uVar1;
    do {
      FUN_01088070(param_1,local_1c,&local_28);
      if ((int)param_1[0x993] != local_1c[0]) break;
      iVar2 = FUN_00416db0(param_1[0x997],local_28);
    } while (iVar2 == 0);
    uVar1 = FUN_01085d60(param_1,(int)param_1[0x991],param_1 + 0x996,0);
    *(undefined4 *)((longlong)param_1 + 0x4c94) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0x4c9c) = 1;
    FUN_01087460();
  }
  else {
    *(undefined4 *)((longlong)param_1 + 0x4c8c) = 0;
    _Debug_SetTraceOverPc(param_1[0x164],0);
    uVar1 = FUN_01085d60(param_1,(int)param_1[0x991],param_1 + 0x996,0);
    *(undefined4 *)((longlong)param_1 + 0x4c94) = uVar1;
    (**(code **)(*param_1 + 0x340))(param_1,0,0);
    FUN_0108b840(param_1,1);
    *(undefined1 *)(param_1 + 0x17d) = 0;
    *(undefined4 *)(param_1 + 0xd8) = 5;
  }
  FUN_00414480(&local_28);
  return;
}

