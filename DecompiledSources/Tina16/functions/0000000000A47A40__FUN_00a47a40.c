/* Ghidra address: 00a47a40 */
/* Ghidra symbol: FUN_00a47a40 */


void FUN_00a47a40(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  
  do {
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x4c);
    do {
      uVar4 = (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0xc0))
                        ((undefined8 *)**(undefined8 **)(param_1 + 0xc0));
      plVar5 = (longlong *)FUN_00609e10(uVar4);
      uVar4 = (**(code **)**(undefined8 **)(param_1 + 0xa0))(*(undefined8 **)(param_1 + 0xa0));
      (**(code **)(*plVar5 + 0x88))
                (plVar5,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x44),uVar4);
      lVar6 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x20))(*(longlong **)(param_1 + 0xa0));
      if (lVar6 == 0) {
        if (**(char **)(param_1 + 200) == '\0') {
          uVar4 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0xc0) + 0x20))
                            ((longlong *)**(undefined8 **)(param_1 + 0xc0));
          uVar4 = FUN_00609e10(uVar4);
          uVar4 = FUN_005ffa40(uVar4);
          plVar5 = (longlong *)
                   (**(code **)**(undefined8 **)(param_1 + 0xa0))(*(undefined8 **)(param_1 + 0xa0));
          uVar1 = (**(code **)(*plVar5 + 0x60))(plVar5);
          plVar5 = (longlong *)
                   (**(code **)**(undefined8 **)(param_1 + 0xa0))(*(undefined8 **)(param_1 + 0xa0));
          uVar2 = (**(code **)(*plVar5 + 0x48))(plVar5);
          thunk_FUN_04161b78(uVar4,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x44),
                             uVar1,uVar2,0x42);
        }
      }
      else {
        uVar4 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0xc0) + 0x20))
                          ((longlong *)**(undefined8 **)(param_1 + 0xc0));
        plVar5 = (longlong *)FUN_00609e10(uVar4);
        uVar4 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x20))
                          (*(longlong **)(param_1 + 0xa0));
        (**(code **)(*plVar5 + 0x88))
                  (plVar5,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x44),uVar4);
      }
      plVar5 = (longlong *)
               (**(code **)**(undefined8 **)(param_1 + 0xa0))(*(undefined8 **)(param_1 + 0xa0));
      iVar3 = (**(code **)(*plVar5 + 0x60))(plVar5);
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + iVar3;
    } while (*(int *)(param_1 + 0x48) < *(int *)(param_1 + 0x40));
    plVar5 = (longlong *)
             (**(code **)**(undefined8 **)(param_1 + 0xa0))(*(undefined8 **)(param_1 + 0xa0));
    iVar3 = (**(code **)(*plVar5 + 0x48))(plVar5);
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + iVar3;
  } while (*(int *)(param_1 + 0x44) < *(int *)(param_1 + 0x3c));
  return;
}

