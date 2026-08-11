/* Ghidra address: 00accd00 */
/* Ghidra symbol: FUN_00accd00 */


bool FUN_00accd00(longlong param_1,int param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  undefined8 local_28;
  undefined8 local_20;
  
  local_28 = 0;
  local_20 = 0;
  *param_3 = 0;
  if (param_2 == 0) {
    FUN_00416ba0(param_3,*(undefined8 *)(param_1 + 200),&DAT_00acce78);
    if (*(byte *)(param_1 + 0x168) < 8) {
      bVar5 = ((int)CONCAT71((int7)((ulonglong)param_1 >> 8),1) <<
               (*(byte *)(param_1 + 0x168) & 0x1f) & 3U) != 0;
    }
    else {
      bVar5 = false;
    }
    if (bVar5) {
      FUN_00acccb0(param_1,&local_20);
      FUN_00416ad0(param_3,local_20);
    }
    else {
      iVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x158) + 0x4d8) + 0x28))();
      iVar4 = 0;
      if (-1 < iVar2 + -1) {
        do {
          FUN_00accc80(param_1,&local_28,iVar4);
          FUN_00416ad0(param_3,local_28);
          plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x158) + 0x4d8);
          iVar3 = (**(code **)(*plVar1 + 0x28))(plVar1);
          if (iVar4 < iVar3 + -1) {
            FUN_00416ad0(param_3,&LAB_00acce8c);
          }
          iVar4 = iVar4 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
    }
  }
  FUN_00414560(&local_28,2);
  return param_2 == 0;
}

