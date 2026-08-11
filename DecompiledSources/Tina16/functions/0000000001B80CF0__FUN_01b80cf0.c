/* Ghidra address: 01b80cf0 */
/* Ghidra symbol: FUN_01b80cf0 */


undefined1 FUN_01b80cf0(undefined8 param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 local_res8 [4];
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  iVar2 = FUN_00416db0(local_res8[0],L"diode");
  if (iVar2 != 0) {
    iVar2 = FUN_00416db0(local_res8[0],L"varactor");
    if (iVar2 != 0) {
      iVar2 = FUN_00416db0(local_res8[0],L"zener");
      if (iVar2 != 0) {
        iVar2 = FUN_00416db0(local_res8[0],L"schottky");
        if (iVar2 != 0) {
          uVar1 = 0;
          goto LAB_01b80d5c;
        }
      }
    }
  }
  uVar1 = 1;
LAB_01b80d5c:
  FUN_00414480(local_res8);
  return uVar1;
}

