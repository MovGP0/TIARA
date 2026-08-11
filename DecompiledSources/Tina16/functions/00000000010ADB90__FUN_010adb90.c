/* Ghidra address: 010adb90 */
/* Ghidra symbol: FUN_010adb90 */


undefined1 FUN_010adb90(undefined8 param_1)

{
  int iVar1;
  undefined **ppuVar2;
  int iVar3;
  undefined8 local_res8 [4];
  undefined1 local_29;
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0;
  local_28 = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  local_29 = 0;
  iVar3 = 5;
  ppuVar2 = &PTR_u_AT91SAM9260_01f10200;
  do {
    FUN_0043e130(&local_20,local_res8[0]);
    FUN_0043e130(&local_28,*ppuVar2);
    iVar1 = FUN_00416db0(local_20,local_28);
    if (iVar1 == 0) {
      local_29 = 1;
      break;
    }
    ppuVar2 = ppuVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_00414560(&local_28,2);
  FUN_00414480(local_res8);
  return local_29;
}

