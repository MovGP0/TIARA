/* Ghidra address: 014cd2f0 */
/* Ghidra symbol: FUN_014cd2f0 */


undefined4 FUN_014cd2f0(longlong param_1,undefined8 param_2,byte param_3)

{
  longlong lVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 *local_70;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  char local_31 [5];
  undefined4 local_2c;
  undefined4 local_1c;
  undefined1 local_9;
  
  local_70 = auStack_b8;
  local_78 = 0;
  local_80 = 0;
  local_58 = 0;
  local_60 = 0;
  local_1c = 0;
  puVar2 = auStack_b8;
  if (*(char *)(param_1 + 0x22b8) != '\0') {
    local_2c = 1;
    if (param_3 < 8) {
      local_9 = ((int)CONCAT71((int7)((ulonglong)param_1 >> 8),1) << (param_3 & 0x1f) & 3U) != 0;
    }
    else {
      local_9 = false;
    }
    if (*(int *)(*(longlong *)(param_1 + 0x12a0) + 0x7e4) < 0xfa1) {
      local_48 = 0;
    }
    else {
      local_48 = *(undefined8 *)(param_1 + 0x22b0);
    }
    local_4c = 1;
    _XMC_SetCoverageOptions(*(undefined8 *)(param_1 + 0x1280),&local_4c);
    FUN_015fd070(*(undefined8 *)(param_1 + 0x1298),0,*(undefined8 *)(param_1 + 0x12a0),
                 param_1 + 0x38);
    _Param_SetAnalysisParameters
              (*(undefined8 *)(param_1 + 0x1280),
               *(undefined8 *)(*(longlong *)(param_1 + 0x22b0) + 0x750));
    local_98 = local_48;
    local_90 = *(undefined8 *)(param_1 + 0x1298);
    cVar3 = FUN_015f47a0(*(undefined8 *)(param_1 + 0x1280),*(undefined8 *)(param_1 + 0x28),param_3,
                         local_31);
    if (cVar3 == '\0') {
      FUN_015f8f20(&local_78,*(undefined8 *)(param_1 + 0x1280));
      FUN_00416880(&local_80,local_78);
      FUN_015fcf20(local_80,*(undefined8 *)(param_1 + 0x1280),local_2c,0);
    }
    FUN_0160bca0(*(undefined8 *)(param_1 + 0x1280),*(longlong *)(param_1 + 0x12a0),
                 *(int *)(*(longlong *)(param_1 + 0x12a0) + 0x7fc) == 0);
    FUN_0160f290(*(undefined8 *)(param_1 + 0x1280),*(undefined8 *)(param_1 + 0x12a0));
    lVar1 = *(longlong *)(param_1 + 0x12a0);
    if (0 < *(int *)(lVar1 + 0x7fc)) {
      _AI_SetSimulationProp
                (*(undefined8 *)(param_1 + 0x1280),*(undefined8 *)(lVar1 + 0x8c8),
                 *(undefined4 *)(lVar1 + 0x7f8),*(int *)(lVar1 + 0x7fc));
    }
    if (local_31[0] == '\0') {
      _InitializeVHDLSimulation(*(undefined8 *)(param_1 + 0x1280));
      FUN_0156c410(*(undefined8 *)(param_1 + 0x12a0),param_2,*(undefined8 *)(param_1 + 0x1280),0);
      puVar2 = local_70;
    }
    else {
      local_1c = 0xffffffff;
      puVar2 = local_70;
    }
  }
  local_70 = puVar2;
  FUN_00414480(&local_80);
  FUN_004144d0(&local_78);
  FUN_004144d0(&local_60);
  FUN_00414480(&local_58);
  return local_1c;
}

