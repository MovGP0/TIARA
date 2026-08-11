/* Ghidra address: 013ef5e0 */
/* Ghidra symbol: FUN_013ef5e0 */


void FUN_013ef5e0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined1 local_148 [256];
  undefined8 local_48;
  undefined8 local_40 [2];
  longlong local_30 [2];
  
  local_150 = 0;
  local_158 = 0;
  local_160 = 0;
  local_48 = 0;
  local_40[0] = 0;
  FUN_0064b380(*(undefined8 *)(param_1 + 0xd0),1,*(undefined4 *)(param_1 + 0x98));
  FUN_0064b380(*(undefined8 *)(param_1 + 0xd0),2,*(undefined4 *)(param_1 + 0x9c));
  FUN_0064b380(*(undefined8 *)(param_1 + 0xd0),3,*(undefined4 *)(param_1 + 0x98));
  (**(code **)(**(longlong **)(param_1 + 0x710) + 0x2d0))
            (*(longlong **)(param_1 + 0x710),*(undefined4 *)(param_1 + 0x718),local_30);
  *(longlong *)(param_1 + 0x728) = local_30[0];
  lVar6 = *(longlong *)(param_1 + 0x6f8);
  *(bool *)(lVar6 + 0x66a) = *(char *)(local_30[0] + 0x2e) == '\x01';
  FUN_00b0b020(lVar6,0);
  if (*(longlong *)(*(longlong *)(param_1 + 0x728) + 0x26) == 0) {
    FUN_0172c260(*(longlong *)(param_1 + 0x728),*(undefined8 *)(param_1 + 0x710),
                 *(undefined1 *)(param_1 + 0x718));
    lVar6 = *(longlong *)(param_1 + 0x728);
    lVar5 = FUN_004095c0(0x25);
    *(longlong *)(lVar6 + 0x26) = lVar5;
    FUN_0172c410(*(undefined8 *)(param_1 + 0x710),*(undefined1 *)(param_1 + 0x718),lVar5 + 1,
                 lVar5 + 9,lVar5 + 0x19,lVar5 + 0x21,lVar5 + 0x23,lVar5);
  }
  lVar6 = FUN_0172bd70(&PTR_FUN_01729478,1,*(undefined8 *)(param_1 + 0x710),
                       *(undefined1 *)(param_1 + 0x718),*(undefined8 *)PTR_DAT_02001f18,1);
  *(longlong *)(param_1 + 0x748) = lVar6;
  *(undefined1 *)(param_1 + 0x720) = *(undefined1 *)(lVar6 + 0x169);
  *(undefined2 *)(param_1 + 0x722) = *(undefined2 *)(*(longlong *)(param_1 + 0x748) + 0x16a);
  FUN_0172c500(*(undefined8 *)(param_1 + 0x748),*(undefined8 *)(param_1 + 0x738));
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x738) + 0x28))();
  iVar7 = 0;
  if (-1 < iVar2 + -1) {
    do {
      (**(code **)(**(longlong **)(param_1 + 0x738) + 0x18))
                (*(longlong **)(param_1 + 0x738),local_40,iVar7);
      iVar3 = FUN_00416db0(local_40[0],L"Hibrid-P");
      if (iVar3 == 0) {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6c8) + 0x4f0);
        (**(code **)(*plVar1 + 0x78))(plVar1,L"Hybrid-P");
      }
      else {
        (**(code **)(**(longlong **)(param_1 + 0x738) + 0x18))
                  (*(longlong **)(param_1 + 0x738),&local_48,iVar7);
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6c8) + 0x4f0);
        (**(code **)(*plVar1 + 0x78))(plVar1,local_48);
      }
      iVar7 = iVar7 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  (**(code **)(**(longlong **)(param_1 + 0x6c8) + 0x268))
            (*(longlong **)(param_1 + 0x6c8),*(undefined1 *)(param_1 + 0x720));
  FUN_0172c930(*(undefined8 *)(param_1 + 0x748),*(undefined1 *)(param_1 + 0x720),
               *(undefined8 *)(*(longlong *)(param_1 + 0x6d0) + 0x4a0),param_1 + 0x724);
  *(short *)(param_1 + 0x722) = *(short *)(param_1 + 0x722) - *(short *)(param_1 + 0x724);
  FUN_0172ca20(*(undefined8 *)(param_1 + 0x748),*(undefined1 *)(param_1 + 0x720),
               *(undefined2 *)(*(longlong *)(*(longlong *)(param_1 + 0x728) + 0x26) + 0x21),
               *(undefined8 *)(param_1 + 0x730));
  FUN_0172ce80(*(undefined8 *)(param_1 + 0x748),local_148,*(undefined2 *)(param_1 + 0x722));
  FUN_00414ff0(param_1 + 0x750,local_148);
  FUN_013efd90(param_1);
  plVar1 = *(longlong **)(param_1 + 0x6d0);
  (**(code **)(*plVar1 + 0x268))(plVar1,*(undefined2 *)(param_1 + 0x722));
  iVar2 = (**(code **)(*(longlong *)plVar1[0x94] + 0x28))((longlong *)plVar1[0x94]);
  iVar7 = FUN_0068bbb0(plVar1);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6f0),
               CONCAT71((int7)((ulonglong)
                               ((longlong)*(int *)((longlong)plVar1 + 0x9c) % (longlong)iVar7) >> 8)
                        ,*(int *)((longlong)plVar1 + 0x9c) / iVar7 < iVar2) & 0xffffffff);
  iVar2 = (**(code **)(*plVar1 + 0x260))(plVar1);
  FUN_0043f750(&local_158,iVar2 + 1);
  uVar4 = (**(code **)(*(longlong *)plVar1[0x94] + 0x28))((longlong *)plVar1[0x94]);
  FUN_0043f750(&local_160,uVar4);
  FUN_00416cd0(&local_150,3,local_158,&DAT_013efb30,local_160);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6f0),local_150);
  FUN_0064cf60(param_1,0x408);
  FUN_00414560(&local_160,3);
  FUN_00414560(&local_48,2);
  return;
}

