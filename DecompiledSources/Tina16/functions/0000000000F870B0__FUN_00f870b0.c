/* Ghidra address: 00f870b0 */
/* Ghidra symbol: FUN_00f870b0 */


undefined1 FUN_00f870b0(longlong param_1,byte param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong local_res8 [4];
  undefined1 local_29;
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  local_29 = 1;
  iVar4 = 0;
  if (local_res8[0] != 0) {
    iVar4 = *(int *)(local_res8[0] + -4);
  }
  iVar3 = 1;
  if (0 < iVar4) {
    do {
      cVar1 = FUN_01b215f0(*(undefined2 *)(local_res8[0] + -2 + (longlong)iVar3 * 2));
      if (((cVar1 == '\0') &&
          (bVar2 = FUN_01b215c0(*(undefined2 *)(local_res8[0] + -2 + (longlong)iVar3 * 2),0),
          (param_2 & bVar2) == 0)) &&
         ((cVar1 = FUN_01b215f0(*(undefined2 *)(local_res8[0] + -2 + (longlong)iVar3 * 2)),
          cVar1 == '\0' || (param_2 != 0)))) {
        local_29 = 0;
        break;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00414480(local_res8);
  return local_29;
}

