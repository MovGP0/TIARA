/* Ghidra address: 0123b410 */
/* Ghidra symbol: FUN_0123b410 */


void FUN_0123b410(int param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 local_78;
  undefined1 local_70;
  int local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined8 local_50 [2];
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30 [2];
  
  local_58 = 0;
  local_50[0] = 0;
  local_30[0] = 0;
  local_38 = 0;
  local_40 = 0;
  FUN_00414b50(local_30,*(undefined8 *)(param_2 + 0x98));
  iVar3 = 0;
  if (local_30[0] != 0) {
    iVar3 = *(int *)(local_30[0] + -4);
  }
  FUN_00414480(&local_38);
  FUN_00414480(&local_40);
  iVar2 = 1;
  while( true ) {
    cVar1 = FUN_00c535d0(*(undefined2 *)(local_30[0] + -2 + (longlong)iVar2 * 2));
    if ((cVar1 == '\0') || (iVar3 < iVar2)) break;
    FUN_00416780(local_50,*(undefined2 *)(local_30[0] + -2 + (longlong)iVar2 * 2));
    FUN_00416ad0(&local_38,local_50[0]);
    iVar2 = iVar2 + 1;
  }
  while( true ) {
    cVar1 = FUN_00c53600(*(undefined2 *)(local_30[0] + -2 + (longlong)iVar2 * 2));
    if ((cVar1 == '\0') || (iVar3 < iVar2)) break;
    FUN_00416780(&local_58,*(undefined2 *)(local_30[0] + -2 + (longlong)iVar2 * 2));
    FUN_00416ad0(&local_40,local_58);
    iVar2 = iVar2 + 1;
  }
  if (iVar2 == iVar3 + 1) {
    local_68 = FUN_0043fc00(local_40);
    local_78 = local_38;
    local_70 = 0x11;
    local_68 = local_68 + param_1;
    local_60 = 0;
    FUN_00442f70(local_30,L"%s%d",&local_78,1);
    FUN_00414ad0(param_2 + 0x98,local_30[0]);
  }
  FUN_00414560(&local_58,2);
  FUN_00414560(&local_40,3);
  return;
}

