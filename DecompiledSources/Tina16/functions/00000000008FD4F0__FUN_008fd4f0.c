/* Ghidra address: 008fd4f0 */
/* Ghidra symbol: FUN_008fd4f0 */


undefined1 FUN_008fd4f0(undefined8 param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 local_res8 [4];
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  cVar1 = FUN_008fd560(local_res8[0]);
  if (cVar1 == '\0') {
    cVar1 = FUN_008fd890(local_res8[0]);
    if (cVar1 == '\0') {
      uVar2 = 0;
      goto LAB_008fd526;
    }
  }
  uVar2 = 1;
LAB_008fd526:
  FUN_00414480(local_res8);
  return uVar2;
}

