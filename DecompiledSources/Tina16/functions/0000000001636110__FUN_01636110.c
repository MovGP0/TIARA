/* Ghidra address: 01636110 */
/* Ghidra symbol: FUN_01636110 */


void FUN_01636110(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined8 local_40 [2];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_40[0] = 0;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  FUN_00414b50(&local_20,L">> PrintStateVars");
  FUN_0163cf20(param_1,local_20);
  FUN_0163d050(param_1,local_20);
  iVar2 = *(int *)(param_1 + 0x98);
  iVar1 = 1;
  if (0 < iVar2) {
    do {
      FUN_00414b50(&local_20,*(undefined8 *)(param_1 + 0xd8 + (longlong)iVar1 * 8));
      FUN_0043f750(local_40,iVar1);
      FUN_00416cd0(&local_20,4,L"Name: ",local_20,L", Idx: ",local_40[0]);
      FUN_0163cf20(param_1,local_20);
      FUN_0163d050(param_1,local_20);
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00414480(&local_20);
  FUN_0163cf20(param_1,local_20);
  FUN_0163d050(param_1,local_20);
  FUN_00414480(local_40);
  FUN_00414560(&local_30,3);
  return;
}

