/* Ghidra address: 01ca0510 */
/* Ghidra symbol: FUN_01ca0510 */


void FUN_01ca0510(longlong param_1)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  wchar_t *local_80;
  int local_6c;
  code *local_68;
  longlong local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  undefined8 local_30;
  int local_24;
  undefined8 *local_20;
  longlong local_18;
  undefined8 local_10;
  
  local_40 = auStack_a8;
  local_50 = 0;
  local_58 = 0;
  local_48 = 0;
  local_18 = 0;
  local_10 = 0;
  puVar1 = auStack_a8;
  if (*PTR_DAT_02003b20 == '\0') {
    if (((*(longlong *)(param_1 + 7000) == 0) && (*(longlong *)PTR_DAT_02005950 != 0)) &&
       (*(longlong *)(*(longlong *)PTR_DAT_02005950 + 0xd8) == param_1)) {
      *(undefined1 *)(param_1 + 0x24f8) = 0;
      iVar3 = *(int *)(*(longlong *)(param_1 + 0x2780) + 0x10);
      local_6c = iVar3 + -1;
      local_24 = 0;
      local_40 = auStack_a8;
      puVar1 = auStack_a8;
      if (-1 < local_6c) {
        do {
          local_40 = puVar1;
          local_6c = iVar3;
          local_20 = (undefined8 *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x2780),local_24);
          if ((((local_20 != (undefined8 *)0x0) &&
               (FUN_00414b50(&local_18,*local_20), *(char *)(local_20 + 0x12f) != '\0')) &&
              ((local_20[2] != 0 &&
               ((cVar2 = FUN_01c8cf20(param_1,local_20[2]), cVar2 != '\0' && (local_18 != 0)))))) &&
             (iVar3 = FUN_004170c0(*(undefined8 *)PTR_DAT_02004ec0,local_18,1), iVar3 == 0)) {
            FUN_004414c0(&local_48,local_18,0);
            FUN_00414b50(&local_18,local_48);
            FUN_00414480(&local_10);
            local_30 = FUN_00448ed0();
            FUN_0044a3a0(&local_10,L"yy-mm-dd hh_nn",local_30,PTR_DAT_02004830);
            local_88 = local_10;
            local_80 = L".TSC";
            FUN_00416cd0(&local_18,4,local_18,L" - autosave ");
            FUN_00414480(&local_10);
            FUN_01ca0100(auStack_a8,*local_20);
            FUN_014a1f90(0,local_20[2],local_18,1);
          }
          local_24 = local_24 + 1;
          local_6c = local_6c + -1;
          iVar3 = local_6c;
          puVar1 = local_40;
        } while (local_6c != 0);
      }
      local_68 = FUN_01ca0510;
      local_60 = param_1;
      FUN_00f833f0(&local_68,*(undefined4 *)PTR_DAT_02002718);
      puVar1 = local_40;
    }
    else {
      puVar1 = auStack_a8;
      if (*(char *)(param_1 + 0x24f8) == '\0') {
        local_68 = FUN_01ca0510;
        local_60 = param_1;
        FUN_00f833f0(&local_68,5000);
        puVar1 = local_40;
      }
      local_40 = puVar1;
      *(undefined1 *)(param_1 + 0x24f8) = 1;
      puVar1 = local_40;
    }
  }
  local_40 = puVar1;
  FUN_00414560(&local_58,3);
  FUN_00414560(&local_18,2);
  return;
}

