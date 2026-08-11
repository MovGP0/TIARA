/* Ghidra address: 01964820 */
/* Ghidra symbol: FUN_01964820 */


void FUN_01964820(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  FUN_018dc480(*(undefined8 *)(param_2 + 0x58));
  FUN_00410f20(*(undefined8 *)(param_2 + 0x50));
  if (*(longlong *)(param_2 + 0x98) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0x98) + 0x58))
              (*(undefined8 *)(param_2 + 0x98),**(undefined8 **)(param_2 + 0x88));
    iVar2 = (**(code **)(**(longlong **)(param_2 + 0x98) + 0x28))(*(undefined8 *)(param_2 + 0x98));
    plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x58) + 0xa0);
    iVar3 = (**(code **)(*plVar1 + 0x28))(plVar1);
    if (iVar2 == iVar3) {
      iVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_2 + 0x58) + 0xa0) + 0x28))();
      *(undefined4 *)(param_2 + 0x48) = 0;
      if (*(int *)(param_2 + 0x48) <= iVar2 + -1) {
        do {
          plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x58) + 0xa0);
          uVar4 = (**(code **)(*plVar1 + 0x30))(plVar1,*(undefined4 *)(param_2 + 0x48));
          (**(code **)(**(longlong **)(param_2 + 0x98) + 0x48))
                    (*(undefined8 *)(param_2 + 0x98),*(undefined4 *)(param_2 + 0x48),uVar4);
          *(int *)(param_2 + 0x48) = *(int *)(param_2 + 0x48) + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
    }
  }
  return;
}

