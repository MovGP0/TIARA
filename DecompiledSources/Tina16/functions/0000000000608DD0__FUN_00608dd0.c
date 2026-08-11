/* Ghidra address: 00608dd0 */
/* Ghidra symbol: FUN_00608dd0 */


void FUN_00608dd0(longlong *param_1,longlong param_2)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined8 local_a0;
  undefined1 *local_90;
  longlong local_88;
  undefined1 local_80 [112];
  
  local_90 = auStack_c8;
  puVar1 = auStack_c8;
  if ((param_2 != 0) &&
     (cVar2 = FUN_004113d0(param_2,&PTR_FUN_005f92e8), puVar1 = local_90, cVar2 == '\0')) {
    FUN_004b1060(param_1,param_2);
    return;
  }
  local_90 = puVar1;
  FUN_0060a440(param_1);
  FUN_00427930(&DAT_02011fd0);
  if (param_2 == 0) {
    FUN_0040d200(local_80,0x68,0);
    local_a8 = 0;
    local_a0 = 0;
    FUN_0060ab20(param_1,0,0,local_80);
  }
  else {
    local_88 = *(longlong *)(param_2 + 0x60);
    *(int *)(local_88 + 8) = *(int *)(local_88 + 8) + 1;
    FUN_00607b80(param_1[0xc]);
    param_1[0xc] = *(longlong *)(param_2 + 0x60);
    *(undefined1 *)((longlong)param_1 + 0x39) = *(undefined1 *)(param_2 + 0x39);
    *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
    *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0x58);
    uVar3 = FUN_00609f90(param_2);
    FUN_0060bbf0(param_1,uVar3);
    *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0x68);
  }
  FUN_00427ff0(&DAT_02011fd0);
  lVar4 = (**(code **)(*param_1 + 0x50))(param_1);
  *(bool *)((longlong)param_1 + 0x3a) = lVar4 != 0;
  (**(code **)(*param_1 + 0x20))(param_1,param_1);
  return;
}

