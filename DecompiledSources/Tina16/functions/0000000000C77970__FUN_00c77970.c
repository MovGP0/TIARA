/* Ghidra address: 00c77970 */
/* Ghidra symbol: FUN_00c77970 */


void FUN_00c77970(longlong *param_1,int *param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong in_stack_ffffffffffffff88;
  undefined4 uVar7;
  int local_54;
  int local_50;
  undefined4 local_4c;
  int local_48;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  char local_29 [9];
  
  local_29[0] = '\x01';
  (**(code **)(*param_1 + 0x110))(param_1,param_2,local_29);
  uVar7 = (undefined4)(in_stack_ffffffffffffff88 >> 0x20);
  if (local_29[0] == '\x01') {
    iVar4 = *param_2;
    if (iVar4 == 0xbbc) {
      FUN_00c7abe0(param_1,param_1[0x7c]);
    }
    else if (iVar4 == 0x24) {
      if ((char)param_1[0x46] == '\0') {
        uVar5 = thunk_FUN_03a65bf1(param_1[0x50],param_1[0x53],0x24,*(undefined8 *)(param_2 + 2),
                                   *(undefined8 *)(param_2 + 4));
        *(undefined8 *)(param_2 + 6) = uVar5;
      }
      (**(code **)(*param_1 + 0x108))(param_1,param_2);
    }
    else if (iVar4 == 2) {
      *(undefined1 *)(param_1 + 0x46) = 1;
      thunk_FUN_03e49910(param_1[0x53],&local_3c);
      (**(code **)(*(longlong *)param_1[0x42] + 0x28))((longlong *)param_1[0x42]);
      cVar3 = FUN_00c76df0(param_1);
      if (cVar3 == '\x01') {
        thunk_FUN_041cc6e2(param_1[0x53],0,0,0,
                           CONCAT44(uVar7,((local_34 - local_3c) - *(int *)(param_1[0x42] + 0xac)) -
                                          (int)param_1[0x31]),
                           (local_30 - local_38) - *(int *)(param_1[0x42] + 0xb0),2);
        FUN_007fdf50(param_1[0x38],0);
        FUN_00655f80(param_1[0x38],0);
        FUN_00410f20(param_1[0x38]);
        param_1[0x38] = 0;
      }
      else {
        thunk_FUN_041cc6e2(param_1[0x53],0,0,0,
                           CONCAT44(uVar7,(local_34 - local_3c) - *(int *)(param_1[0x42] + 0xac)),
                           (local_30 - local_38) - *(int *)(param_1[0x42] + 0xb0),2);
      }
      *(int *)(param_1 + 0x30) = (local_34 - local_3c) - *(int *)(param_1[0x42] + 0xac);
      *(int *)((longlong)param_1 + 0x184) = (local_30 - local_38) - *(int *)(param_1[0x42] + 0xb0);
      cVar3 = FUN_00c76df0(param_1);
      if (cVar3 != '\0') {
        *(int *)(param_1 + 0x30) = (int)param_1[0x30] - (int)param_1[0x31];
      }
      uVar5 = thunk_FUN_03a65bf1(param_1[0x50],param_1[0x53],*param_2,*(undefined8 *)(param_2 + 2),
                                 *(undefined8 *)(param_2 + 4));
      *(undefined8 *)(param_2 + 6) = uVar5;
      (**(code **)(*param_1 + 0x108))(param_1,param_2);
    }
    else if (iVar4 == 0xf) {
      uVar5 = thunk_FUN_03a65bf1(param_1[0x50],param_1[0x53],0xf,*(undefined8 *)(param_2 + 2),
                                 *(undefined8 *)(param_2 + 4));
      *(undefined8 *)(param_2 + 6) = uVar5;
      if ((param_1[0x79] != 0) && (param_1[0x77] != 0)) {
        uVar5 = thunk_FUN_03a99535(param_1[0x53],1);
        thunk_FUN_03e49910(uVar5,&local_3c);
        local_54 = local_3c;
        local_50 = local_38;
        thunk_FUN_0417e313(param_1[0x53],&local_54);
        iVar4 = FUN_007fd7d0(param_1[0x79]);
        if (local_54 != iVar4) {
          FUN_00806af0(param_1[0x79],local_54);
        }
      }
      (**(code **)(*param_1 + 0x108))(param_1,param_2);
    }
    else if (iVar4 == 0x85) {
      if ((char)param_1[0x7d] == '\x01') {
        cVar3 = FUN_00c76df0(param_1);
        if (cVar3 == '\x01') {
          in_stack_ffffffffffffff88 =
               CONCAT44(uVar7,(int)param_1[0x30] + *(int *)(param_1[0x42] + 0xac) +
                              (int)param_1[0x31]);
          thunk_FUN_041cc6e2(param_1[0x53],0,0,0,in_stack_ffffffffffffff88,
                             *(int *)((longlong)param_1 + 0x184) + *(int *)(param_1[0x42] + 0xb0),2)
          ;
          FUN_0064cc50(param_1[0x38],
                       *(int *)((longlong)param_1 + 0x184) + *(int *)(param_1[0x42] + 0xb0));
          uVar5 = thunk_FUN_03a99535(param_1[0x53],0x470);
          thunk_FUN_03e49910(uVar5,&local_3c);
          lVar6 = thunk_FUN_03a99535(param_1[0x53],0x460);
          if (lVar6 == 0) {
            uVar5 = thunk_FUN_03a99535(param_1[0x53],0x461);
            thunk_FUN_03e49910(uVar5,&local_4c);
          }
          else {
            uVar5 = thunk_FUN_03a99535(param_1[0x53],0x460);
            thunk_FUN_03e49910(uVar5,&local_4c);
          }
          FUN_0064cc50(param_1[0x38],local_30 - local_48);
        }
        else {
          in_stack_ffffffffffffff88 =
               CONCAT44(uVar7,(int)param_1[0x30] + *(int *)(param_1[0x42] + 0xac));
          thunk_FUN_041cc6e2(param_1[0x53],0,0,0,in_stack_ffffffffffffff88,
                             *(int *)((longlong)param_1 + 0x184) + *(int *)(param_1[0x42] + 0xb0),2)
          ;
        }
        FUN_00c64260(param_1[0x53],param_1[0x42]);
        if ((param_1[0x79] != 0) && (param_1[0x77] != 0)) {
          uVar5 = thunk_FUN_03a99535(param_1[0x53],1);
          thunk_FUN_03e49910(uVar5,&local_3c);
          local_54 = local_3c;
          local_50 = local_38;
          thunk_FUN_0417e313(param_1[0x53],&local_54);
          FUN_00806af0(param_1[0x79],local_54);
        }
        if (*(longlong *)(param_1[0x37] + 0x10) != 0) {
          thunk_FUN_03e49910(param_1[0x3d],&local_3c);
          local_54 = local_34 + 1;
          local_50 = local_38;
          thunk_FUN_0417e313(param_1[0x53],&local_54);
          FUN_0064cb30(*(undefined8 *)(param_1[0x37] + 0x10),local_54);
        }
        *(undefined1 *)(param_1 + 0x7d) = 0;
      }
      FUN_00c778e0(param_1);
      uVar5 = FUN_00c78d60(param_1);
      thunk_FUN_03e49910(uVar5,&local_4c);
      lVar6 = thunk_FUN_03a99535(param_1[0x53],0x460);
      if (lVar6 == 0) {
        uVar5 = thunk_FUN_03a99535(param_1[0x53],0x461);
        thunk_FUN_03e49910(uVar5,&local_3c);
      }
      else {
        uVar5 = thunk_FUN_03a99535(param_1[0x53],0x460);
        thunk_FUN_03e49910(uVar5,&local_3c);
      }
      if (local_48 < local_30) {
        lVar6 = *(longlong *)(param_1[0x42] + 0x20);
        if (lVar6 != 0) {
          iVar4 = FUN_007fd7d0(lVar6);
          FUN_00806af0(lVar6,iVar4 + 0x24);
        }
        lVar6 = *(longlong *)(param_1[0x42] + 0x18);
        if (lVar6 != 0) {
          iVar4 = FUN_007fd800(lVar6);
          FUN_00806b40(lVar6,iVar4 + 0x46);
        }
        uVar5 = FUN_00c78d60(param_1);
        thunk_FUN_03e49910(uVar5,&local_4c);
        thunk_FUN_0411b3be(0,param_1[0x53],&local_4c,2);
        uVar5 = FUN_00c78d60(param_1);
        in_stack_ffffffffffffff88 = in_stack_ffffffffffffff88 & 0xffffffff00000000;
        thunk_FUN_041cc6e2(uVar5,0,local_4c,local_48 + 0x46,in_stack_ffffffffffffff88,0,5);
        uVar5 = thunk_FUN_03a99535(param_1[0x53],0x442);
        thunk_FUN_03e49910(uVar5,&local_4c);
        thunk_FUN_0411b3be(0,param_1[0x53],&local_4c,2);
        uVar5 = thunk_FUN_03a99535(param_1[0x53],0x442);
        in_stack_ffffffffffffff88 = in_stack_ffffffffffffff88 & 0xffffffff00000000;
        thunk_FUN_041cc6e2(uVar5,0,local_4c,local_48 + 0x46,in_stack_ffffffffffffff88,0,5);
        uVar5 = thunk_FUN_03a99535(param_1[0x53],0x441);
        thunk_FUN_03e49910(uVar5,&local_4c);
        thunk_FUN_0411b3be(0,param_1[0x53],&local_4c,2);
        uVar5 = thunk_FUN_03a99535(param_1[0x53],0x441);
        in_stack_ffffffffffffff88 = in_stack_ffffffffffffff88 & 0xffffffff00000000;
        thunk_FUN_041cc6e2(uVar5,0,local_4c,local_48 + 0x46,in_stack_ffffffffffffff88,0,5);
        uVar5 = thunk_FUN_03a99535(param_1[0x53],0x470);
        thunk_FUN_03e49910(uVar5,&local_4c);
        thunk_FUN_0411b3be(0,param_1[0x53],&local_4c,2);
        uVar5 = thunk_FUN_03a99535(param_1[0x53],0x470);
        in_stack_ffffffffffffff88 = in_stack_ffffffffffffff88 & 0xffffffff00000000;
        thunk_FUN_041cc6e2(uVar5,0,local_4c,local_48 + 0x46,in_stack_ffffffffffffff88,0,5);
        uVar5 = thunk_FUN_03a99535(param_1[0x53],1);
        thunk_FUN_03e49910(uVar5,&local_4c);
        thunk_FUN_0411b3be(0,param_1[0x53],&local_4c,2);
        uVar5 = thunk_FUN_03a99535(param_1[0x53],1);
        in_stack_ffffffffffffff88 = in_stack_ffffffffffffff88 & 0xffffffff00000000;
        thunk_FUN_041cc6e2(uVar5,0,local_4c,local_48 + 0x46,in_stack_ffffffffffffff88,0,5);
        uVar5 = thunk_FUN_03a99535(param_1[0x53],2);
        thunk_FUN_03e49910(uVar5,&local_4c);
        thunk_FUN_0411b3be(0,param_1[0x53],&local_4c,2);
        uVar5 = thunk_FUN_03a99535(param_1[0x53],2);
        in_stack_ffffffffffffff88 = in_stack_ffffffffffffff88 & 0xffffffff00000000;
        thunk_FUN_041cc6e2(uVar5,0,local_4c,local_48 + 0x46,in_stack_ffffffffffffff88,0,5);
        uVar5 = thunk_FUN_03a99535(param_1[0x53],0x40e);
        thunk_FUN_03e49910(uVar5,&local_4c);
        thunk_FUN_0411b3be(0,param_1[0x53],&local_4c,2);
        uVar5 = thunk_FUN_03a99535(param_1[0x53],0x40e);
        in_stack_ffffffffffffff88 = in_stack_ffffffffffffff88 & 0xffffffff00000000;
        thunk_FUN_041cc6e2(uVar5,0,local_4c,local_48 + 0x46,in_stack_ffffffffffffff88,0,5);
        uVar5 = thunk_FUN_03a99535(param_1[0x53],0x410);
        thunk_FUN_03e49910(uVar5,&local_4c);
        thunk_FUN_0411b3be(0,param_1[0x53],&local_4c,2);
        uVar5 = thunk_FUN_03a99535(param_1[0x53]);
        thunk_FUN_041cc6e2(uVar5,0,local_4c,local_48 + 0x46,
                           in_stack_ffffffffffffff88 & 0xffffffff00000000,0,5);
        cVar3 = FUN_00c76df0(param_1);
        if (cVar3 != '\0') {
          uVar5 = thunk_FUN_03a99535(param_1[0x53],0x470);
          thunk_FUN_03e49910(uVar5,&local_4c);
          FUN_0064cc50(param_1[0x38],local_40 - local_38);
        }
      }
      uVar5 = thunk_FUN_03a65bf1(param_1[0x50],param_1[0x53],*param_2,*(undefined8 *)(param_2 + 2),
                                 *(undefined8 *)(param_2 + 4));
      *(undefined8 *)(param_2 + 6) = uVar5;
      (**(code **)(*param_1 + 0x108))(param_1,param_2);
    }
    else if (iVar4 == 0x7b) {
      FUN_00c655d0(param_1[0x42],local_29,param_2);
      if (local_29[0] == '\x01') {
        uVar5 = thunk_FUN_03a65bf1(param_1[0x50],param_1[0x53],*param_2,*(undefined8 *)(param_2 + 2)
                                   ,*(undefined8 *)(param_2 + 4));
        *(undefined8 *)(param_2 + 6) = uVar5;
      }
      (**(code **)(*param_1 + 0x108))(param_1,param_2);
    }
    else if (iVar4 == 5) {
      if (*(longlong *)(param_1[0x37] + 0x10) != 0) {
        thunk_FUN_03e49910(param_1[0x3d],&local_3c);
        local_54 = local_34 + 1;
        local_50 = local_38;
        thunk_FUN_0417e313(param_1[0x53],&local_54);
        FUN_0064cb30(*(undefined8 *)(param_1[0x37] + 0x10),local_54);
      }
      if ((param_1[0x38] != 0) && (*(longlong *)(param_1[0x38] + 0x358) == param_1[0x53])) {
        uVar5 = thunk_FUN_03a99535(param_1[0x53],0x470);
        thunk_FUN_03e49910(uVar5,&local_3c);
        lVar6 = thunk_FUN_03a99535(param_1[0x53],0x460);
        if (lVar6 == 0) {
          uVar5 = thunk_FUN_03a99535(param_1[0x53],0x461);
          thunk_FUN_03e49910(uVar5,&local_4c);
        }
        else {
          uVar5 = thunk_FUN_03a99535(param_1[0x53],0x460);
          thunk_FUN_03e49910(uVar5,&local_4c);
        }
        FUN_0064cc50(param_1[0x38],local_30 - local_48);
      }
      if ((param_1[0x79] != 0) && (param_1[0x77] != 0)) {
        uVar5 = thunk_FUN_03a99535(param_1[0x53],1);
        thunk_FUN_03e49910(uVar5,&local_3c);
        local_54 = local_3c;
        local_50 = local_38;
        thunk_FUN_0417e313(param_1[0x53],&local_54);
        FUN_00806af0(param_1[0x79],local_54);
      }
      if ((*(uint *)(param_1 + 0x1b) & 0x80000) == 0) {
        FUN_00c65620(param_1[0x42],param_2);
        plVar1 = *(longlong **)(param_1[0x42] + 0x60);
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x188))(plVar1);
        }
        uVar5 = thunk_FUN_03a65bf1(param_1[0x50],param_1[0x53],*param_2,*(undefined8 *)(param_2 + 2)
                                   ,*(undefined8 *)(param_2 + 4));
        *(undefined8 *)(param_2 + 6) = uVar5;
        (**(code **)(*param_1 + 0x108))(param_1,param_2);
      }
      else {
        if ((char)param_1[0x54] == '\x01') {
          lVar6 = *(longlong *)(param_1[0x42] + 0x60);
          if (lVar6 != 0) {
            FUN_0064cbf0(lVar6,*(int *)(lVar6 + 0x98) +
                               ((uint)*(ushort *)(param_2 + 4) - *(int *)(param_1[0x42] + 0x84)));
            lVar6 = *(longlong *)(param_1[0x42] + 0x60);
            FUN_0064cc50(lVar6,*(int *)(lVar6 + 0x9c) +
                               ((uint)*(ushort *)((longlong)param_2 + 0x12) -
                               *(int *)(param_1[0x42] + 0x88)));
          }
          thunk_FUN_0414fb0c(param_1[0x53],FUN_00c77950,0);
        }
        FUN_00c65620(param_1[0x42],param_2);
        plVar1 = *(longlong **)(param_1[0x42] + 0x60);
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x188))(plVar1);
        }
        uVar5 = thunk_FUN_03a65bf1(param_1[0x50],param_1[0x53],*param_2,*(undefined8 *)(param_2 + 2)
                                   ,*(undefined8 *)(param_2 + 4));
        *(undefined8 *)(param_2 + 6) = uVar5;
        (**(code **)(*param_1 + 0x108))(param_1,param_2);
      }
    }
    else if (iVar4 == 0x111) {
      if (((short)param_2[2] == 1) && (*(short *)((longlong)param_2 + 10) == 0)) {
        (**(code **)(*param_1 + 0x120))(param_1,local_29);
        if (local_29[0] == '\x01') {
          uVar5 = thunk_FUN_03a65bf1(param_1[0x50],param_1[0x53],*param_2,
                                     *(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4));
          *(undefined8 *)(param_2 + 6) = uVar5;
          (**(code **)(*param_1 + 0x108))(param_1,param_2);
        }
      }
      else if (((short)param_2[2] == -0x5ffe) && (*(short *)((longlong)param_2 + 10) == 0)) {
        (**(code **)(*param_1 + 0xd0))(param_1,local_29);
        if (local_29[0] == '\x01') {
          uVar5 = thunk_FUN_03a65bf1(param_1[0x50],param_1[0x53],*param_2,
                                     *(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4));
          *(undefined8 *)(param_2 + 6) = uVar5;
          (**(code **)(*param_1 + 0x108))(param_1,param_2);
        }
      }
      else if (((short)param_2[2] == -0x5ff7) && (*(short *)((longlong)param_2 + 10) == 0)) {
        (**(code **)(*param_1 + 0xd8))(param_1,local_29);
        if (local_29[0] == '\x01') {
          uVar5 = thunk_FUN_03a65bf1(param_1[0x50],param_1[0x53],*param_2,
                                     *(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4));
          *(undefined8 *)(param_2 + 6) = uVar5;
          (**(code **)(*param_1 + 0xe0))(param_1);
          (**(code **)(*param_1 + 0x108))(param_1,param_2);
        }
      }
      else if (((short)param_2[2] == -0x5fff) && (*(short *)((longlong)param_2 + 10) == 0)) {
        (**(code **)(*param_1 + 0xe8))(param_1,local_29);
        if (local_29[0] == '\x01') {
          uVar5 = thunk_FUN_03a65bf1(param_1[0x50],param_1[0x53],*param_2,
                                     *(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4));
          *(undefined8 *)(param_2 + 6) = uVar5;
          (**(code **)(*param_1 + 0xf0))(param_1);
          (**(code **)(*param_1 + 0x108))(param_1,param_2);
        }
      }
      else if (((short)param_2[2] == -0x5ff5) && (*(short *)((longlong)param_2 + 10) == 0)) {
        (**(code **)(*param_1 + 0xf8))(param_1,local_29);
        if (local_29[0] == '\x01') {
          uVar5 = thunk_FUN_03a65bf1(param_1[0x50],param_1[0x53],*param_2,
                                     *(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4));
          *(undefined8 *)(param_2 + 6) = uVar5;
          (**(code **)(*param_1 + 0x100))(param_1);
          (**(code **)(*param_1 + 0x108))(param_1,param_2);
        }
      }
      else if (((short)param_2[2] == 0x480) && (*(short *)((longlong)param_2 + 10) == 0x300)) {
        uVar5 = thunk_FUN_03a65bf1(param_1[0x50],param_1[0x53],*param_2,*(undefined8 *)(param_2 + 2)
                                   ,*(undefined8 *)(param_2 + 4));
        *(undefined8 *)(param_2 + 6) = uVar5;
        (**(code **)(*param_1 + 0x128))(param_1);
        (**(code **)(*param_1 + 0x108))(param_1,param_2);
      }
      else {
        lVar6 = FUN_00c78d60(param_1);
        if ((*(longlong *)(param_2 + 4) < 0) || (*(longlong *)(param_2 + 4) != lVar6)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if ((bVar2) && (*(short *)((longlong)param_2 + 10) == 5)) {
          uVar5 = thunk_FUN_03a65bf1(param_1[0x50],param_1[0x53],*param_2,
                                     *(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4));
          *(undefined8 *)(param_2 + 6) = uVar5;
          (**(code **)(*param_1 + 0x128))(param_1);
          (**(code **)(*param_1 + 0x108))(param_1,param_2);
        }
        else {
          uVar5 = thunk_FUN_03a65bf1(param_1[0x50],param_1[0x53],*param_2,
                                     *(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4));
          *(undefined8 *)(param_2 + 6) = uVar5;
          (**(code **)(*param_1 + 0x108))(param_1,param_2);
        }
      }
    }
    else {
      uVar5 = thunk_FUN_03a65bf1(param_1[0x50],param_1[0x53],iVar4,*(undefined8 *)(param_2 + 2),
                                 *(undefined8 *)(param_2 + 4));
      *(undefined8 *)(param_2 + 6) = uVar5;
      (**(code **)(*param_1 + 0x108))(param_1,param_2);
    }
  }
  return;
}

