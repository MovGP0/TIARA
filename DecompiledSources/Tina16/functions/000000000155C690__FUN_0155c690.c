/* Ghidra address: 0155c690 */
/* Ghidra symbol: FUN_0155c690 */


void FUN_0155c690(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined8 local_40 [2];
  undefined8 local_30 [2];
  
  local_40[0] = 0;
  local_30[0] = 0;
  plVar1 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x6e0) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x6e0),iVar3);
      FUN_015fd630(local_30,0,*(undefined8 *)(param_1 + 0x8d0),uVar2);
      (**(code **)(*plVar1 + 0x78))(plVar1,local_30[0]);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00416cd0(local_40,3,*(undefined8 *)(param_1 + 0x7a8),&DAT_0155c7c4,L"switch_defaults.txt");
  (**(code **)(*plVar1 + 0x100))(plVar1,local_40[0]);
  FUN_00410f20(plVar1);
  FUN_00414480(local_40);
  FUN_00414480(local_30);
  return;
}

