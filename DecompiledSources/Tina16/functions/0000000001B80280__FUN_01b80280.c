/* Ghidra address: 01b80280 */
/* Ghidra symbol: FUN_01b80280 */


undefined1 FUN_01b80280(undefined8 param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 local_res8 [4];
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  iVar2 = FUN_00416db0(local_res8[0],&PTR_s_B_01b80314);
  if (iVar2 != 0) {
    iVar2 = FUN_00416db0(local_res8[0],&DAT_01b80328);
    if (iVar2 != 0) {
      iVar2 = FUN_00416db0(local_res8[0],&DAT_01b8033c);
      if (iVar2 != 0) {
        uVar1 = 0;
        goto LAB_01b802d8;
      }
    }
  }
  uVar1 = 1;
LAB_01b802d8:
  FUN_00414480(local_res8);
  return uVar1;
}

