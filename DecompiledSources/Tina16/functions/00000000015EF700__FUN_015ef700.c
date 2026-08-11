/* Ghidra address: 015ef700 */
/* Ghidra symbol: FUN_015ef700 */


undefined8 FUN_015ef700(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *local_40;
  undefined8 local_38;
  longlong local_30 [2];
  
  local_40 = (undefined8 *)0x0;
  local_30[0] = 0;
  local_38 = 0;
  (**(code **)(*param_2 + 0x288))(param_2,local_30);
  FUN_00414480(&local_38);
  iVar4 = 0;
  if (local_30[0] != 0) {
    iVar4 = *(int *)(local_30[0] + -4);
  }
  iVar2 = 1;
  if (0 < iVar4) {
    do {
      lVar3 = (longlong)iVar2;
      cVar1 = FUN_01b215c0(*(undefined2 *)(local_30[0] + -2 + lVar3 * 2),1);
      if ((cVar1 != '\0') ||
         (cVar1 = FUN_01b215f0(*(undefined2 *)(local_30[0] + -2 + lVar3 * 2)), cVar1 != '\0')) {
        FUN_00416780(&local_40,*(undefined2 *)(local_30[0] + -2 + lVar3 * 2));
        FUN_00416ad0(&local_38,local_40);
      }
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00414ad0(param_1,local_38);
  FUN_00414560(&local_40,3);
  return param_1;
}

