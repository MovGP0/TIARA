/* Ghidra address: 010eda50 */
/* Ghidra symbol: FUN_010eda50 */


void FUN_010eda50(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  double dVar9;
  undefined4 local_390 [220];
  
  cVar5 = (**(code **)(*param_1 + 0x58))(param_1);
  if (cVar5 != '\0') {
    (**(code **)(*(longlong *)param_2[0xf] + 0x10))((longlong *)param_2[0xf],param_1[0x11]);
    uVar6 = FUN_005fd4d0(param_1[0x11]);
    uVar6 = FUN_01a90ee0(uVar6);
    FUN_005fd4e0(param_2[0xf],uVar6);
    (**(code **)(*(longlong *)param_2[0x10] + 0x10))((longlong *)param_2[0x10],param_1[0x12]);
    if ((char)param_1[2] != '\0') {
      FUN_005fd4e0(param_2[0xf],0xff);
    }
    lVar3 = param_1[0xe];
    lVar4 = param_1[0xd];
    iVar1 = *(int *)((longlong)param_1 + 0x74);
    iVar2 = *(int *)((longlong)param_1 + 0x6c);
    iVar7 = 0;
    puVar8 = local_390;
    do {
      dVar9 = (double)FUN_0040bcd0(((double)iVar7 * 6.283185307179586) / 100.0);
      uVar6 = FUN_0040c770((double)(((int)lVar3 - (int)lVar4) / 2) * dVar9 +
                           (double)(((int)lVar3 + (int)lVar4) / 2));
      *puVar8 = uVar6;
      dVar9 = (double)FUN_0040bdd0(((double)iVar7 * 6.283185307179586) / 100.0);
      uVar6 = FUN_0040c770((double)((iVar1 - iVar2) / 2) * dVar9 + (double)((iVar1 + iVar2) / 2));
      puVar8[1] = uVar6;
      iVar7 = iVar7 + 1;
      puVar8 = puVar8 + 2;
    } while (iVar7 != 0x65);
    (**(code **)(*param_2 + 0xd8))(param_2,local_390,99);
  }
  return;
}

