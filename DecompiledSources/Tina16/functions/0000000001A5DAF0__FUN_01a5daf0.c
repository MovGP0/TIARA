/* Ghidra address: 01a5daf0 */
/* Ghidra symbol: FUN_01a5daf0 */


void FUN_01a5daf0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 unaff_ESI;
  uint uVar11;
  undefined8 in_stack_ffffffffffffff48;
  undefined4 uVar14;
  undefined8 uVar12;
  undefined8 *puVar13;
  int local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_60;
  int local_58;
  int iStack_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  undefined8 local_40;
  undefined8 local_38;
  int local_30;
  int local_2c;
  
  uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffff48 >> 0x20);
  cVar2 = (**(code **)(*param_1 + 0x58))(param_1);
  if (cVar2 != '\0') {
    if ((*(char *)((longlong)param_1 + 0x81) != '\0') && ((char)param_1[2] == '\0')) {
      unaff_ESI = *(undefined4 *)(*(longlong *)(param_1[0x12] + 0x80) + 0x28);
      FUN_005fc860(*(longlong *)(param_1[0x12] + 0x80),0x66d7);
    }
    if ((char)param_1[2] != '\0') {
      unaff_ESI = *(undefined4 *)(*(longlong *)(param_1[0x12] + 0x80) + 0x28);
      FUN_005fc860(*(longlong *)(param_1[0x12] + 0x80),0xff);
    }
    plVar6 = (longlong *)FUN_005fd7d0(&PTR_FUN_005f35d8,1);
    plVar7 = (longlong *)FUN_005fd250(&PTR_FUN_005f3290,1);
    (**(code **)(*plVar6 + 0x10))(plVar6,param_2[0x10]);
    (**(code **)(*plVar7 + 0x10))(plVar7,param_2[0xf]);
    if (*(char *)((longlong)param_1 + 0x99) == '\x01') {
      uVar3 = FUN_01a90ee0(*(undefined4 *)((longlong)param_1 + 0x9c));
      FUN_005fdab0(param_2[0x10],uVar3);
      FUN_005fdcb0(param_2[0x10],0);
      uVar3 = FUN_01a90ee0(*(undefined4 *)((longlong)param_1 + 0x9c));
      FUN_005fd4e0(param_2[0xf],uVar3);
      iVar4 = FUN_01a5ee60(param_1,param_2);
      iVar5 = FUN_01a5eed0(param_1,param_2);
      uVar12 = CONCAT44(uVar14,*(int *)((longlong)param_1 + 0x4c) + iVar5);
      (**(code **)(*param_2 + 0xf8))
                (param_2,(int)param_1[9],*(undefined4 *)((longlong)param_1 + 0x4c),
                 (int)param_1[9] + iVar4,uVar12);
      uVar14 = (undefined4)((ulonglong)uVar12 >> 0x20);
    }
    else {
      FUN_005fdcb0(param_2[0x10],1);
    }
    cVar2 = (char)param_1[0x14];
    if ((param_1[0x15] != 0) && (cVar2 == '\0')) {
      cVar2 = '\x01';
    }
    if (cVar2 == '\x01') {
      FUN_005fdcb0(param_2[0x10],1);
      uVar3 = FUN_01a90ee0(*(undefined4 *)(*(longlong *)(param_1[0x12] + 0x80) + 0x28));
      FUN_005fd4e0(param_2[0xf],uVar3);
      FUN_005fd640(param_2[0xf],4);
      FUN_005fd670(param_2[0xf],0);
      FUN_005fd6d0(param_2[0xf],1);
      iVar4 = FUN_01a5ee60(param_1,param_2);
      iVar5 = FUN_01a5eed0(param_1,param_2);
      uVar12 = CONCAT44(uVar14,*(int *)((longlong)param_1 + 0x4c) + iVar5);
      (**(code **)(*param_2 + 0xf8))
                (param_2,(int)param_1[9],*(undefined4 *)((longlong)param_1 + 0x4c),
                 (int)param_1[9] + iVar4,uVar12);
      uVar14 = (undefined4)((ulonglong)uVar12 >> 0x20);
    }
    else if (cVar2 == '\x02') {
      FUN_005fdcb0(param_2[0x10],1);
      uVar3 = FUN_01a90ee0(*(undefined4 *)(*(longlong *)(param_1[0x12] + 0x80) + 0x28));
      FUN_005fd4e0(param_2[0xf],uVar3);
      FUN_005fd640(param_2[0xf],4);
      FUN_005fd670(param_2[0xf],2);
      FUN_005fd6d0(param_2[0xf],1);
      iVar4 = FUN_01a5ee60(param_1,param_2);
      iVar5 = FUN_01a5eed0(param_1,param_2);
      uVar12 = CONCAT44(uVar14,*(int *)((longlong)param_1 + 0x4c) + iVar5);
      (**(code **)(*param_2 + 0xf8))
                (param_2,(int)param_1[9],*(undefined4 *)((longlong)param_1 + 0x4c),
                 (int)param_1[9] + iVar4,uVar12);
      uVar14 = (undefined4)((ulonglong)uVar12 >> 0x20);
    }
    lVar1 = param_1[0x15];
    if (lVar1 != 0) {
      cVar2 = FUN_004113d0(lVar1,&PTR_FUN_01aae560);
      if (cVar2 == '\0') {
        cVar2 = FUN_004113d0(lVar1,&PTR_FUN_01aaff18);
        if (cVar2 == '\0') {
          iVar4 = 0;
        }
        else {
          uVar3 = FUN_0040c770((double)*(int *)(*(longlong *)(lVar1 + 0xe8) + 0x94) * 0.75);
          iVar4 = FUN_00b905e0(10,uVar3);
        }
      }
      else {
        uVar3 = FUN_0040c770((double)*(int *)(*(longlong *)(lVar1 + 0xf8) + 0x94) * 0.75);
        iVar4 = FUN_00b905e0(10,uVar3);
      }
      if (((double)param_1[0x16] <= 1e+30 && (double)param_1[0x16] != 1e+30) &&
         ((double)param_1[0x17] <= 1e+30 && (double)param_1[0x17] != 1e+30)) {
        (**(code **)(*(longlong *)param_1[0x15] + 0xf0))
                  ((longlong *)param_1[0x15],param_1[0x16],param_1[0x17],&local_2c,&local_30);
        uVar10 = (int)param_1[9] - local_2c;
        uVar11 = (int)uVar10 >> 0x1f;
        iVar5 = FUN_01a5ee60(param_1,param_2);
        uVar8 = ((int)param_1[9] + iVar5) - local_2c;
        uVar9 = (int)uVar8 >> 0x1f;
        if ((int)((uVar10 ^ uVar11) - uVar11) < (int)((uVar8 ^ uVar9) - uVar9)) {
          local_7c = (int)param_1[9];
        }
        else {
          local_7c = FUN_01a5ee60(param_1,param_2);
          local_7c = (int)param_1[9] + local_7c;
        }
        uVar10 = *(int *)((longlong)param_1 + 0x4c) - local_30;
        uVar11 = (int)uVar10 >> 0x1f;
        iVar5 = FUN_01a5eed0(param_1,param_2);
        uVar8 = (*(int *)((longlong)param_1 + 0x4c) + iVar5) - local_30;
        uVar9 = (int)uVar8 >> 0x1f;
        if ((int)((uVar10 ^ uVar11) - uVar11) < (int)((uVar8 ^ uVar9) - uVar9)) {
          local_44 = *(int *)((longlong)param_1 + 0x4c);
        }
        else {
          local_44 = FUN_01a5eed0(param_1,param_2);
          local_44 = *(int *)((longlong)param_1 + 0x4c) + local_44;
        }
        (**(code **)(*param_2 + 200))(param_2,local_7c,local_44);
        (**(code **)(*param_2 + 0xc0))(param_2,local_2c,local_30);
        local_48 = local_7c;
        local_50 = local_2c;
        local_4c = local_30;
        puVar13 = &local_38;
        FUN_01a8df60(&local_48,&local_50,0x402e000000000000,(double)iVar4,puVar13,&local_40);
        uVar14 = (undefined4)((ulonglong)puVar13 >> 0x20);
        FUN_005fdcb0(param_2[0x10],0);
        uVar3 = FUN_005fd4d0(param_2[0xf]);
        FUN_005fdab0(param_2[0x10],uVar3);
        local_58 = local_2c;
        iStack_54 = local_30;
        local_78 = local_38;
        local_70 = local_40;
        local_60 = local_38;
        (**(code **)(*param_2 + 0xd8))(param_2,&local_78,3);
      }
    }
    (**(code **)(*(longlong *)param_2[0x10] + 0x10))((longlong *)param_2[0x10],plVar6);
    FUN_00410f20(plVar6);
    (**(code **)(*(longlong *)param_2[0xf] + 0x10))((longlong *)param_2[0xf],plVar7);
    FUN_00410f20(plVar7);
    if ((*(char *)((longlong)param_1 + 0x99) == '\x01') || ((char)param_1[0x14] != '\0')) {
      lVar1 = param_1[0x12];
      iVar4 = FUN_005fce00(*(undefined8 *)(lVar1 + 0x80));
      FUN_01d1c9d0(lVar1,param_2,0,(int)param_1[9] + iVar4 / 2,
                   CONCAT44(uVar14,*(undefined4 *)((longlong)param_1 + 0x4c)));
    }
    else {
      FUN_01d1c9d0(param_1[0x12],param_2,0,(int)param_1[9],
                   CONCAT44(uVar14,*(undefined4 *)((longlong)param_1 + 0x4c)));
    }
    if ((*(char *)((longlong)param_1 + 0x81) != '\0') && ((char)param_1[2] == '\0')) {
      FUN_005fc860(*(undefined8 *)(param_1[0x12] + 0x80),unaff_ESI);
    }
    if ((char)param_1[2] != '\0') {
      FUN_005fc860(*(undefined8 *)(param_1[0x12] + 0x80),unaff_ESI);
    }
  }
  return;
}

