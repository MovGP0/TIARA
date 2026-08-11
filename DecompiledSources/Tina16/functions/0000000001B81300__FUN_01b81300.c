/* Ghidra address: 01b81300 */
/* Ghidra symbol: FUN_01b81300 */


undefined1 FUN_01b81300(undefined8 param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 local_res8 [4];
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  iVar2 = FUN_00416db0(local_res8[0],&PTR_DAT_01b81394);
  if (iVar2 != 0) {
    iVar2 = FUN_00416db0(local_res8[0],&DAT_01b813a8);
    if (iVar2 != 0) {
      iVar2 = FUN_00416db0(local_res8[0],&DAT_01b813bc);
      if (iVar2 != 0) {
        uVar1 = 0;
        goto LAB_01b81358;
      }
    }
  }
  uVar1 = 1;
LAB_01b81358:
  FUN_00414480(local_res8);
  return uVar1;
}

