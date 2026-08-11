/* Ghidra address: 01232af0 */
/* Ghidra symbol: FUN_01232af0 */


void FUN_01232af0(longlong param_1,longlong *param_2,char param_3)

{
  double dVar1;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_38 = 0;
  local_30 = 0;
  local_20[0] = 0;
  local_28 = 0;
  if (param_3 == '\x01') {
    FUN_005fd4e0(param_2[0xf],DAT_02107718);
    FUN_005fdab0(param_2[0x10],DAT_02107718);
    FUN_005fc860(param_2[0xe],DAT_02107718);
    FUN_00414b50(local_20,DAT_02107728);
    FUN_00414b50(&local_28,DAT_02107730);
  }
  else {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x870),&local_30);
    FUN_00416ba0(local_20,local_30,L" dB/d");
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x878),&local_38);
    FUN_00416ba0(&local_28,local_38,L" dB/d");
    FUN_00414ad0(&DAT_02107728,local_20[0]);
    FUN_00414ad0(&DAT_02107730,local_28);
    FUN_005fd4e0(param_2[0xf],0xff);
    FUN_005fc860(param_2[0xe],0xff);
    FUN_005fdab0(param_2[0x10],0xffffff);
  }
  if (*(short *)(PTR_DAT_020021e8 + 0x1fa4) != 0x53) {
    dVar1 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x870));
    if (dVar1 != 0.0) {
      (**(code **)(*param_2 + 0x120))
                (param_2,(*(int *)PTR_DAT_02003528 - *(int *)PTR_DAT_02003d58) + 5,
                 *(int *)PTR_DAT_02005a18 + 10,local_20[0]);
    }
    dVar1 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x878));
    if (dVar1 != 0.0) {
      (**(code **)(*param_2 + 0x120))
                (param_2,*(int *)PTR_DAT_02004040 + 5,*(int *)PTR_DAT_02003a80 + 10,local_28);
    }
  }
  if (*(short *)(PTR_DAT_020021e8 + 0x1fa4) == 0x53) {
    dVar1 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x878));
    if (dVar1 != 0.0) {
      (**(code **)(*param_2 + 0x120))
                (param_2,*(int *)PTR_DAT_02001398 + 5,*(int *)PTR_DAT_020020a8 + 10,local_28);
    }
    dVar1 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x870));
    if (dVar1 != 0.0) {
      (**(code **)(*param_2 + 0x120))
                (param_2,(*(int *)PTR_DAT_02002748 - *(int *)PTR_DAT_02003d58) + 5,
                 *(int *)PTR_DAT_020020a8 + 10,local_20[0]);
    }
  }
  FUN_00414560(&local_38,2);
  FUN_00414560(&local_28,2);
  return;
}

