/* Ghidra address: 013f4960 */
/* Ghidra symbol: FUN_013f4960 */


void FUN_013f4960(longlong param_1)

{
  longlong *plVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar6;
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  if (*(int *)(*(longlong *)(param_1 + 0x718) + 0x4a8) == 0) {
    if (*(int *)(*(longlong *)(param_1 + 0x728) + 0x4a4) != 2) {
      *(undefined1 *)(param_1 + 0x8e4) = 1;
      FUN_00b0b020(*(undefined8 *)(param_1 + 0x728),2);
      FUN_008483e0(*(undefined8 *)(param_1 + 0x728),2);
      FUN_0064b380(*(undefined8 *)(param_1 + 0xd0),3,0);
      FUN_0064b380(*(undefined8 *)(param_1 + 0xd0),1,0);
      plVar1 = *(longlong **)(param_1 + 0x708);
      (**(code **)(*plVar1 + 400))
                (plVar1,*(undefined4 *)(param_1 + 0x774),*(undefined4 *)((longlong)plVar1 + 0x94),
                 *(undefined4 *)(param_1 + 0x778),
                 CONCAT44(uVar6,*(undefined4 *)((longlong)plVar1 + 0x9c)));
      plVar1 = *(longlong **)(param_1 + 0x728);
      (**(code **)(*plVar1 + 400))
                (plVar1,*(undefined4 *)(param_1 + 0x76c),*(undefined4 *)((longlong)plVar1 + 0x94),
                 *(undefined4 *)(param_1 + 0x770),*(undefined4 *)((longlong)plVar1 + 0x9c));
      iVar3 = FUN_0064d0b0(param_1);
      FUN_01b1d750(param_1,(*(int *)(param_1 + 0x98) - iVar3) + *(int *)(param_1 + 0x768),
                   *(undefined4 *)(param_1 + 0x9c));
      lVar4 = **(longlong **)(param_1 + 0x790);
      if (lVar4 != 0) {
        if (*(longlong *)(lVar4 + 8) != 0) {
          FUN_004095f0(*(longlong *)(lVar4 + 8),*(undefined1 *)(lVar4 + 0x19));
        }
        if (*(longlong *)(lVar4 + 0x10) != 0) {
          FUN_004095f0(*(longlong *)(lVar4 + 0x10),*(undefined2 *)(lVar4 + 0x1a));
        }
        FUN_004095f0(**(undefined8 **)(param_1 + 0x790));
        **(undefined8 **)(param_1 + 0x790) = 0;
      }
    }
  }
  else if (*(int *)(*(longlong *)(param_1 + 0x728) + 0x4a4) != 10) {
    *(undefined1 *)(param_1 + 0x8e4) = 1;
    FUN_008483e0(*(undefined8 *)(param_1 + 0x728),10);
    iVar3 = 0;
    puVar5 = &DAT_01f4655c;
    do {
      FUN_00848460(*(undefined8 *)(param_1 + 0x728),iVar3 + 1,*puVar5);
      uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
      iVar3 = iVar3 + 1;
      puVar5 = puVar5 + 1;
    } while (iVar3 != 9);
    FUN_0064b380(*(undefined8 *)(param_1 + 0xd0),3,0);
    FUN_0064b380(*(undefined8 *)(param_1 + 0xd0),1,0);
    plVar1 = *(longlong **)(param_1 + 0x708);
    (**(code **)(*plVar1 + 400))
              (plVar1,*(undefined4 *)(param_1 + 0x774),*(undefined4 *)((longlong)plVar1 + 0x94),
               *(int *)(param_1 + 0x778) + 0x170,
               CONCAT44(uVar6,*(undefined4 *)((longlong)plVar1 + 0x9c)));
    plVar1 = *(longlong **)(param_1 + 0x728);
    (**(code **)(*plVar1 + 400))
              (plVar1,*(undefined4 *)(param_1 + 0x76c),*(undefined4 *)((longlong)plVar1 + 0x94),
               *(int *)(param_1 + 0x770) + 0x15c,*(undefined4 *)((longlong)plVar1 + 0x9c));
    iVar3 = FUN_0064d0b0(param_1);
    FUN_01b1d750(param_1,(*(int *)(param_1 + 0x98) - iVar3) +
                         *(int *)(*(longlong *)(param_1 + 0x708) + 0x90) +
                         *(int *)(*(longlong *)(param_1 + 0x708) + 0x98) + 3,
                 *(undefined4 *)(param_1 + 0x9c));
    if (**(longlong **)(param_1 + 0x790) == 0) {
      lVar4 = FUN_004095c0(0x20);
      **(longlong **)(param_1 + 0x790) = lVar4;
      puVar2 = *(undefined1 **)(*(longlong *)(param_1 + 0x788) + 0x26);
      FUN_0172d140(*(undefined8 *)(param_1 + 0x7c8),*puVar2,puVar2[0x21],
                   *(undefined8 *)(param_1 + 0x7a8),lVar4 + 8,lVar4 + 0x10,lVar4 + 0x19,lVar4 + 0x1a
                  );
    }
    else {
      puVar2 = *(undefined1 **)(*(longlong *)(param_1 + 0x788) + 0x26);
      FUN_0172d3f0(*(undefined8 *)(param_1 + 0x7c8),*puVar2,puVar2[0x21],
                   *(undefined8 *)(param_1 + 0x7a8));
    }
    if ((char)(*(longlong **)(param_1 + 0x790))[1] != '\x01') {
      lVar4 = **(longlong **)(param_1 + 0x790);
      *(undefined1 *)(lVar4 + 0x18) =
           *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x788) + 0x26) + 0x21);
      puVar2 = *(undefined1 **)(*(longlong *)(param_1 + 0x788) + 0x26);
      FUN_0172d5d0(*(undefined8 *)(param_1 + 0x7c8),*puVar2,puVar2[0x21],
                   *(undefined1 *)(lVar4 + 0x19),*(undefined8 *)(lVar4 + 8),
                   *(undefined8 *)(lVar4 + 0x10));
    }
    FUN_013f3b20(param_1);
  }
  return;
}

