/* Ghidra address: 01bba640 */
/* Ghidra symbol: FUN_01bba640 */


undefined1 FUN_01bba640(undefined8 param_1)

{
  int iVar1;
  undefined **ppuVar2;
  int iVar3;
  undefined8 local_res8 [4];
  undefined1 local_19;
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  local_19 = 0;
  iVar3 = 0xb;
  ppuVar2 = &PTR_u_Input_ECL_01fde860;
  do {
    iVar1 = FUN_00416db0(local_res8[0],*ppuVar2);
    if (iVar1 == 0) {
      local_19 = 1;
      break;
    }
    ppuVar2 = ppuVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_00414480(local_res8);
  return local_19;
}

