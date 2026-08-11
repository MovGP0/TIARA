/* Ghidra address: 014b9ca0 */
/* Ghidra symbol: FUN_014b9ca0 */


void FUN_014b9ca0(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_40 = auStack_68;
  local_48 = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_20 = FUN_005ea3c0(&DAT_005e7878,1);
  FUN_00414b50(&local_30,*(undefined8 *)PTR_DAT_02002340);
  FUN_00416ba0(&local_38,L"HKEY_CURRENT_USER\\",local_30);
  FUN_005ea670(local_20,0xffffffff80000001);
  cVar1 = FUN_005ea880(local_20,local_30,1);
  if (cVar1 == '\0') {
    FUN_00416ba0(&local_48,local_38,L": not found");
    uVar3 = FUN_0044d490(&PTR_FUN_004334c0,1,local_48);
    FUN_004134c0(uVar3);
  }
  else {
    FUN_00414b50(&local_28,L"SermonOptions");
    cVar1 = FUN_005ebec0(local_20,local_28);
    if (cVar1 == '\0') {
      *(undefined4 *)(param_1 + 0xd70) = 1;
    }
    else {
      uVar2 = FUN_005eba50(local_20,local_28);
      *(undefined4 *)(param_1 + 0xd70) = uVar2;
    }
  }
  (**(code **)(**(longlong **)(param_1 + 0x710) + 0x268))
            (*(longlong **)(param_1 + 0x710),
             CONCAT31((int3)(*(uint *)(param_1 + 0xd70) >> 8),(*(uint *)(param_1 + 0xd70) & 1) != 0)
            );
  (**(code **)(**(longlong **)(param_1 + 0x718) + 0x268))
            (*(longlong **)(param_1 + 0x718),
             CONCAT31((int3)(*(uint *)(param_1 + 0xd70) >> 8),(*(uint *)(param_1 + 0xd70) & 2) != 0)
            );
  FUN_00410f20(local_20);
  FUN_00414480(&local_48);
  FUN_00414560(&local_38,3);
  return;
}

