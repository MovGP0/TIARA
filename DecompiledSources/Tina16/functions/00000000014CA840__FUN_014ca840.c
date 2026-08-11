/* Ghidra address: 014ca840 */
/* Ghidra symbol: FUN_014ca840 */


void FUN_014ca840(longlong param_1)

{
  longlong *plVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  int local_3c;
  undefined1 local_2b;
  char local_2a;
  undefined1 local_29;
  
  uVar3 = FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_004b67b0(uVar3,1);
  iVar7 = *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x1a0) + 0x12a0) + 0x9c0) +
                  0x10);
  local_3c = 0;
  if (-1 < iVar7 + -1) {
    do {
      uVar4 = FUN_004aeac0(*(undefined8 *)
                            (*(longlong *)(*(longlong *)(param_1 + 0x1a0) + 0x12a0) + 0x9c0),
                           local_3c);
      *(undefined8 *)(param_1 + 0x160) = uVar4;
      if (*(int *)(*(longlong *)(param_1 + 0x160) + 0x10) == 0x40a) {
        uVar4 = FUN_01cf1750(0,&PTR_FUN_01cf10a8,0x40a);
        *(undefined8 *)(param_1 + 0x158) = uVar4;
        *(undefined8 *)(*(longlong *)(param_1 + 0x160) + 8) = *(undefined8 *)(param_1 + 0x158);
        plVar1 = *(longlong **)(param_1 + 0x158);
        uVar2 = (**(code **)(*plVar1 + 0x2c8))(plVar1);
        lVar5 = FUN_00409570(uVar2);
        plVar1[0x18] = lVar5;
        FUN_01d38290(*(undefined8 *)(param_1 + 0x158),1);
        (**(code **)(*plVar1 + 0x2d0))(plVar1,3,param_1 + 0x168);
        **(undefined1 **)(param_1 + 0x168) = 0;
        (**(code **)(*plVar1 + 0x2d0))(plVar1,4,param_1 + 0x168);
        *(undefined2 *)(*(longlong *)(param_1 + 0x168) + 0x1f) =
             *(undefined2 *)(*(longlong *)(param_1 + 0x160) + 0x6c);
        FUN_00415020(*(undefined8 *)(param_1 + 0x168),*(longlong *)(param_1 + 0x160) + 0x4d,0x1e);
        (**(code **)(*plVar1 + 0x2d0))(plVar1,5,param_1 + 0x168);
        *(undefined2 *)(*(longlong *)(param_1 + 0x168) + 0x1f) =
             *(undefined2 *)(*(longlong *)(param_1 + 0x160) + 0x47);
        FUN_00415020(*(undefined8 *)(param_1 + 0x168),*(longlong *)(param_1 + 0x160) + 0x28,0x1e);
        (**(code **)(*plVar1 + 0x2d0))(plVar1,6,param_1 + 0x168);
        **(undefined2 **)(param_1 + 0x168) = *(undefined2 *)(*(longlong *)(param_1 + 0x160) + 0x18);
        if (-1 < *(int *)(*(longlong *)(param_1 + 0x160) + 0x7c)) {
          (**(code **)(*plVar1 + 0x2d0))(plVar1,0,param_1 + 0x168);
          **(undefined1 **)(param_1 + 0x168) =
               *(undefined1 *)(*(longlong *)(param_1 + 0x160) + 0x7c);
        }
        if (-1 < *(int *)(*(longlong *)(param_1 + 0x160) + 0x78)) {
          (**(code **)(*plVar1 + 0x2d0))(plVar1,1,param_1 + 0x168);
          **(undefined1 **)(param_1 + 0x168) =
               *(undefined1 *)(*(longlong *)(param_1 + 0x160) + 0x78);
        }
        if (-1 < *(int *)(*(longlong *)(param_1 + 0x160) + 0x80)) {
          (**(code **)(*plVar1 + 0x2d0))(plVar1,2,param_1 + 0x168);
          **(undefined1 **)(param_1 + 0x168) =
               *(undefined1 *)(*(longlong *)(param_1 + 0x160) + 0x80);
        }
        if (0.0 <= *(double *)(*(longlong *)(param_1 + 0x160) + 0x20)) {
          (**(code **)(*plVar1 + 0x2d0))(plVar1,8,param_1 + 0x168);
          FUN_01d3a010(*(undefined8 *)(param_1 + 0x168),3,
                       *(undefined8 *)(*(longlong *)(param_1 + 0x160) + 0x20));
        }
        (**(code **)(*plVar1 + 0x2d0))(plVar1,7,param_1 + 0x168);
        **(undefined1 **)(param_1 + 0x168) = *(undefined1 *)(*(longlong *)(param_1 + 0x160) + 0x9a);
        FUN_014cc480(*(undefined8 *)(param_1 + 0x1a0),*(undefined1 *)(param_1 + 0x1a8),
                     *(undefined8 *)(param_1 + 0x150),*(undefined8 *)(param_1 + 0x160),uVar3);
      }
      if (*(int *)(*(longlong *)(param_1 + 0x160) + 0x10) == 0x40b) {
        uVar4 = FUN_01cf1750(0,&PTR_FUN_01cf10a8,0x40b);
        *(undefined8 *)(param_1 + 0x158) = uVar4;
        *(undefined8 *)(*(longlong *)(param_1 + 0x160) + 8) = *(undefined8 *)(param_1 + 0x158);
        plVar1 = *(longlong **)(param_1 + 0x158);
        uVar2 = (**(code **)(*plVar1 + 0x2c8))(plVar1);
        lVar5 = FUN_00409570(uVar2);
        plVar1[0x18] = lVar5;
        FUN_01d38290(*(undefined8 *)(param_1 + 0x158),1);
        (**(code **)(*plVar1 + 0x2d0))(plVar1,5,param_1 + 0x168);
        puVar6 = *(undefined8 **)(param_1 + 0x168);
        lVar5 = *(longlong *)(param_1 + 0x160);
        *puVar6 = *(undefined8 *)(lVar5 + 0x4d);
        puVar6[1] = *(undefined8 *)(lVar5 + 0x55);
        puVar6[2] = *(undefined8 *)(lVar5 + 0x5d);
        puVar6[3] = *(undefined8 *)(lVar5 + 0x65);
        *(undefined4 *)(puVar6 + 4) = *(undefined4 *)(lVar5 + 0x6d);
        *(undefined1 *)((longlong)puVar6 + 0x24) = *(undefined1 *)(lVar5 + 0x71);
        (**(code **)(*plVar1 + 0x2d0))(plVar1,6,param_1 + 0x168);
        puVar6 = *(undefined8 **)(param_1 + 0x168);
        lVar5 = *(longlong *)(param_1 + 0x160);
        *puVar6 = *(undefined8 *)(lVar5 + 0x28);
        puVar6[1] = *(undefined8 *)(lVar5 + 0x30);
        puVar6[2] = *(undefined8 *)(lVar5 + 0x38);
        puVar6[3] = *(undefined8 *)(lVar5 + 0x40);
        *(undefined4 *)(puVar6 + 4) = *(undefined4 *)(lVar5 + 0x48);
        *(undefined1 *)((longlong)puVar6 + 0x24) = *(undefined1 *)(lVar5 + 0x4c);
        (**(code **)(*plVar1 + 0x2d0))(plVar1,7,param_1 + 0x168);
        **(undefined2 **)(param_1 + 0x168) = *(undefined2 *)(*(longlong *)(param_1 + 0x160) + 0x18);
        if (-1 < *(int *)(*(longlong *)(param_1 + 0x160) + 0x7c)) {
          (**(code **)(*plVar1 + 0x2d0))(plVar1,0,param_1 + 0x168);
          **(undefined1 **)(param_1 + 0x168) =
               *(undefined1 *)(*(longlong *)(param_1 + 0x160) + 0x7c);
        }
        if (-1 < *(int *)(*(longlong *)(param_1 + 0x160) + 0x74)) {
          (**(code **)(*plVar1 + 0x2d0))(plVar1,1,param_1 + 0x168);
          **(undefined1 **)(param_1 + 0x168) =
               *(undefined1 *)(*(longlong *)(param_1 + 0x160) + 0x74);
        }
        if (*(char *)(*(longlong *)(param_1 + 0x160) + 0x99) != '\0') {
          puVar6 = (undefined8 *)FUN_01cfde70(plVar1,0xd,3,&local_29,&local_2a,&local_2b);
          if (local_2a == '\x03') {
            *puVar6 = 0x415312d000000000;
          }
          puVar6 = (undefined8 *)FUN_01cfde70(plVar1,0xd,2,&local_29,&local_2a,&local_2b);
          if (local_2a == '\x03') {
            *puVar6 = 0x3d95fd7fe1796495;
          }
        }
        FUN_014cc480(*(undefined8 *)(param_1 + 0x1a0),*(undefined1 *)(param_1 + 0x1a8),
                     *(undefined8 *)(param_1 + 0x150),*(undefined8 *)(param_1 + 0x160),uVar3);
      }
      local_3c = local_3c + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  FUN_00410f20(uVar3);
  return;
}

