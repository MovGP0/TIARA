/* Ghidra address: 00eae150 */
/* Ghidra symbol: FUN_00eae150 */


undefined8 FUN_00eae150(undefined8 param_1,char param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined8 local_res8 [4];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  iVar2 = 0;
  while( true ) {
    iVar1 = (**(code **)(*DAT_0202ea68 + 0x28))(DAT_0202ea68);
    if (iVar2 < iVar1) {
      (**(code **)(*DAT_0202ea68 + 0x18))(DAT_0202ea68,&local_30,iVar2);
      FUN_00441920(&local_28,local_30);
      FUN_004414c0(&local_20,local_28,0);
      iVar1 = FUN_0043e6d0(local_res8[0],local_20);
      bVar3 = iVar1 != 0;
    }
    else {
      bVar3 = false;
    }
    if (!bVar3) break;
    iVar2 = iVar2 + 1;
  }
  iVar1 = (**(code **)(*DAT_0202ea68 + 0x28))(DAT_0202ea68);
  if (iVar2 < iVar1) {
    local_58 = (**(code **)(*DAT_0202ea68 + 0x30))(DAT_0202ea68,iVar2);
  }
  else if (param_2 == '\0') {
    FUN_00416cd0(&local_48,5,*(undefined8 *)PTR_DAT_02001340,*(undefined8 *)PTR_DAT_02004c08,
                 &DAT_00eae45c,local_res8[0],L".pdb");
    local_58 = FUN_00eadc00(local_48);
    FUN_00416cd0(&local_50,5,*(undefined8 *)PTR_DAT_02001340,*(undefined8 *)PTR_DAT_02004c08,
                 &DAT_00eae45c,local_res8[0],L".pdb");
    (**(code **)(*DAT_0202ea68 + 0x80))(DAT_0202ea68,local_50,local_58);
  }
  else {
    FUN_00416cd0(&local_38,5,*(undefined8 *)PTR_DAT_02004438,*(undefined8 *)PTR_DAT_02004c08,
                 &DAT_00eae45c,local_res8[0],L".pdb");
    local_58 = FUN_00eadc00(local_38);
    FUN_00416cd0(&local_40,5,*(undefined8 *)PTR_DAT_02004438,*(undefined8 *)PTR_DAT_02004c08,
                 &DAT_00eae45c,local_res8[0],L".pdb");
    (**(code **)(*DAT_0202ea68 + 0x80))(DAT_0202ea68,local_40,local_58);
  }
  FUN_00414560(&local_50,7);
  FUN_00414480(local_res8);
  return local_58;
}

