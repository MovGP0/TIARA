/* Ghidra address: 01234250 */
/* Ghidra symbol: FUN_01234250 */


void FUN_01234250(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_30 = 0;
  local_38 = 0;
  local_28 = 0;
  local_20[0] = 0;
  *(undefined4 *)PTR_DAT_02004700 = 0x2224;
  FUN_0122db90(param_1,0);
  FUN_00414ad0(*(longlong *)(param_1 + 0x730) + 0xe0,
               L"Filter param file(*.DTB)|*.DTB|All files (*.*)|*.*");
  lVar1 = *(longlong *)(param_1 + 0x730);
  *(undefined4 *)(lVar1 + 0xe8) = 1;
  FUN_00416ba0(local_20,*(undefined8 *)PTR_DAT_02004ff0,L".DTB");
  FUN_00724380(lVar1,local_20[0]);
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x730) + 0xa8))(*(longlong **)(param_1 + 0x730));
  if (cVar2 != '\0') {
    FUN_00724270(*(undefined8 *)(param_1 + 0x730),&local_28);
    FUN_00414ad0(&DAT_02107710,local_28);
    cVar2 = FUN_00440a20(DAT_02107710,1);
    if (cVar2 == '\0') {
      FUN_01183c40(*(undefined8 *)PTR_DAT_020019a0,*(undefined8 *)PTR_DAT_02005aa0,DAT_02107710);
    }
    else {
      FUN_00441920(&local_38,DAT_02107710);
      FUN_00416cd0(&local_30,3,L"Do you really want to delete ",local_38,&DAT_01234534);
      iVar3 = FUN_0072d440(local_30,2,3,0);
      if (iVar3 == 6) {
        FUN_01183c40(*(undefined8 *)PTR_DAT_020019a0,*(undefined8 *)PTR_DAT_02005aa0,DAT_02107710);
      }
    }
  }
  FUN_0064de00(*(undefined8 *)(param_1 + 0x988),L"Load/Save filter parameters");
  FUN_00414560(&local_38,2);
  FUN_00414480(&local_28);
  FUN_00414480(local_20);
  return;
}

