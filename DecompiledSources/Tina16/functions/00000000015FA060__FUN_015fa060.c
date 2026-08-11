/* Ghidra address: 015fa060 */
/* Ghidra symbol: FUN_015fa060 */


undefined1 FUN_015fa060(undefined8 param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 local_res8 [4];
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  FUN_0043e1a0(&local_10,local_res8[0]);
  iVar2 = FUN_00416db0(local_10,L"pic16c7x");
  if (iVar2 != 0) {
    FUN_0043e1a0(&local_18,local_res8[0]);
    iVar2 = FUN_00416db0(local_18,L"pic16c8x");
    if (iVar2 != 0) {
      uVar1 = 0;
      goto LAB_015fa0ce;
    }
  }
  uVar1 = 1;
LAB_015fa0ce:
  FUN_00414560(&local_18,2);
  FUN_00414480(local_res8);
  return uVar1;
}

