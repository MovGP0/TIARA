/* Ghidra address: 008fd890 */
/* Ghidra symbol: FUN_008fd890 */


undefined1 FUN_008fd890(short *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  short *local_res8 [4];
  undefined1 local_3d;
  int local_3c;
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  local_3d = 0;
  iVar4 = 0;
  if (local_res8[0] != (short *)0x0) {
    iVar4 = *(int *)(local_res8[0] + -2);
  }
  local_3c = 0;
  iVar3 = 0;
  bVar1 = false;
  while (1 < iVar4) {
    cVar2 = FUN_008fdeb0(*local_res8[0]);
    if (cVar2 == '\0') {
      if ((*local_res8[0] != 0x2e) || (!bVar1)) goto LAB_008fd92c;
      bVar1 = false;
      iVar3 = iVar3 + 1;
    }
    else if (!bVar1) {
      bVar1 = true;
      local_3c = local_3c + 1;
    }
  }
  if ((iVar3 == 3) && (local_3c == 4)) {
    local_3d = 1;
  }
LAB_008fd92c:
  FUN_00414480(local_res8);
  return local_3d;
}

