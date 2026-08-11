/* Ghidra address: 008215a0 */
/* Ghidra symbol: FUN_008215a0 */


void FUN_008215a0(longlong *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [32];
  int *local_68;
  undefined4 local_60;
  undefined1 local_50 [16];
  undefined1 *local_40;
  longlong *local_38;
  int local_30;
  int local_2c;
  longlong *local_28;
  undefined8 local_20;
  
  local_40 = auStack_88;
  local_38 = (longlong *)FUN_00781840();
  cVar1 = (**(code **)(*local_38 + 0x98))(local_38);
  if (cVar1 == '\0') {
    local_28 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
    uVar3 = thunk_FUN_041628f5(0,0x7ff7);
    FUN_0060b650(local_28,uVar3);
    iVar2 = (**(code **)(*local_28 + 0x60))(local_28);
    *(int *)(param_1 + 0xaf) = iVar2 / 4;
    iVar2 = (**(code **)(*local_28 + 0x48))(local_28,(longlong)iVar2 % 4 & 0xffffffff);
    *(int *)((longlong)param_1 + 0x57c) = iVar2 / 3;
    FUN_00410f20(local_28,(longlong)iVar2 % 3 & 0xffffffff);
  }
  else {
    local_20 = thunk_FUN_04137b5f(0);
    (**(code **)(*local_38 + 200))(local_38,local_50,0x14);
    local_60 = (**(code **)(*param_1 + 0x98))(param_1);
    local_68 = &local_30;
    FUN_00779290(local_38,local_20,local_50,1);
    if ((local_30 < 1) || (local_2c < 1)) {
      local_38 = (longlong *)FUN_007810f0();
      (**(code **)(*local_38 + 200))(local_38,local_50,0x14);
      local_60 = (**(code **)(*param_1 + 0x98))(param_1);
      local_68 = &local_30;
      FUN_00779290(local_38,local_20,local_50,1);
    }
    *(int *)(param_1 + 0xaf) = local_30;
    *(int *)((longlong)param_1 + 0x57c) = local_2c;
    thunk_FUN_041a2fd8(local_20);
  }
  return;
}

