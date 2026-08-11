/* Ghidra address: 013c2160 */
/* Ghidra symbol: FUN_013c2160 */


undefined8 FUN_013c2160(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  wchar_t *local_58;
  undefined8 local_48;
  undefined1 *local_40;
  undefined8 local_30;
  longlong *local_28;
  undefined8 local_20;
  
  local_40 = auStack_78;
  local_48 = 0;
  local_30 = 0;
  local_28 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_20 = FUN_00f309b0(&LAB_00f23b78,1);
  uVar1 = FUN_00f2f8e0(&LAB_00f22f08,1,param_3);
  FUN_00f30e70(local_20,L"pylibs",uVar1);
  FUN_00f2d1d0(local_20,&local_30);
  (**(code **)(*local_28 + 0x78))(local_28,local_30);
  if (*(int *)(param_1 + 0x38) == 0) {
    local_58 = L"ext_conf.json";
    FUN_00416cd0(&local_48,3,*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0xe8),&DAT_013c2320);
    (**(code **)(*local_28 + 0x100))(local_28,local_48);
  }
  FUN_00414ad0(param_2,local_30);
  FUN_00410f20(local_20);
  FUN_00410f20(local_28);
  FUN_00414480(&local_48);
  FUN_00414480(&local_30);
  return param_2;
}

