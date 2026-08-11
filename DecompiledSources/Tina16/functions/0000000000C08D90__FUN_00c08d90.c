/* Ghidra address: 00c08d90 */
/* Ghidra symbol: FUN_00c08d90 */


void FUN_00c08d90(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  
  if ((*(ushort *)(param_1 + 0x34) & 1) == 0) {
    lVar1 = *(longlong *)(param_1 + 0x610);
    if ((*(char *)(lVar1 + 0x1c) != '\0') && (*(char *)(lVar1 + 0x4c) != '\0')) {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x4e8) + 0x28))
                        (*(longlong **)(param_1 + 0x4e8));
      FUN_00bbaa40(lVar1,uVar2);
    }
    lVar1 = *(longlong *)(param_1 + 0x610);
    if (*(char *)(lVar1 + 0x4b) == '\0') {
      iVar3 = FUN_00bbac10(lVar1,*(undefined4 *)(param_1 + 0x4d4));
    }
    else {
      (**(code **)(**(longlong **)(param_1 + 0x620) + 0x50))
                (*(longlong **)(param_1 + 0x620),*(undefined8 *)(lVar1 + 8));
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x620) + 0x20))
                        (*(longlong **)(param_1 + 0x620));
      iVar3 = FUN_00bbac10(*(undefined8 *)(param_1 + 0x610),uVar2);
      uVar4 = FUN_00bf2c10(param_1);
      (**(code **)(**(longlong **)(param_1 + 0x620) + 0x50))(*(longlong **)(param_1 + 0x620),uVar4);
    }
    if (iVar3 == *(int *)(param_1 + 0x910)) {
      FUN_00bf3760(param_1);
    }
    else {
      FUN_00bfb100(param_1,iVar3);
    }
  }
  return;
}

