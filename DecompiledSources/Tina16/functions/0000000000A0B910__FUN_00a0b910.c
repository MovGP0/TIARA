/* Ghidra address: 00a0b910 */
/* Ghidra symbol: FUN_00a0b910 */


void FUN_00a0b910(longlong *param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined **ppuVar4;
  undefined8 *puVar5;
  undefined1 auStack_388 [40];
  undefined1 *local_360;
  longlong local_350;
  undefined8 local_348 [21];
  undefined8 *local_2a0 [6];
  undefined4 local_270;
  undefined4 local_26c;
  int local_264;
  
  local_360 = auStack_388;
  FUN_00a0b890(param_1);
  FUN_00410f20(param_1[10]);
  param_1[10] = 0;
  local_350 = param_1[9];
  uVar2 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
  *(undefined8 *)(local_350 + 0x10) = uVar2;
  FUN_004b6e40(uVar2,(longlong)param_2);
  FUN_004b84c0(param_3,*(undefined8 *)(*(longlong *)(local_350 + 0x10) + 8),(longlong)param_2);
  if (0 < param_2) {
    ppuVar4 = &PTR_FUN_01e6e6c0;
    puVar5 = local_348;
    for (lVar3 = 0x15; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = *ppuVar4;
      ppuVar4 = ppuVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    local_2a0[0] = local_348;
    FUN_00a0bea0(local_2a0,0x3e,0x278);
    FUN_004b6dc0(*(undefined8 *)(local_350 + 0x10),0);
    FUN_00a0ddb0(local_2a0,*(undefined8 *)(local_350 + 0x10));
    FUN_00a0bfc0(local_2a0,0xffffffff);
    *(undefined4 *)(local_350 + 0x1c) = local_270;
    *(undefined4 *)(local_350 + 0x18) = local_26c;
    *(bool *)(local_350 + 0x20) = local_264 == 1;
    iVar1 = FUN_00a0c2d0(local_2a0);
    *(bool *)((longlong)param_1 + 0x72) = iVar1 != 0;
    thunk_FUN_00a1bd80(local_2a0);
  }
  *(undefined1 *)((longlong)param_1 + 0x3a) = 1;
  (**(code **)(*param_1 + 0x20))(param_1,param_1);
  return;
}

