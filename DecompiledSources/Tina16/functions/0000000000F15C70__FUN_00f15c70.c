/* Ghidra address: 00f15c70 */
/* Ghidra symbol: FUN_00f15c70 */


longlong FUN_00f15c70(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  undefined8 uVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 in_stack_ffffffffffffff18;
  undefined8 in_stack_ffffffffffffff20;
  undefined4 uVar12;
  undefined8 uVar11;
  longlong local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68 [24];
  undefined8 local_50 [7];
  
  uVar12 = (undefined4)((ulonglong)in_stack_ffffffffffffff20 >> 0x20);
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffff18 >> 0x20);
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_88 = 0;
  local_90 = 0;
  local_78 = 0;
  local_80 = 0;
  local_70 = 0;
  local_50[0] = 0;
  local_c0 = *(longlong *)(param_1 + 0xf0);
  if (local_c0 == 0) {
    plVar5 = (longlong *)FUN_01a5d940(&PTR_FUN_01a5c280,1);
    *(longlong **)(param_1 + 0xf0) = plVar5;
    plVar5[0x11] = *(longlong *)(param_1 + 0x78);
    *(undefined1 *)(plVar5[0x12] + 0x98) = 1;
    FUN_0040c760(*(double *)(param_1 + 0xb8) * *(double *)(param_1 + 0xb8) +
                 *(double *)(param_1 + 0xc0) * *(double *)(param_1 + 0xc0));
    uVar8 = FUN_0040c850();
    FUN_00c44460(local_68,*(undefined8 *)(param_1 + 0xb8),*(undefined8 *)(param_1 + 0xc0));
    dVar9 = (double)FUN_00c445d0(local_68);
    if (*(char *)(*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x9f8) + 0x80) == '\0') {
      if (*(char *)(*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0xa00) + 0x80) != '\0') {
        if (*(double *)(param_1 + 0xc0) < 0.0) {
          uVar3 = FUN_00f060d0(*(undefined8 *)(param_1 + 0xb8));
          uVar10 = CONCAT44(uVar4,2);
          uVar11 = CONCAT44(uVar12,uVar3);
          FUN_00f05e70(&local_88,*(undefined8 *)(param_1 + 0xb8),0x3ff0000000000000,1,uVar10,uVar11)
          ;
          uVar3 = (undefined4)((ulonglong)uVar11 >> 0x20);
          uVar12 = (undefined4)((ulonglong)uVar10 >> 0x20);
          uVar10 = FUN_0040c850(*(undefined8 *)(param_1 + 0xc0));
          FUN_0040c850(*(undefined8 *)(param_1 + 0xc0));
          uVar4 = FUN_00f060d0();
          FUN_00f05e70(&local_90,uVar10,0x3ff0000000000000,1,CONCAT44(uVar12,2),
                       CONCAT44(uVar3,uVar4));
          uVar12 = 0;
          uVar10 = local_88;
          FUN_00416cd0(local_50,6,*(undefined8 *)(param_1 + 0xe8),L" = (",local_88,L" - j*",local_90
                       ,&DAT_00f16450);
          uVar4 = (undefined4)((ulonglong)uVar10 >> 0x20);
        }
        else {
          uVar3 = FUN_00f060d0(*(undefined8 *)(param_1 + 0xb8));
          uVar10 = CONCAT44(uVar4,2);
          uVar11 = CONCAT44(uVar12,uVar3);
          FUN_00f05e70(&local_78,*(undefined8 *)(param_1 + 0xb8),0x3ff0000000000000,1,uVar10,uVar11)
          ;
          uVar3 = (undefined4)((ulonglong)uVar11 >> 0x20);
          uVar12 = (undefined4)((ulonglong)uVar10 >> 0x20);
          uVar4 = FUN_00f060d0(*(undefined8 *)(param_1 + 0xc0));
          FUN_00f05e70(&local_80,*(undefined8 *)(param_1 + 0xc0),0x3ff0000000000000,1,
                       CONCAT44(uVar12,2),CONCAT44(uVar3,uVar4));
          uVar12 = 0;
          uVar10 = local_78;
          FUN_00416cd0(local_50,6,*(undefined8 *)(param_1 + 0xe8),L" = (",local_78,L" + j*",local_80
                       ,&DAT_00f16450);
          uVar4 = (undefined4)((ulonglong)uVar10 >> 0x20);
        }
      }
    }
    else {
      uVar3 = FUN_00f060d0(uVar8);
      uVar10 = CONCAT44(uVar12,uVar3);
      FUN_00f05e70(&local_70,uVar8,0x3ff0000000000000,1,CONCAT44(uVar4,2),uVar10);
      uVar12 = (undefined4)((ulonglong)uVar10 >> 0x20);
      uVar10 = local_70;
      FUN_00416cd0(local_50,3,*(undefined8 *)(param_1 + 0xe8),&DAT_00f1640c,local_70);
      uVar4 = (undefined4)((ulonglong)uVar10 >> 0x20);
    }
    if (*(char *)(*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0xa08) + 0x80) == '\0') {
      cVar1 = *(char *)(param_1 + 0x9d);
      if (cVar1 == '\0') {
        FUN_00416ad0(local_50,&DAT_00f16478);
      }
      else if (cVar1 == '\x01') {
        FUN_00416ad0(local_50,&DAT_00f16488);
      }
      else if (cVar1 == '\x02') {
        FUN_00416ad0(local_50,L"\\s(W)");
      }
      else if (cVar1 == '\x03') {
        FUN_00416ad0(local_50,&DAT_00f164b0);
      }
    }
    else {
      uVar3 = FUN_00f060d0(uVar8);
      uVar10 = CONCAT44(uVar12,uVar3);
      FUN_00f05e70(&local_98,uVar8,0x3ff0000000000000,1,CONCAT44(uVar4,2),uVar10);
      uVar12 = (undefined4)((ulonglong)uVar10 >> 0x20);
      uVar8 = local_98;
      FUN_00416cd0(local_50,3,*(undefined8 *)(param_1 + 0xe8),&DAT_00f1640c,local_98);
      uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
      cVar1 = *(char *)(param_1 + 0x9d);
      if (cVar1 == '\0') {
        FUN_00416ad0(local_50,&DAT_00f16478);
      }
      else if (cVar1 == '\x01') {
        FUN_00416ad0(local_50,&DAT_00f16488);
      }
      else if (cVar1 == '\x02') {
        FUN_00416ad0(local_50,L"\\s(W)");
      }
      else if (cVar1 == '\x03') {
        FUN_00416ad0(local_50,&DAT_00f164b0);
      }
      uVar3 = FUN_00f060d0(dVar9 * 57.29577951308232);
      FUN_00f05e70(&local_a0,dVar9 * 57.29577951308232,0x3ff0000000000000,1,CONCAT44(uVar4,2),
                   CONCAT44(uVar12,uVar3));
      FUN_00416cd0(local_50,4,local_50[0],&DAT_00f164c4,local_a0,&DAT_00f164d8);
    }
    if (*(longlong *)(param_1 + 0xa0) != 0) {
      FUN_01cc1600(*(longlong *)(param_1 + 0xa0),&local_a8);
      iVar7 = 0;
      if (local_a8 != 0) {
        iVar7 = *(int *)(local_a8 + -4);
      }
      if (0 < iVar7) {
        FUN_01cc1600(*(undefined8 *)(param_1 + 0xa0),&local_b0);
        FUN_00416cd0(local_50,3,local_50[0],&DAT_00f164f0,local_b0);
      }
    }
    (**(code **)(**(longlong **)(plVar5[0x12] + 0xa0) + 0x78))
              (*(longlong **)(plVar5[0x12] + 0xa0),local_50[0]);
    lVar6 = (**(code **)(**(longlong **)(plVar5[0x11] + 0xd8) + 0x30))
                      (*(longlong **)(plVar5[0x11] + 0xd8),0);
    FUN_005fce30(*(undefined8 *)(plVar5[0x12] + 0x80),*(int *)(lVar6 + 0x90) + -1);
    *(undefined1 *)((longlong)plVar5 + 0x99) = 0;
    *(undefined1 *)(plVar5 + 0x14) = 0;
    *(undefined1 *)(plVar5 + 0x10) = 0;
    local_b8 = FUN_00498310(*(int *)(param_1 + 200) + *(int *)(param_1 + 0xd0) / 2,
                            *(int *)(param_1 + 0xcc) + *(int *)(param_1 + 0xd4) / 2);
    (**(code **)(*plVar5 + 200))(plVar5,&local_b8);
    (**(code **)(*plVar5 + 0xe8))(plVar5);
    FUN_01a5f250(plVar5);
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x78) + 0xe0);
    (**(code **)(*plVar2 + 0x80))(plVar2,L"Text for Vector Label",plVar5);
    local_c0 = *(longlong *)(param_1 + 0xf0);
  }
  FUN_00414560(&local_b0,9);
  FUN_00414480(local_50);
  return local_c0;
}

