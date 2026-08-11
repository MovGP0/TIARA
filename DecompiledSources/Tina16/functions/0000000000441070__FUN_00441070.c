/* Ghidra address: 00441070 */
/* Ghidra symbol: FUN_00441070 */


undefined4 FUN_00441070(undefined8 param_1,undefined4 param_2,char param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = 0;
  local_28 = 0;
  local_10 = 0;
  local_18 = 0;
  local_2c = 0;
  FUN_00414b50(&local_10,param_1);
  if (param_3 != '\0') {
    uVar3 = FUN_00416740(param_1);
    uVar4 = thunk_FUN_0414b2cb(uVar3);
    if ((uVar4 & 0x400) != 0) {
      cVar1 = FUN_0043da30(param_1,&local_18);
      if (cVar1 != '\0') {
        cVar1 = FUN_00442020(local_18);
        if (cVar1 != '\0') {
          FUN_00441640(&local_28,param_1);
          FUN_0044f850(&local_20,local_28);
          FUN_00416ba0(&local_18,local_20,local_18);
        }
        FUN_00414b50(&local_10,local_18);
      }
    }
  }
  uVar3 = FUN_00416740(local_10);
  iVar2 = thunk_FUN_040f133e(uVar3,param_2);
  if (iVar2 == 0) {
    local_2c = thunk_FUN_03ce33a6();
  }
  FUN_00414560(&local_28,4);
  return local_2c;
}

