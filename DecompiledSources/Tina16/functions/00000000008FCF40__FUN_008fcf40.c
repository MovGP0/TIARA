/* Ghidra address: 008fcf40 */
/* Ghidra symbol: FUN_008fcf40 */


undefined1 FUN_008fcf40(undefined8 param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 local_res8 [4];
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  cVar1 = FUN_008fd130(local_res8[0]);
  if (cVar1 == '\0') {
    cVar1 = FUN_008fcfb0(local_res8[0]);
    if (cVar1 == '\0') {
      uVar2 = 0;
      goto LAB_008fcf76;
    }
  }
  uVar2 = 1;
LAB_008fcf76:
  FUN_00414480(local_res8);
  return uVar2;
}

