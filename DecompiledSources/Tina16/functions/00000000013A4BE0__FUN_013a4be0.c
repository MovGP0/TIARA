/* Ghidra address: 013a4be0 */
/* Ghidra symbol: FUN_013a4be0 */


void FUN_013a4be0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  char cVar5;
  short sVar6;
  int iVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  short *psVar10;
  undefined1 *puVar11;
  undefined8 local_68;
  undefined1 local_5b;
  undefined1 local_5a;
  undefined1 local_59 [57];
  
  if (*(char *)(*(longlong *)PTR_DAT_02004e40 + 0x27c1) != '\0') {
    return;
  }
  if (*(char *)(param_1 + 0x6d8) != '\0') {
    return;
  }
  plVar8 = (longlong *)FUN_013a4ac0(param_1);
  if (plVar8 == (longlong *)0x0) {
    return;
  }
  sVar6 = (**(code **)(*plVar8 + 0xf8))(plVar8);
  if ((sVar6 != 0x3e) && (sVar6 = (**(code **)(*plVar8 + 0xf8))(plVar8), sVar6 != 0x66)) {
    iVar7 = FUN_013a4b40(param_1,plVar8);
    if (iVar7 < 0) {
      return;
    }
    cVar5 = FUN_013491e0(&local_68);
    if (cVar5 != '\0') {
      FUN_017d2710(local_68);
      FUN_017d2750(local_68,iVar7 + -1);
      sVar6 = (**(code **)(*plVar8 + 0xf8))(plVar8);
      if ((sVar6 == 0x3d) || (sVar6 = (**(code **)(*plVar8 + 0xf8))(plVar8), sVar6 == 0x65)) {
        FUN_017d2750(local_68,iVar7);
      }
      FUN_013d2f60(local_68,0,0);
      return;
    }
    return;
  }
  *PTR_DAT_02002b78 = 1;
  *(undefined1 *)(param_1 + 0x6d8) = 1;
  FUN_0082a6c0(*(undefined8 *)(*(longlong *)PTR_DAT_02002da0 + 0x6d8),1);
  FUN_0082a6c0(*(undefined8 *)(*(longlong *)PTR_DAT_02002da0 + 0x6f0),1);
  FUN_0132b2d0(*(undefined8 *)PTR_DAT_02002da0,0);
  puVar9 = (undefined8 *)FUN_01cfde70(plVar8,1,0,local_59,&local_5a,&local_5b);
  uVar1 = *puVar9;
  puVar9 = (undefined8 *)FUN_01cfde70(plVar8,3,0,local_59,&local_5a,&local_5b);
  uVar2 = *puVar9;
  puVar9 = (undefined8 *)FUN_01cfde70(plVar8,4,0,local_59,&local_5a,&local_5b);
  uVar3 = *puVar9;
  psVar10 = (short *)FUN_01cfde70(plVar8,7,0,local_59,&local_5a,&local_5b);
  sVar6 = *psVar10;
  puVar11 = (undefined1 *)FUN_01cfde70(plVar8,8,0,local_59,&local_5a,&local_5b);
  uVar4 = *puVar11;
  FUN_0153b430(uVar2,uVar3,(int)sVar6,1,0);
  cVar5 = FUN_0153bc10(1,0,0,0);
  if (cVar5 != '\0') {
    *(undefined8 *)(*(longlong *)PTR_DAT_020027c0 + 0x28) = uVar1;
    FUN_013d4bc0(*(undefined8 *)PTR_DAT_020027c0,1,0,uVar4,1);
  }
  *(undefined1 *)(param_1 + 0x6d8) = 0;
  *PTR_DAT_02002b78 = 0;
  return;
}

