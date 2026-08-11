/* Ghidra address: 01055690 */
/* Ghidra symbol: FUN_01055690 */


undefined1 FUN_01055690(undefined2 *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined2 *local_res8 [4];
  undefined1 local_29;
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  iVar2 = FUN_004170c0(&LAB_01055784,local_res8[0],1);
  if (iVar2 + -1 < 1) {
    local_29 = 0;
  }
  else {
    cVar1 = FUN_01b215c0(*local_res8[0],1);
    if (cVar1 == '\0') {
      local_29 = 0;
    }
    else {
      iVar3 = 2;
      if (1 < iVar2 + -1) {
        iVar2 = iVar2 + -2;
        do {
          cVar1 = FUN_01b215c0(local_res8[0][(longlong)iVar3 + -1],1);
          if (cVar1 == '\0') {
            cVar1 = FUN_01b215f0(local_res8[0][(longlong)iVar3 + -1]);
            if (cVar1 == '\0') {
              local_29 = 0;
              goto LAB_01055746;
            }
          }
          iVar3 = iVar3 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      local_29 = 1;
    }
  }
LAB_01055746:
  FUN_00414480(local_res8);
  return local_29;
}

