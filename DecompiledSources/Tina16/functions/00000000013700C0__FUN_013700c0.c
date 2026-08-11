/* Ghidra address: 013700c0 */
/* Ghidra symbol: FUN_013700c0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_013700c0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined1 *in_stack_ffffffffffffff38;
  undefined8 local_a0;
  undefined2 local_98 [4];
  undefined1 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  byte local_33;
  undefined1 local_32;
  byte local_31;
  undefined8 local_30;
  
  local_a0 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = (undefined1 *)0x0;
  local_70 = (undefined1 *)0x0;
  local_68 = (undefined1 *)0x0;
  local_60 = (undefined1 *)0x0;
  local_58 = (undefined1 *)0x0;
  local_50 = (undefined1 *)0x0;
  local_48 = (undefined1 *)0x0;
  local_40 = (undefined1 *)0x0;
  local_30 = 0;
  FUN_00848a70(*(undefined8 *)(param_1 + 0x7a8),
               *(undefined4 *)
                (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x7b8) + 0xa0) + 0x468) + 0x10)
              );
  iVar7 = *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x7b8) + 0xa0) + 0x468) +
                  0x10);
  iVar5 = 1;
  if (0 < iVar7) {
    puVar6 = &DAT_021082d0;
    do {
      plVar3 = (longlong *)
               FUN_004aeac0(*(undefined8 *)
                             (*(longlong *)(*(longlong *)(param_1 + 0x7b8) + 0xa0) + 0x468),
                            iVar5 + -1);
      *puVar6 = *(undefined8 *)((longlong)plVar3 + 0x1c);
      FUN_00414b50(&local_30,*(undefined8 *)(*plVar3 + 0x98));
      in_stack_ffffffffffffff38 = &local_32;
      FUN_01cfde70(*plVar3,(char)plVar3[1],0,&local_31,in_stack_ffffffffffffff38,&local_33);
      if (local_31 < 6) {
        if (local_31 == 5) {
          if (local_33 < 5) {
            if (local_33 == 4) {
LAB_013704cb:
              uVar4 = FUN_00b89270();
              FUN_00b8e520(uVar4,&local_68,*(byte *)((longlong)plVar3 + 9) + 0x22f);
              in_stack_ffffffffffffff38 = local_68;
              FUN_00416cd0(&local_30,3,local_30,&DAT_01370a14,local_68);
            }
            else if (local_33 == 1) {
              uVar4 = FUN_00b89270();
              FUN_00b8e520(uVar4,&local_50,*(byte *)((longlong)plVar3 + 9) + 0x22a);
              in_stack_ffffffffffffff38 = local_50;
              FUN_00416cd0(&local_30,3,local_30,&DAT_01370a14,local_50);
            }
            else if (local_33 == 2) {
              uVar4 = FUN_00b89270();
              FUN_00b8e520(uVar4,&local_58,*(byte *)((longlong)plVar3 + 9) + 0x23b);
              in_stack_ffffffffffffff38 = local_58;
              FUN_00416cd0(&local_30,3,local_30,&DAT_01370a14,local_58);
            }
            else if (local_33 == 3) {
              uVar4 = FUN_00b89270();
              FUN_00b8e520(uVar4,&local_60,*(byte *)((longlong)plVar3 + 9) + 0x232);
              in_stack_ffffffffffffff38 = local_60;
              FUN_00416cd0(&local_30,3,local_30,&DAT_01370a14,local_60);
            }
          }
          else if (local_33 == 5) {
            uVar4 = FUN_00b89270();
            FUN_00b8e520(uVar4,&local_70,*(byte *)((longlong)plVar3 + 9) + 0x23f);
            in_stack_ffffffffffffff38 = local_70;
            FUN_00416cd0(&local_30,3,local_30,&DAT_01370a14,local_70);
          }
          else if (local_33 == 6) {
            uVar4 = FUN_00b89270();
            FUN_00b8e520(uVar4,&local_78,*(byte *)((longlong)plVar3 + 9) + 0x23d);
            in_stack_ffffffffffffff38 = local_78;
            FUN_00416cd0(&local_30,3,local_30,&DAT_01370a14,local_78);
          }
          else if (local_33 == 7) goto LAB_013704cb;
        }
        else {
          if (local_31 == 3) goto LAB_0137027c;
          if (local_31 == 4) goto LAB_013702d6;
        }
      }
      else if (local_31 == 6) {
LAB_0137027c:
        FUN_01cfd0f0(*plVar3,&local_40,*(byte *)(plVar3 + 1) - 1,*(undefined8 *)PTR_DAT_02001f18);
        in_stack_ffffffffffffff38 = local_40;
        FUN_00416cd0(&local_30,3,local_30,&DAT_01370a14,local_40);
      }
      else if (local_31 == 7) {
LAB_013702d6:
        uVar4 = FUN_0172dba0(&PTR_FUN_01729b58,1,*plVar3,(char)plVar3[1] + -1,
                             *(undefined8 *)PTR_DAT_02001f18,1);
        FUN_0172ddd0(uVar4,&local_48,*(byte *)((longlong)plVar3 + 9) - 1);
        in_stack_ffffffffffffff38 = local_48;
        FUN_00416cd0(&local_30,3,local_30,&DAT_01370a14,local_48);
        FUN_00410f20(uVar4);
      }
      FUN_014313c0(&PTR_FUN_0142bf08,1,puVar6,iVar5);
      FUN_00b0ab70(*(undefined8 *)(param_1 + 0x7a8),local_30);
      iVar5 = iVar5 + 1;
      puVar6 = puVar6 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  iVar7 = FUN_008003b0(param_1);
  _DAT_02108320 = FUN_0040c770((double)iVar7 / 96.0);
  FUN_0074b490(*(undefined8 *)(param_1 + 0x6b8),0);
  FUN_00b90440(*(undefined8 *)(param_1 + 0x6e0),
               *(undefined8 *)(*(longlong *)(param_1 + 0x7b8) + 0x778));
  FUN_00f04fa0(*(undefined8 *)(param_1 + 0x6d8),
               *(undefined2 *)(*(longlong *)(param_1 + 0x7b8) + 0xd9f));
  FUN_00f04fa0(*(undefined8 *)(param_1 + 0x788),
               (longlong)*(short *)(*(longlong *)(param_1 + 0x7b8) + 0xda1));
  FUN_00f04fa0(*(undefined8 *)(param_1 + 0x7a0),
               (longlong)*(short *)(*(longlong *)(param_1 + 0x7b8) + 0xda3));
  FUN_0074b490(*(undefined8 *)(param_1 + 0x790),
               *(undefined1 *)(*(longlong *)(param_1 + 0x7b8) + 0xda5));
  if (*(char *)(param_1 + 0x7b0) == '\x01') {
    FUN_00f04fa0(*(undefined8 *)(param_1 + 0x750),
                 *(undefined2 *)(*(longlong *)(param_1 + 0x7b8) + 0x838));
    FUN_00b90440(*(undefined8 *)(param_1 + 0x748),
                 *(undefined8 *)(*(longlong *)(param_1 + 0x7b8) + 0x83a));
    FUN_00b90440(*(undefined8 *)(param_1 + 0x740),
                 *(undefined8 *)(*(longlong *)(param_1 + 0x7b8) + 0x842));
    plVar3 = *(longlong **)(param_1 + 0x758);
    FUN_010bd500(*(undefined8 *)(*(longlong *)(param_1 + 0x7b8) + 0xa0),plVar3[0x9e],0,0,
                 (ulonglong)in_stack_ffffffffffffff38 & 0xffffffffffffff00);
    FUN_00685670(plVar3,1);
    for (iVar7 = 0;
        iVar5 = (**(code **)(*(longlong *)plVar3[0x9e] + 0x28))((longlong *)plVar3[0x9e]),
        iVar7 < iVar5; iVar7 = iVar7 + 1) {
      (**(code **)(*(longlong *)plVar3[0x9e] + 0x18))((longlong *)plVar3[0x9e],&local_80,iVar7);
      iVar5 = FUN_0043e650(local_80,*(undefined8 *)(*(longlong *)(param_1 + 0x7b8) + 0xda6));
      if (iVar5 == 0) break;
    }
    if ((*(longlong *)(*(longlong *)(param_1 + 0x7b8) + 0xda6) == 0) ||
       (iVar5 = (**(code **)(*(longlong *)plVar3[0x9e] + 0x28))((longlong *)plVar3[0x9e]),
       iVar5 <= iVar7)) {
      lVar1 = *(longlong *)(param_1 + 0x7b8);
      if ((*(char *)(lVar1 + 0x4c8) == '\0') || (*(longlong *)(lVar1 + 0x4d0) == 0)) {
        (**(code **)(*plVar3 + 0x268))(plVar3,0);
      }
      else {
        uVar2 = (**(code **)(*(longlong *)plVar3[0x9e] + 0xc0))
                          ((longlong *)plVar3[0x9e],
                           *(undefined8 *)(*(longlong *)(lVar1 + 0x4d0) + 0x128));
        (**(code **)(*plVar3 + 0x268))(plVar3,uVar2);
      }
    }
    else {
      (**(code **)(*plVar3 + 0x268))(plVar3,iVar7);
    }
    FUN_01370fd0(param_1,param_2);
  }
  else {
    FUN_00f04fa0(*(undefined8 *)(param_1 + 0x750),
                 *(undefined2 *)(*(longlong *)(param_1 + 0x7b8) + 0x870));
    FUN_00b90440(*(undefined8 *)(param_1 + 0x748),
                 *(undefined8 *)(*(longlong *)(param_1 + 0x7b8) + 0x872));
    FUN_00b90440(*(undefined8 *)(param_1 + 0x740),
                 *(undefined8 *)(*(longlong *)(param_1 + 0x7b8) + 0x87a));
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x758),0);
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x760),0);
    local_98[0] = 0x43;
    local_90 = 9;
    FUN_00442f70(&local_88,L"[%s]",local_98,0);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x728),local_88);
    local_98[0] = 0x43;
    local_90 = 9;
    FUN_00442f70(&local_a0,L"[%s]",local_98,0);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x730),local_a0);
  }
  FUN_0064cf60(param_1,0x481);
  FUN_00414480(&local_a0);
  FUN_00414560(&local_88,10);
  FUN_00414480(&local_30);
  return;
}

