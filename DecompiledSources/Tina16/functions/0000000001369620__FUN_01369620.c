/* Ghidra address: 01369620 */
/* Ghidra symbol: FUN_01369620 */


void FUN_01369620(longlong *param_1,int *param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  undefined8 uVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  
  if (*param_2 == 0x100) {
    if ((*(longlong *)(param_2 + 2) == 0x52) && ((char)param_1[3] != '\0')) {
      if (0 < *(int *)(param_1[5] + 0x10)) {
        if (*(char *)((longlong)param_1 + 0x3e) == '\0') {
          iVar2 = *(int *)(param_1[5] + 0x10) + -1;
          *(int *)(param_1 + 8) = iVar2;
          FUN_0134f2e0(*(undefined8 *)(param_1[2] + 0x27a8),param_1[5],iVar2);
        }
        else {
          *(undefined1 *)((longlong)param_1 + 0x3f) = 1;
          FUN_0134f800();
        }
        *(bool *)((longlong)param_1 + 0x3e) = *(char *)((longlong)param_1 + 0x3e) == '\0';
        uVar6 = (**(code **)(*param_1 + 0x30))(param_1);
        (**(code **)(*param_1 + 0x38))(param_1,uVar6);
      }
    }
    else if ((*(longlong *)(param_2 + 2) == 0x10) && (*(char *)((longlong)param_1 + 0x3d) == '\0'))
    {
      *(undefined1 *)((longlong)param_1 + 0x3d) = 1;
      uVar6 = (**(code **)(*param_1 + 0x30))(param_1);
      (**(code **)(*param_1 + 0x38))(param_1,uVar6);
    }
    else if ((*(longlong *)(param_2 + 2) == 0x11) && (*(char *)((longlong)param_1 + 0x3c) == '\0'))
    {
      *(undefined1 *)((longlong)param_1 + 0x3c) = 1;
      uVar6 = (**(code **)(*param_1 + 0x30))(param_1);
      (**(code **)(*param_1 + 0x38))(param_1,uVar6);
    }
    else if ((*(longlong *)(param_2 + 2) == 0x2e) && ((char)param_1[3] != '\0')) {
      if (1 < *(int *)(param_1[5] + 0x10)) {
        FUN_01369450(param_1);
        uVar7 = FUN_004aeac0(param_1[5],*(int *)(param_1[5] + 0x10) + -1);
        FUN_004ae870(param_1[5],*(int *)(param_1[5] + 0x10) + -1);
        uVar8 = FUN_004aeac0(param_1[5],*(int *)(param_1[5] + 0x10) + -1);
        uVar12 = *(undefined8 *)(param_1[2] + 0x27a8);
        uVar9 = FUN_0198d430(uVar12);
        uVar6 = FUN_00b95a20(uVar8);
        uVar3 = FUN_00b95a40(uVar8);
        puVar13 = &local_30;
        FUN_01a98380(uVar9,uVar6,uVar3,&local_2c,puVar13);
        uVar14 = (undefined4)((ulonglong)puVar13 >> 0x20);
        local_40 = FUN_00498310(local_2c,local_30);
        uVar10 = FUN_0064d1f0(*(undefined8 *)(param_1[2] + 0xa10),&local_40);
        local_38._4_4_ = (undefined4)(uVar10 >> 0x20);
        uVar6 = local_38._4_4_;
        local_38 = uVar10;
        thunk_FUN_04117c3c(uVar10 & 0xffffffff,uVar6);
        plVar11 = (longlong *)FUN_0198d430(uVar12);
        uVar6 = FUN_00b95a20(uVar7);
        uVar3 = FUN_00b95a40(uVar7);
        uVar4 = FUN_00b95a20(uVar8);
        uVar5 = FUN_00b95a40(uVar8);
        (**(code **)(*plVar11 + 0x30))(plVar11,uVar6,uVar3,uVar4,CONCAT44(uVar14,uVar5));
        iVar2 = *(int *)(param_1[5] + 0x10);
        if (iVar2 == 1) {
          *(undefined1 *)(param_1 + 6) = 0;
        }
        else {
          uVar12 = FUN_004aeac0(param_1[5],iVar2 + -2);
          uVar6 = FUN_00b959c0(uVar8);
          uVar3 = FUN_00b959c0(uVar12);
          uVar1 = FUN_01367da0(param_1,uVar6,uVar3);
          *(undefined1 *)(param_1 + 6) = uVar1;
        }
        (**(code **)(**(longlong **)(param_1[2] + 0xa10) + 0x198))
                  (*(longlong **)(param_1[2] + 0xa10));
      }
      param_2[6] = 1;
      param_2[7] = 0;
    }
  }
  else if (*param_2 == 0x101) {
    if ((*(longlong *)(param_2 + 2) == 0x10) && (*(char *)((longlong)param_1 + 0x3d) != '\0')) {
      *(undefined1 *)((longlong)param_1 + 0x3d) = 0;
      uVar6 = (**(code **)(*param_1 + 0x30))(param_1);
      (**(code **)(*param_1 + 0x38))(param_1,uVar6);
    }
    else if ((*(longlong *)(param_2 + 2) == 0x11) && (*(char *)((longlong)param_1 + 0x3c) != '\0'))
    {
      *(undefined1 *)((longlong)param_1 + 0x3c) = 0;
      uVar6 = (**(code **)(*param_1 + 0x30))(param_1);
      (**(code **)(*param_1 + 0x38))(param_1,uVar6);
    }
  }
  return;
}

