/* Ghidra address: 0197df40 */
/* Ghidra symbol: FUN_0197df40 */


longlong * FUN_0197df40(longlong param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  undefined8 local_48;
  undefined8 uStack_40;
  
  FUN_00419260(param_2,&DAT_0194c380,1,(longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x10));
  iVar7 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x10);
  iVar5 = 0;
  if (-1 < iVar7 + -1) {
    do {
      lVar6 = (longlong)iVar5;
      plVar4 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x20),iVar5);
      (**(code **)(*plVar4 + 8))(plVar4,&local_48);
      puVar1 = (undefined8 *)(*param_2 + lVar6 * 0x10);
      *puVar1 = local_48;
      puVar1[1] = uStack_40;
      FUN_01950860(param_3);
      iVar3 = FUN_0040c770();
      piVar2 = (int *)(*param_2 + 4 + lVar6 * 0x10);
      *piVar2 = *piVar2 + iVar3;
      FUN_019508b0(param_3);
      iVar3 = FUN_0040c770();
      piVar2 = (int *)(*param_2 + lVar6 * 0x10);
      *piVar2 = *piVar2 + iVar3;
      FUN_019508b0(param_3);
      iVar3 = FUN_0040c770();
      piVar2 = (int *)(*param_2 + 8 + lVar6 * 0x10);
      *piVar2 = *piVar2 + iVar3;
      FUN_01950860(param_3);
      iVar3 = FUN_0040c770();
      piVar2 = (int *)(*param_2 + 0xc + lVar6 * 0x10);
      *piVar2 = *piVar2 + iVar3;
      iVar5 = iVar5 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  return param_2;
}

