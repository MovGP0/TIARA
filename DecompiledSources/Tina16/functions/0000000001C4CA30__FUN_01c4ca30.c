/* Ghidra address: 01c4ca30 */
/* Ghidra symbol: FUN_01c4ca30 */


int FUN_01c4ca30(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined8 local_res10 [3];
  int local_4c;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30 [2];
  
  local_48 = 0;
  local_40[0] = 0;
  local_30[0] = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x780) + 0x4f0);
  iVar2 = (**(code **)(*plVar1 + 0x28))(plVar1);
  FUN_0043e1a0(local_40,local_res10[0]);
  FUN_00414b50(local_res10,local_40[0]);
  local_4c = 0;
  if (-1 < iVar2 + -1) {
    do {
      plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x780) + 0x4f0);
      (**(code **)(*plVar1 + 0x18))(plVar1,&local_48,local_4c);
      FUN_0043e1a0(local_30,local_48);
      iVar3 = FUN_004170c0(L"wurth",local_res10[0],1);
      if (0 < iVar3) {
        FUN_00414b50(local_res10,&DAT_01c4cbec);
      }
      iVar3 = FUN_004170c0(local_res10[0],local_30[0],1);
      if (0 < iVar3) goto LAB_01c4cb5f;
      local_4c = local_4c + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  local_4c = 0;
LAB_01c4cb5f:
  FUN_00414560(&local_48,2);
  FUN_00414480(local_30);
  FUN_00414480(local_res10);
  return local_4c;
}

