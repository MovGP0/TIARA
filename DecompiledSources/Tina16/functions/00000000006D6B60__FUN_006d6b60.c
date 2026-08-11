/* Ghidra address: 006d6b60 */
/* Ghidra symbol: FUN_006d6b60 */


void FUN_006d6b60(longlong *param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [32];
  uint local_68;
  undefined8 local_60;
  undefined1 *local_50;
  undefined1 local_3c [12];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  uint local_24;
  undefined8 local_20;
  
  local_50 = auStack_88;
  plVar2 = (longlong *)FUN_00777cd0();
  cVar1 = (**(code **)(*plVar2 + 0x98))(plVar2);
  if ((cVar1 == '\0') || (*(int *)((longlong)param_1 + 0x324) == 0)) {
    FUN_0065d730(param_1,param_2);
  }
  else {
    uVar3 = FUN_0065b870(param_1);
    local_20 = thunk_FUN_0411fe47(uVar3);
    (**(code **)(*param_1 + 0xe0))(param_1,&local_30);
    FUN_00423b50(&local_30,*(undefined4 *)((longlong)param_1 + 0x324),
                 *(undefined4 *)((longlong)param_1 + 0x324));
    local_68 = local_24;
    thunk_FUN_041a27b3(local_20,local_30,local_2c,local_28);
    thunk_FUN_0418c361(local_20,-*(int *)((longlong)param_1 + 0x324),
                       -*(int *)((longlong)param_1 + 0x324),0);
    plVar2 = (longlong *)FUN_00777cd0();
    (**(code **)(*plVar2 + 0x1c0))(plVar2,local_3c,0x2b);
    uVar3 = FUN_00777cd0();
    uVar4 = FUN_0065b870(param_1);
    local_68 = local_68 & 0xffffff00;
    local_60 = 0;
    FUN_00778ec0(uVar3,uVar4,local_20,local_3c);
    uVar3 = FUN_0065b870(param_1);
    thunk_FUN_041a9b5c(uVar3,local_20);
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  return;
}

