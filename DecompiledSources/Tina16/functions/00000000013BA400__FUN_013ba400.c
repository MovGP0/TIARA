/* Ghidra address: 013ba400 */
/* Ghidra symbol: FUN_013ba400 */


void FUN_013ba400(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_488 [32];
  undefined8 local_468;
  undefined4 local_460;
  undefined8 local_458;
  undefined1 *local_450;
  undefined1 local_442 [1026];
  undefined8 local_40;
  undefined8 local_38 [3];
  undefined4 local_1c [3];
  
  local_450 = auStack_488;
  local_458 = 0;
  local_38[0] = 0;
  local_40 = 0;
  FUN_013b95e0(local_38,*(undefined4 *)(param_1 + 0x48));
  local_468 = local_38[0];
  FUN_00416cd0(&local_40,3,*(undefined8 *)(param_1 + 0x20),L"\\pmbus_temp");
  (**(code **)(*param_2 + 0x100))(param_2,local_40);
  local_1c[0] = 0x11;
  uVar2 = FUN_00442620(local_442,local_40);
  local_460 = param_5;
  local_468 = param_4;
  cVar1 = _PMBUS_ScanAndUpdateDataFile(*(undefined8 *)(param_1 + 0x18),uVar2,local_1c,param_3);
  if (cVar1 == '\0') {
    uVar2 = _PMBUS_GetLastErrorMsg(*(undefined8 *)(param_1 + 0x18));
    FUN_004167d0(&local_458,uVar2);
    uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,local_458);
    FUN_004134c0(uVar2);
  }
  else {
    (**(code **)(*param_2 + 0xd8))(param_2,local_40);
  }
  FUN_00414480(&local_458);
  FUN_00414560(&local_40,2);
  return;
}

