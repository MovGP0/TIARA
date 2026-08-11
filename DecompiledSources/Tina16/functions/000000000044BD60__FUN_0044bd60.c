/* Ghidra address: 0044bd60 */
/* Ghidra symbol: FUN_0044bd60 */


undefined8 FUN_0044bd60(undefined8 param_1,longlong param_2)

{
  int iVar1;
  LCID LVar2;
  undefined4 uVar3;
  LPCWSTR lpName;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_28;
  undefined8 local_20;
  
  local_28 = 0;
  local_20 = 0;
  if (param_2 == 0) {
    LVar2 = thunk_FUN_04195d02();
  }
  else {
    iVar1 = FUN_0044f080();
    if (iVar1 < 6) {
      uVar4 = FUN_00452d90();
      uVar5 = FUN_00452d90();
      FUN_0044c0a0(&local_28,param_2,0);
      uVar3 = FUN_00452cd0(uVar5,local_28);
      LVar2 = FUN_00452a10(uVar4,uVar3);
    }
    else {
      FUN_0044c0a0(&local_20,param_2,0);
      lpName = (LPCWSTR)FUN_00416740(local_20);
      LVar2 = LocaleNameToLCID(lpName,0);
    }
  }
  FUN_0044b7a0(param_1,LVar2);
  FUN_00414560(&local_28,2);
  return param_1;
}

