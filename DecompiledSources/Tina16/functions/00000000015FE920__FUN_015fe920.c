/* Ghidra address: 015fe920 */
/* Ghidra symbol: FUN_015fe920 */


undefined8 FUN_015fe920(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_24;
  longlong local_20 [2];
  
  local_30 = 0;
  local_38 = 0;
  local_20[0] = 0;
  FUN_00414480(param_1);
  cVar1 = FUN_01b22620(param_2,L"entity_name",&local_24,0);
  if (cVar1 != '\0') {
    (**(code **)(*param_2 + 0x18))(param_2,local_20,local_24);
    iVar2 = FUN_004170c0(&DAT_015fea8c,local_20[0],1);
    iVar3 = 0;
    if (local_20[0] != 0) {
      iVar3 = *(int *)(local_20[0] + -4);
    }
    if (0 < iVar2) {
      FUN_00416dc0(&local_38,local_20[0],iVar2 + 1,(iVar3 - iVar2) + -1);
      FUN_0043ea00(&local_30,local_38);
      FUN_00414b50(local_20,local_30);
      FUN_00414ad0(param_1,local_20[0]);
    }
  }
  FUN_00414560(&local_38,2);
  FUN_00414480(local_20);
  return param_1;
}

