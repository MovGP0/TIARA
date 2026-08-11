/* Ghidra address: 014089a0 */
/* Ghidra symbol: FUN_014089a0 */


undefined1 FUN_014089a0(longlong param_1,int param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong local_res8 [4];
  undefined1 local_19;
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  local_19 = 1;
  if (param_2 == 0) {
    iVar3 = 0;
    if (local_res8[0] != 0) {
      iVar3 = *(int *)(local_res8[0] + -4);
    }
    if ((longlong)iVar3 < (longlong)(ulonglong)param_3) {
      local_19 = 0;
      goto LAB_01408a39;
    }
  }
  iVar3 = 0;
  if (local_res8[0] != 0) {
    iVar3 = *(int *)(local_res8[0] + -4);
  }
  iVar2 = 1;
  if (0 < iVar3) {
    do {
      cVar1 = FUN_01408910(*(undefined2 *)(local_res8[0] + -2 + (longlong)iVar2 * 2),param_2);
      if (cVar1 == '\0') {
        local_19 = 0;
        break;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
LAB_01408a39:
  FUN_00414480(local_res8);
  return local_19;
}

