/* Ghidra address: 01a5e5c0 */
/* Ghidra symbol: FUN_01a5e5c0 */


undefined8 FUN_01a5e5c0(longlong *param_1,undefined8 param_2,int param_3,int param_4)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 local_58 [48];
  
  if (((*(char *)(param_1[0x12] + 0x89) != '\0') &&
      (uVar4 = (int)*(uint *)(param_1 + 9) >> 0x1f,
      (int)((*(uint *)(param_1 + 9) ^ uVar4) - uVar4) < 1000)) &&
     (uVar4 = (int)*(uint *)((longlong)param_1 + 0x4c) >> 0x1f,
     (int)((*(uint *)((longlong)param_1 + 0x4c) ^ uVar4) - uVar4) < 1000)) {
    iVar3 = param_3 - (int)param_1[9];
    iVar5 = param_4 - *(int *)((longlong)param_1 + 0x4c);
    dVar6 = (double)FUN_0040c760((double)(iVar3 * iVar3 + iVar5 * iVar5));
    FUN_00c44460(local_58,(double)(param_3 - (int)param_1[9]),
                 (double)(param_4 - *(int *)((longlong)param_1 + 0x4c)));
    dVar7 = (double)FUN_00c445d0(local_58);
    dVar7 = (double)FUN_0040bcd0(dVar7 + ((double)*(int *)(param_1[0x12] + 0x8c) *
                                         0.017453292519943295) / 10.0);
    lVar1 = param_1[9];
    iVar3 = param_3 - (int)lVar1;
    iVar5 = param_4 - *(int *)((longlong)param_1 + 0x4c);
    dVar8 = (double)FUN_0040c760((double)(iVar3 * iVar3 + iVar5 * iVar5));
    FUN_00c44460(local_58,(double)(param_3 - (int)param_1[9]),
                 (double)(param_4 - *(int *)((longlong)param_1 + 0x4c)));
    dVar9 = (double)FUN_00c445d0(local_58);
    dVar9 = (double)FUN_0040bdd0(dVar9 + ((double)*(int *)(param_1[0x12] + 0x8c) *
                                         0.017453292519943295) / 10.0);
    iVar3 = *(int *)((longlong)param_1 + 0x4c);
    param_3 = FUN_0040c770(dVar6 * dVar7 + (double)(int)lVar1);
    param_4 = FUN_0040c770(dVar8 * dVar9 + (double)iVar3);
  }
  cVar2 = (**(code **)(*param_1 + 0x58))(param_1);
  if (((cVar2 != '\0') && ((int)param_1[9] <= param_3)) &&
     ((*(int *)((longlong)param_1 + 0x4c) <= param_4 &&
      ((iVar3 = FUN_01a5ee60(param_1,param_2), param_3 <= (int)param_1[9] + iVar3 &&
       (iVar3 = FUN_01a5eed0(param_1,param_2), param_4 <= *(int *)((longlong)param_1 + 0x4c) + iVar3
       )))))) {
    return 1;
  }
  return 0;
}

