/* Ghidra address: 01a3d450 */
/* Ghidra symbol: FUN_01a3d450 */


undefined1 FUN_01a3d450(undefined8 param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 local_res8 [4];
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  iVar3 = FUN_004170c0(L"###END OF SESSION EVALUATION",local_res8[0],1);
  if (iVar3 < 1) {
    iVar3 = FUN_004170c0(L"[[Stop:]]",local_res8[0],1);
    if (iVar3 < 1) {
      cVar1 = FUN_01b25050(L"stop",local_res8[0]);
      if (cVar1 == '\0') {
        uVar2 = 0;
        goto LAB_01a3d4b4;
      }
    }
  }
  uVar2 = 1;
LAB_01a3d4b4:
  FUN_00414480(local_res8);
  return uVar2;
}

