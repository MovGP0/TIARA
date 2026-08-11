/* Ghidra address: 00440c30 */
/* Ghidra symbol: FUN_00440c30 */


undefined1 FUN_00440c30(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong local_res8 [4];
  undefined1 local_21;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  local_21 = 1;
  if (local_res8[0] == 0) {
    lVar3 = FUN_0044d710(&PTR_FUN_00434f90,1,PTR_PTR_020058a8);
    *(undefined4 *)(lVar3 + 0x30) = 3;
    FUN_004134c0(lVar3);
  }
  FUN_0044f8b0(&local_10,local_res8[0]);
  FUN_00414b50(local_res8,local_10);
  cVar1 = FUN_00440b00(local_res8[0],1);
  if (cVar1 == '\0') {
    iVar2 = 0;
    if (local_res8[0] != 0) {
      iVar2 = *(int *)(local_res8[0] + -4);
    }
    if (2 < iVar2) {
      FUN_00441640(&local_18,local_res8[0]);
      iVar2 = FUN_00416db0(local_18,local_res8[0]);
      if (iVar2 != 0) {
        FUN_00441640(&local_20,local_res8[0]);
        cVar1 = FUN_00440c30(local_20);
        if ((cVar1 == '\0') || (cVar1 = FUN_00442400(local_res8[0]), cVar1 == '\0')) {
          local_21 = 0;
        }
        else {
          local_21 = 1;
        }
        goto LAB_00440d27;
      }
    }
    local_21 = FUN_00442400(local_res8[0]);
  }
LAB_00440d27:
  FUN_00414560(&local_20,3);
  FUN_00414480(local_res8);
  return local_21;
}

