/* Ghidra address: 01d031b0 */
/* Ghidra symbol: FUN_01d031b0 */


undefined4 FUN_01d031b0(undefined8 param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  local_2c = 0xffffffff;
  FUN_01d03060(param_1,local_20,*(undefined8 *)PTR_DAT_02001f18);
  bVar1 = FUN_004170c0(&DAT_01d032d8,local_20[0],1);
  bVar2 = FUN_004170c0(&DAT_01d032e8,local_20[0],1);
  if (bVar1 != 0) {
    if (bVar2 == 0) {
      FUN_00416dc0(&local_28,local_20[0],bVar1 + 1,8);
    }
    else {
      FUN_00416dc0(&local_28,local_20[0],bVar1 + 1,((uint)bVar2 - (uint)bVar1) + -1);
    }
    iVar3 = FUN_00416db0(local_28,L"High Speed CMOS");
    if (iVar3 == 0) {
      FUN_00414b50(&local_28,&LAB_01d03324);
    }
    local_2c = FUN_01d3d6e0(&local_28);
  }
  FUN_00414560(&local_28,2);
  return local_2c;
}

