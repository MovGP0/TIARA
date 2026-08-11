/* Ghidra address: 0109ccf0 */
/* Ghidra symbol: FUN_0109ccf0 */


void FUN_0109ccf0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 local_res18 [2];
  undefined8 local_40 [2];
  undefined8 local_30;
  
  local_40[0] = 0;
  local_30 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  plVar2 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  (**(code **)(*plVar2 + 0xd8))(plVar2,local_res18[0]);
  iVar1 = (**(code **)(*plVar2 + 0x28))();
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(*plVar2 + 0x18))(plVar2,&local_30,iVar3);
      FUN_00450070(local_40,local_30,&DAT_0109ce50,L"      ",1);
      FUN_00414b50(&local_30,local_40[0]);
      (**(code **)(*plVar2 + 0x40))(plVar2,iVar3,local_30);
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  (**(code **)(**(longlong **)(param_2 + 0x4e8) + 0x10))(*(longlong **)(param_2 + 0x4e8),plVar2);
  FUN_00410f20(plVar2);
  FUN_00414480(local_40);
  FUN_00414480(&local_30);
  FUN_00414480(local_res18);
  return;
}

