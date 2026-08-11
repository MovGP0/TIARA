/* Ghidra address: 013bac10 */
/* Ghidra symbol: FUN_013bac10 */


undefined8 FUN_013bac10(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_8b8 [32];
  undefined1 *local_898;
  undefined1 *local_890;
  undefined8 local_888;
  undefined8 local_880;
  undefined8 local_878;
  undefined1 *local_870;
  undefined8 local_860;
  undefined8 local_858;
  undefined1 local_850 [1026];
  undefined1 local_44e [1026];
  undefined1 local_4c [4];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  undefined8 local_40;
  longlong local_38;
  undefined8 local_28;
  longlong *local_20;
  
  local_870 = auStack_8b8;
  local_888 = 0;
  local_880 = 0;
  local_878 = 0;
  local_40 = 0;
  local_858 = 0;
  local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *param_2 = 0;
  local_860 = 0;
  if (*(char *)(param_1 + 0xb8) != '\0') {
    if (*(longlong *)(param_1 + 0x68) == 0) {
      FUN_015fca00(&local_878,0,0);
      FUN_00414ad0(param_1 + 0x20,local_878);
    }
    else {
      local_898 = (undefined1 *)0x0;
      FUN_015fc970(&local_880,*(longlong *)(param_1 + 0x68),0,0);
      FUN_00414ad0(param_1 + 0x20,local_880);
    }
    FUN_00440c30(*(undefined8 *)(param_1 + 0x20));
    local_38 = FUN_0160d750(*(undefined8 *)(param_1 + 0xb0),*(undefined8 *)(param_1 + 0x20));
    if (local_38 != 0) {
      cVar1 = FUN_01773dd0(local_38);
      if (cVar1 != '\0') {
        uVar2 = FUN_01773d80(local_38);
        *(undefined8 *)(param_1 + 0x78) = uVar2;
        FUN_01773c50(local_38,&local_888,1,param_1 + 0x48);
        *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) & 0xfffffffe;
        uVar2 = FUN_00442620(local_44e,*(undefined8 *)(param_1 + 0x20));
        FUN_015fcc20(uVar2,param_1 + 0x18,0,0);
        uVar2 = FUN_01773d80(local_38);
        (**(code **)(*local_20 + 0x10))(local_20,uVar2);
        FUN_013b95e0(&local_858,*(undefined4 *)(param_1 + 0x48));
        local_898 = (undefined1 *)local_858;
        FUN_00416cd0(&local_40,3,*(undefined8 *)(param_1 + 0x20),L"\\pmbus_temp");
        (**(code **)(*local_20 + 0x100))(local_20,local_40);
        uVar2 = FUN_00442620(local_850,local_40);
        local_898 = local_48;
        local_890 = local_4c;
        cVar1 = _PMBUS_ParseDataFile(*(undefined8 *)(param_1 + 0x18),uVar2,param_1 + 0x48,local_44);
        if (cVar1 == '\0') {
          uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,L"Error: PMBUS Data File");
          FUN_004134c0(uVar2);
        }
        local_860 = _PMBUS_GetDataBuf(*(undefined8 *)(param_1 + 0x18),param_2);
      }
    }
  }
  local_28 = local_860;
  FUN_00410f20(local_20);
  FUN_00414560(&local_888,3);
  FUN_00414480(&local_858);
  FUN_00414480(&local_40);
  return local_28;
}

