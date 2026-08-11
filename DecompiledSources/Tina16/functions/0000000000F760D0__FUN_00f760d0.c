/* Ghidra address: 00f760d0 */
/* Ghidra symbol: FUN_00f760d0 */


void FUN_00f760d0(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30 [2];
  
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40[0] = 0;
  local_30[0] = 0;
  iVar5 = *(int *)(*(longlong *)(param_1 + 0x6d0) + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      lVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x6d0),iVar4);
      FUN_00414480(local_30);
      iVar1 = *(int *)(lVar3 + 8);
      if (iVar1 == 0) {
        FUN_00f6de30(local_40,0);
        FUN_00416ad0(local_30,local_40[0]);
      }
      else if (iVar1 == 1) {
        FUN_00f6de30(&local_48,1);
        FUN_00416ad0(local_30,local_48);
      }
      else if (iVar1 == 2) {
        FUN_00f6de30(&local_50,2);
        FUN_00416ad0(local_30,local_50);
      }
      FUN_00416cd0(local_30,3,local_30[0],&DAT_00f76278,&LAB_00f76288);
      FUN_00f6de30(&local_58,*(undefined4 *)(lVar3 + 0xc));
      FUN_00416ad0(local_30,local_58);
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4a0);
      (**(code **)(*plVar2 + 0x78))(plVar2,local_30[0]);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_00414560(&local_58,4);
  FUN_00414480(local_30);
  return;
}

