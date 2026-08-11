/* Ghidra address: 0176ce10 */
/* Ghidra symbol: FUN_0176ce10 */


void FUN_0176ce10(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x28))();
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x18))
                (*(longlong **)(param_1 + 0xe0),local_30,iVar3);
      iVar2 = (**(code **)(**(longlong **)(param_1 + 0xd0) + 0xb0))
                        (*(longlong **)(param_1 + 0xd0),local_30[0]);
      if (iVar2 == -1) {
        iVar2 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x30))
                          (*(longlong **)(param_1 + 0xe0),iVar3);
        if (*(int *)(param_1 + 0x118) <= iVar2) {
          (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x48))
                    (*(longlong **)(param_1 + 0xe0),iVar3,
                     (longlong)(iVar2 + (*(int *)(param_1 + 100) - *(int *)(param_1 + 0x118))));
        }
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414480(local_30);
  return;
}

