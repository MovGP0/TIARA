/* Ghidra address: 01b80350 */
/* Ghidra symbol: FUN_01b80350 */


undefined1 FUN_01b80350(undefined8 param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 local_res8 [4];
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  cVar1 = FUN_01b80280(local_res8[0]);
  if (cVar1 == '\0') {
    iVar3 = FUN_00416db0(local_res8[0],&LAB_01b803d4);
    if (iVar3 != 0) {
      uVar2 = 0;
      goto LAB_01b8038d;
    }
  }
  uVar2 = 1;
LAB_01b8038d:
  FUN_00414480(local_res8);
  return uVar2;
}

