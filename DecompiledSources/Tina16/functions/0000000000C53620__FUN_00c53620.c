/* Ghidra address: 00c53620 */
/* Ghidra symbol: FUN_00c53620 */


undefined1 FUN_00c53620(longlong param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong local_res8 [4];
  undefined1 local_21;
  undefined8 local_20;
  
  local_20 = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  FUN_0043e130(&local_20,local_res8[0]);
  FUN_00414b50(local_res8,local_20);
  iVar3 = 0;
  if (local_res8[0] != 0) {
    iVar3 = *(int *)(local_res8[0] + -4);
  }
  iVar2 = 1;
  if (0 < iVar3) {
    do {
      cVar1 = FUN_01aa1060(*(undefined2 *)(local_res8[0] + -2 + (longlong)iVar2 * 2));
      if (cVar1 == '\0') {
        local_21 = 0;
        goto LAB_00c536a8;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  local_21 = 1;
LAB_00c536a8:
  FUN_00414480(&local_20);
  FUN_00414480(local_res8);
  return local_21;
}

