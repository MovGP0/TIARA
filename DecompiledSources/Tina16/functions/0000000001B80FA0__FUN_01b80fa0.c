/* Ghidra address: 01b80fa0 */
/* Ghidra symbol: FUN_01b80fa0 */


undefined1 FUN_01b80fa0(undefined8 param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 local_res8 [4];
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  iVar2 = FUN_00416db0(local_res8[0],L"nmos");
  if (iVar2 != 0) {
    iVar2 = FUN_00416db0(local_res8[0],L"pmos");
    if (iVar2 != 0) {
      uVar1 = 0;
      goto LAB_01b80fe4;
    }
  }
  uVar1 = 1;
LAB_01b80fe4:
  FUN_00414480(local_res8);
  return uVar1;
}

