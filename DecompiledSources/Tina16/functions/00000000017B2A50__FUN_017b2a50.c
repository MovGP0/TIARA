/* Ghidra address: 017b2a50 */
/* Ghidra symbol: FUN_017b2a50 */


void FUN_017b2a50(longlong *param_1,undefined8 param_2,int param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 local_40 [2];
  
  (**(code **)(*param_1 + 0x70))(param_1,param_2,0xf);
  iVar1 = *(int *)((longlong)param_1 + 0x24);
  if (iVar1 < 4) {
    if (iVar1 == 3) {
      lVar2 = FUN_00498310((int)param_1[2] + param_3,*(undefined4 *)((longlong)param_1 + 0x14));
      param_1[3] = lVar2;
    }
    else if (iVar1 == -1) {
      *(int *)(param_1 + 9) = (int)param_1[9] - (int)param_1[3];
      *(int *)((longlong)param_1 + 0x4c) =
           *(int *)((longlong)param_1 + 0x4c) - *(int *)((longlong)param_1 + 0x1c);
      local_40[0] = FUN_00498310((int)param_1[2] + param_3,
                                 *(int *)((longlong)param_1 + 0x14) + param_4);
      (**(code **)*param_1)(param_1,local_40);
      *(int *)(param_1 + 9) = (int)param_1[9] + (int)param_1[3];
      *(int *)((longlong)param_1 + 0x4c) =
           *(int *)((longlong)param_1 + 0x4c) + *(int *)((longlong)param_1 + 0x1c);
    }
    else if (iVar1 == 0) {
      lVar2 = FUN_00498310((int)param_1[2] + param_3,*(int *)((longlong)param_1 + 0x14) + param_4);
      param_1[3] = lVar2;
    }
    else if (iVar1 == 1) {
      lVar2 = FUN_00498310((int)param_1[2],*(int *)((longlong)param_1 + 0x14) + param_4);
      param_1[3] = lVar2;
    }
    else if (iVar1 == 2) {
      lVar2 = FUN_00498310((int)param_1[2],*(int *)((longlong)param_1 + 0x14) + param_4);
      param_1[3] = lVar2;
      lVar2 = FUN_00498310((int)param_1[8] + param_3,*(undefined4 *)((longlong)param_1 + 0x44));
      param_1[9] = lVar2;
    }
  }
  else if (iVar1 == 4) {
    lVar2 = FUN_00498310((int)param_1[8] + param_3,*(undefined4 *)((longlong)param_1 + 0x44));
    param_1[9] = lVar2;
  }
  else if (iVar1 == 5) {
    lVar2 = FUN_00498310((int)param_1[2] + param_3,*(undefined4 *)((longlong)param_1 + 0x14));
    param_1[3] = lVar2;
    lVar2 = FUN_00498310((int)param_1[8],*(int *)((longlong)param_1 + 0x44) + param_4);
    param_1[9] = lVar2;
  }
  else if (iVar1 == 6) {
    lVar2 = FUN_00498310((int)param_1[8],*(int *)((longlong)param_1 + 0x44) + param_4);
    param_1[9] = lVar2;
  }
  else if (iVar1 == 7) {
    lVar2 = FUN_00498310((int)param_1[8] + param_3,*(int *)((longlong)param_1 + 0x44) + param_4);
    param_1[9] = lVar2;
  }
  (**(code **)(*param_1 + 0x70))(param_1,param_2,0xf);
  return;
}

