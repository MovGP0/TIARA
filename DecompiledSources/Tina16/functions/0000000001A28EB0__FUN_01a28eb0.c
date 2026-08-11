/* Ghidra address: 01a28eb0 */
/* Ghidra symbol: FUN_01a28eb0 */


undefined1 * FUN_01a28eb0(undefined1 *param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 local_res10 [3];
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined8 local_78;
  undefined1 *local_70;
  char local_61;
  undefined8 *local_60;
  char local_51;
  undefined8 *local_50;
  char local_41;
  undefined8 *local_40;
  undefined8 *local_38;
  undefined8 local_30;
  undefined8 *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_70 = auStack_a8;
  local_78 = 0;
  local_28 = (undefined8 *)0x0;
  local_30 = 0;
  local_10 = 0;
  local_18 = 0;
  local_20 = 0;
  local_res10[0] = param_2;
  FUN_00457870(local_res10,&local_30);
  local_88 = 1;
  FUN_00456a80(&local_30,&local_28,&DAT_01a2926c,0);
  local_38 = local_28;
  if (local_28 != (undefined8 *)0x0) {
    local_38 = (undefined8 *)local_28[-1];
  }
  if (local_38 == (undefined8 *)0x5) {
    iVar1 = FUN_00416db0(*local_28,&DAT_01a2927c);
    if (iVar1 == 0) goto code_r0x01a28f96;
  }
  uVar3 = FUN_0044d490(&PTR_FUN_004334c0,1,L"Wrong .ac line");
  FUN_004134c0(uVar3);
code_r0x01a28f96:
  FUN_00414480(&local_10);
  local_40 = local_28 + 1;
  FUN_004576f0(local_40,&local_10,*(undefined4 *)PTR_DAT_02005bd0);
  iVar1 = FUN_00416db0(local_10,&DAT_01a292bc);
  local_41 = iVar1 == 0;
  FUN_00414480(&local_10);
  if (local_41 == '\0') {
    FUN_00414480(&local_18);
    local_50 = local_28 + 1;
    FUN_004576f0(local_50,&local_18,*(undefined4 *)PTR_DAT_02005bd0);
    iVar1 = FUN_00416db0(local_18,&DAT_01a292d0);
    local_51 = iVar1 == 0;
    FUN_00414480(&local_18);
    if (local_51 == '\0') {
      FUN_00414480(&local_20);
      local_60 = local_28 + 1;
      FUN_004576f0(local_60,&local_20,*(undefined4 *)PTR_DAT_02005bd0);
      iVar1 = FUN_00416db0(local_20,&DAT_01a292e4);
      local_61 = iVar1 == 0;
      FUN_00414480(&local_20);
      if (local_61 == '\0') {
        FUN_00416ba0(&local_78,L"Wrong sweep type: ",local_28[1]);
        uVar3 = FUN_0044d490(&PTR_FUN_004334c0,1,local_78);
        FUN_004134c0(uVar3);
      }
      else {
        *param_1 = 2;
      }
    }
    else {
      *param_1 = 1;
    }
  }
  else {
    *param_1 = 0;
  }
  uVar2 = FUN_0043fc00(local_28[2]);
  *(undefined4 *)(param_1 + 4) = uVar2;
  uVar3 = FUN_00b8f030(local_28[3]);
  *(undefined8 *)(param_1 + 8) = uVar3;
  uVar3 = FUN_00b8f030(local_28[4]);
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  FUN_00414480(&local_78);
  FUN_00414480(&local_30);
  FUN_00419430(&local_28,&DAT_004210c0);
  FUN_00414560(&local_20,3);
  return param_1;
}

