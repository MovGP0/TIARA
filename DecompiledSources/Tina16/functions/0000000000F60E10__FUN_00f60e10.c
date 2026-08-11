/* Ghidra address: 00f60e10 */
/* Ghidra symbol: FUN_00f60e10 */


bool FUN_00f60e10(longlong param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong local_res8 [4];
  bool local_31;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  FUN_0043e130(local_30,local_res8[0]);
  FUN_00414b50(local_res8,local_30[0]);
  iVar3 = 0;
  if (local_res8[0] != 0) {
    iVar3 = *(int *)(local_res8[0] + -4);
  }
  iVar4 = iVar3 + -1;
  iVar2 = 1;
  if (0 < iVar4) {
    do {
      cVar1 = FUN_01aa1060(*(undefined2 *)(local_res8[0] + -2 + (longlong)iVar2 * 2));
      if (cVar1 == '\0') {
        local_31 = false;
        goto LAB_00f60eaa;
      }
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  local_31 = *(short *)(local_res8[0] + -2 + (longlong)iVar3 * 2) == 0x48;
LAB_00f60eaa:
  FUN_00414480(local_30);
  FUN_00414480(local_res8);
  return local_31;
}

