/* Ghidra address: 013f3ec0 */
/* Ghidra symbol: FUN_013f3ec0 */


void FUN_013f3ec0(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 local_30 [2];
  undefined8 local_20;
  
  local_30[0] = 0;
  local_20 = 0;
  if (*(char *)(param_1 + 0x8e2) == '\0') {
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x6d0) + 0x260))(*(longlong **)(param_1 + 0x6d0))
    ;
    *(char *)(param_1 + 0x77c) = (char)uVar3;
    bVar1 = FUN_0172c9d0(*(undefined8 *)(param_1 + 0x7c8),uVar3);
    *(byte *)(param_1 + 0x8e1) = bVar1;
    FUN_0074b490(*(longlong *)(param_1 + 0x718),
                 bVar1 & *(int *)(*(longlong *)(param_1 + 0x718) + 0x4a8) == 1);
    plVar6 = (longlong *)FUN_004d3de0(*(undefined8 *)(param_1 + 0x718),1);
    (**(code **)(*plVar6 + 0x128))(plVar6,*(undefined1 *)(param_1 + 0x8e1));
    if (*(char *)(param_1 + 0x8e3) == '\0') {
      plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x6d8) + 0x4a0);
      (**(code **)(*plVar6 + 0x18))(plVar6,&local_20,*(undefined2 *)(param_1 + 0x77e));
      FUN_0172c930(*(undefined8 *)(param_1 + 0x7c8),*(undefined1 *)(param_1 + 0x77c),
                   *(undefined8 *)(*(longlong *)(param_1 + 0x6d8) + 0x4a0),param_1 + 0x780);
      plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x6d8) + 0x4a0);
      uVar3 = (**(code **)(*plVar6 + 0xb0))(plVar6,local_20);
      uVar2 = FUN_00b905e0(uVar3,0);
      *(undefined2 *)(param_1 + 0x77e) = uVar2;
    }
    else {
      FUN_0172c930(*(undefined8 *)(param_1 + 0x7c8),*(undefined1 *)(param_1 + 0x77c),
                   *(undefined8 *)(*(longlong *)(param_1 + 0x6d8) + 0x4a0),param_1 + 0x780);
      *(undefined2 *)(param_1 + 0x77e) = 0;
    }
    *(undefined1 *)(param_1 + 0x8e3) = 0;
  }
  else {
    iVar4 = (**(code **)(**(longlong **)(param_1 + 0x6c8) + 0x260))(*(longlong **)(param_1 + 0x6c8))
    ;
    if (iVar4 == 1) {
      FUN_01717260(*(undefined8 *)(param_1 + 0x940),
                   *(undefined8 *)(*(longlong *)(param_1 + 0x6d8) + 0x4a0),
                   *(undefined8 *)(param_1 + 2000),L"[All]",1,0);
    }
    else {
      plVar6 = *(longlong **)(param_1 + 0x6c8);
      uVar3 = (**(code **)(*plVar6 + 0x260))(plVar6);
      (**(code **)(*(longlong *)plVar6[0x9e] + 0x18))((longlong *)plVar6[0x9e],local_30,uVar3);
      FUN_01717260(*(undefined8 *)(param_1 + 0x940),
                   *(undefined8 *)(*(longlong *)(param_1 + 0x6d8) + 0x4a0),
                   *(undefined8 *)(param_1 + 2000),local_30[0],1,0);
    }
    plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x6d8) + 0x4a0);
    iVar4 = (**(code **)(*plVar6 + 0x28))(plVar6);
    *(bool *)(param_1 + 0x8e3) = iVar4 == 0;
    if (iVar4 == 0) {
      plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x738) + 0x4d8);
      (**(code **)(*plVar6 + 0x90))(plVar6);
    }
    *(undefined2 *)(param_1 + 0x77e) = 0;
    *(undefined1 *)(param_1 + 0x77c) = 0;
  }
  if (*(char *)(param_1 + 0x8e3) == '\0') {
    FUN_013f35b0(param_1);
    FUN_00b0b020(*(undefined8 *)(param_1 + 0x728),0);
    FUN_0172ca20(*(undefined8 *)(param_1 + 0x7c8),*(undefined1 *)(param_1 + 0x77c),
                 *(undefined2 *)(*(longlong *)(*(longlong *)(param_1 + 0x788) + 0x26) + 0x21),
                 *(undefined8 *)(param_1 + 0x798));
    FUN_013f3750(param_1);
    FUN_013f3b20(param_1);
    plVar6 = *(longlong **)(param_1 + 0x6d8);
    (**(code **)(*plVar6 + 0x268))(plVar6,*(undefined2 *)(param_1 + 0x77e));
    iVar4 = (**(code **)(*(longlong *)plVar6[0x94] + 0x28))((longlong *)plVar6[0x94]);
    iVar5 = FUN_0068bbb0(plVar6);
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6f0),
                 CONCAT71((int7)((ulonglong)
                                 ((longlong)*(int *)((longlong)plVar6 + 0x9c) % (longlong)iVar5) >>
                                8),*(int *)((longlong)plVar6 + 0x9c) / iVar5 < iVar4) & 0xffffffff);
    FUN_013f47e0(param_1,param_2);
  }
  else {
    FUN_00b0b020(*(undefined8 *)(param_1 + 0x728),0);
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6f0),0);
  }
  FUN_013f3560(param_1);
  FUN_013f3480(param_1);
  FUN_00414480(local_30);
  FUN_00414480(&local_20);
  return;
}

