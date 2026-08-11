/* Ghidra address: 00661ba0 */
/* Ghidra symbol: FUN_00661ba0 */


void FUN_00661ba0(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (*(char *)(*(longlong *)(param_2 + 0x28) + 0x20) == '\x01') {
    iVar2 = FUN_00660cd0(param_2);
    if (*(int *)(*(longlong *)(param_1 + 0x58) + 4) <= iVar2) {
      iVar2 = FUN_00660cd0(param_2);
      if (iVar2 - *(int *)(*(longlong *)(param_1 + 0x50) + 0x18) <=
          *(int *)(*(longlong *)(param_1 + 0x58) + 4)) {
        **(undefined4 **)(param_1 + 0x60) = 0x12;
        *(longlong *)(param_1 + 0x28) = param_2;
        goto LAB_00661c5e;
      }
    }
  }
  if (*(char *)(*(longlong *)(param_2 + 0x28) + 0x20) == '\x02') {
    iVar2 = FUN_00660cd0(param_2);
    if (**(int **)(param_1 + 0x58) <= iVar2) {
      iVar2 = FUN_00660cd0(param_2);
      if (iVar2 - *(int *)(*(longlong *)(param_1 + 0x50) + 0x18) <= **(int **)(param_1 + 0x58)) {
        **(undefined4 **)(param_1 + 0x60) = 0x12;
        *(longlong *)(param_1 + 0x28) = param_2;
        goto LAB_00661c5e;
      }
    }
  }
  if (*(longlong *)(param_2 + 8) != 0) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x80))
                      (*(longlong **)(param_1 + 0x50),param_2,*(undefined8 *)(param_1 + 0x58),
                       *(undefined8 *)(param_1 + 0x60));
    if (cVar1 != '\0') {
      *(longlong *)(param_1 + 0x28) = param_2;
    }
  }
LAB_00661c5e:
  if (*(longlong *)(param_1 + 0x28) == 0) {
    lVar3 = FUN_00660e20(param_2);
    if (lVar3 != 0) {
      uVar4 = FUN_00660e20(param_2);
      FUN_00661ba0(param_1,uVar4);
    }
  }
  if (*(longlong *)(param_1 + 0x28) == 0) {
    lVar3 = FUN_00660e70(param_2);
    if (lVar3 != 0) {
      uVar4 = FUN_00660e70(param_2);
      FUN_00661ba0(param_1,uVar4);
    }
  }
  return;
}

