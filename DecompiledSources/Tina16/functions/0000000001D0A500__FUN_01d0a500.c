/* Ghidra address: 01d0a500 */
/* Ghidra symbol: FUN_01d0a500 */


uint FUN_01d0a500(ushort *param_1)

{
  int iVar1;
  undefined **ppuVar2;
  int iVar3;
  ushort *local_res8 [4];
  uint local_2c;
  undefined8 local_28;
  undefined8 local_20;
  
  local_28 = 0;
  local_20 = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  FUN_0043ea00(&local_20,local_res8[0]);
  FUN_00414b50(local_res8,local_20);
  iVar3 = 0;
  local_2c = 0;
  if (local_res8[0] != (ushort *)0x0) {
    iVar3 = *(int *)(local_res8[0] + -2);
  }
  if (((iVar3 == 1) && (0x20 < *local_res8[0])) && (*local_res8[0] < 0x7b)) {
    local_2c = (uint)*local_res8[0];
  }
  else {
    FUN_0043e130(&local_28,local_res8[0]);
    FUN_00414b50(local_res8,local_28);
    iVar3 = 9;
    ppuVar2 = &PTR_DAT_01ff1920;
    do {
      iVar1 = FUN_00416db0(*ppuVar2,local_res8[0]);
      if (iVar1 == 0) {
        local_2c = *(uint *)(ppuVar2 + -1);
        break;
      }
      ppuVar2 = ppuVar2 + 2;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00414560(&local_28,2);
  FUN_00414480(local_res8);
  return local_2c;
}

