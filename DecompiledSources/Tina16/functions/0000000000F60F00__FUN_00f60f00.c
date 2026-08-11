/* Ghidra address: 00f60f00 */
/* Ghidra symbol: FUN_00f60f00 */


undefined1 FUN_00f60f00(undefined8 param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 local_res8 [4];
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  cVar1 = FUN_00f60e10(local_res8[0]);
  if (cVar1 == '\0') {
    cVar1 = FUN_00f60b80(local_res8[0]);
    if (cVar1 == '\0') {
      uVar2 = 0;
      goto LAB_00f60f36;
    }
  }
  uVar2 = 1;
LAB_00f60f36:
  FUN_00414480(local_res8);
  return uVar2;
}

