/* Ghidra address: 018af6d0 */
/* Ghidra symbol: FUN_018af6d0 */


void FUN_018af6d0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined8 local_88;
  undefined4 local_80 [2];
  undefined1 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60 [2];
  undefined1 local_58;
  undefined4 local_50;
  undefined1 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_88 = 0;
  local_68 = 0;
  local_70 = 0;
  local_38 = 0;
  local_40 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  bVar5 = false;
  lVar2 = (**(code **)(**(longlong **)(param_1 + 0x848) + 0x278))(*(longlong **)(param_1 + 0x848));
  if (lVar2 != 0) {
    lVar2 = (**(code **)(**(longlong **)(param_1 + 0x848) + 0x278))(*(longlong **)(param_1 + 0x848))
    ;
    bVar5 = *(char *)(*(longlong *)(lVar2 + 0x28) + 0x18) == '\0';
  }
  if ((bVar5) && (*(char *)(*(longlong *)(param_1 + 0x848) + 0x531) != '\0')) {
    uVar3 = FUN_006d8710(*(undefined8 *)(*(longlong *)(param_1 + 0x760) + 0x490),0);
    uVar4 = FUN_0180bfb0();
    FUN_01809b60(uVar4,&local_28,L"clFirstPass");
    uVar1 = FUN_018a9b40(*(undefined8 *)(param_1 + 0x848));
    FUN_0043f750(&local_30,uVar1);
    FUN_00416cd0(local_20,3,local_28,&DAT_018af9fc,local_30);
    FUN_006d85c0(uVar3,local_20[0]);
  }
  else {
    uVar3 = FUN_006d8710(*(undefined8 *)(*(longlong *)(param_1 + 0x760) + 0x490),0);
    uVar4 = FUN_0180bfb0();
    FUN_01809b60(uVar4,&local_40,L"clPageOf");
    local_58 = 0;
    local_60[0] = param_3;
    local_50 = FUN_018a9b40(*(undefined8 *)(param_1 + 0x848));
    local_48 = 0;
    FUN_00442f70(&local_38,local_40,local_60,1);
    FUN_006d85c0(uVar3,local_38);
    uVar3 = FUN_0180bfb0();
    FUN_01809b60(uVar3,&local_70,L"clOf");
    local_80[0] = FUN_018a9b40(*(undefined8 *)(param_1 + 0x848));
    local_78 = 0;
    FUN_00442f70(&local_68,local_70,local_80,0);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x800),local_68);
    FUN_0064cbf0(*(undefined8 *)(param_1 + 0x740),
                 *(int *)(*(longlong *)(param_1 + 0x800) + 0x90) +
                 *(int *)(*(longlong *)(param_1 + 0x800) + 0x98) + 4);
  }
  FUN_0043f750(&local_88,param_3);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x748),local_88);
  FUN_00414480(&local_88);
  FUN_00414560(&local_70,2);
  FUN_00414560(&local_40,5);
  return;
}

