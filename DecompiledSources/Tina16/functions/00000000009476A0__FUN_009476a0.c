/* Ghidra address: 009476a0 */
/* Ghidra symbol: FUN_009476a0 */


undefined8 FUN_009476a0(undefined8 param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  iVar2 = FUN_00417170(&DAT_009477d0,param_2,1);
  if (iVar2 == 0) {
    FUN_00414be0(local_20,param_2);
  }
  else {
    FUN_00416430(&local_28,param_2,1,iVar2 + -1);
    uVar3 = 0;
    if (param_2 != 0) {
      uVar3 = *(uint *)(param_2 + -4) >> 1;
    }
    FUN_00416430(local_20,param_2,iVar2 + 1,uVar3 - iVar2);
    cVar1 = FUN_009009a0(local_28);
    if (cVar1 == '\0') {
      uVar4 = FUN_0044d490(&PTR_FUN_00900fb8,1,L"Invalid character error.");
      FUN_004134c0(uVar4);
    }
  }
  cVar1 = FUN_00900990(local_20[0]);
  if (cVar1 == '\0') {
    uVar4 = FUN_0044d490(&PTR_FUN_00900fb8,1,L"Invalid character error.");
    FUN_004134c0(uVar4);
  }
  FUN_00414b90(param_1,local_28);
  FUN_004145c0(&local_28,2);
  return param_1;
}

