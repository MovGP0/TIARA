/* Ghidra address: 010ae370 */
/* Ghidra symbol: FUN_010ae370 */


undefined1 FUN_010ae370(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 local_res8 [4];
  undefined1 local_29;
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  iVar2 = 1;
  iVar3 = 0x21;
  do {
    iVar4 = iVar2 + (iVar3 - iVar2) / 2;
    iVar1 = FUN_00416db0(local_res8[0],(&PTR_u_AT91SAM9261_SMALL_01f10220)[iVar4]);
    if (iVar1 == 0) {
      local_29 = 1;
      goto LAB_010ae3fb;
    }
    iVar1 = FUN_00416d10(local_res8[0],(&PTR_u_AT91SAM9261_SMALL_01f10220)[iVar4]);
    if (iVar1 < 1) {
      iVar3 = iVar4 + -1;
    }
    else {
      iVar2 = iVar4 + 1;
    }
  } while (iVar2 <= iVar3);
  local_29 = 0;
LAB_010ae3fb:
  FUN_00414480(local_res8);
  return local_29;
}

