/* Ghidra address: 016d4c20 */
/* Ghidra symbol: FUN_016d4c20 */


undefined8 FUN_016d4c20(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  
  *(undefined1 *)(param_1 + 0xaf) = 1;
  if (*(char *)((longlong)param_1 + 0x4a4) != '\0') {
    thunk_FUN_041ae70b(param_1[0xb4]);
  }
  cVar1 = FUN_016d4b30(param_1);
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0x280))(param_1);
    uVar2 = 0;
  }
  else {
    if (param_1[0x97] != 0) {
      (*(code *)param_1[0x97])(param_1[0x98],param_1);
    }
    iVar3 = (int)param_1[0x94] + -1;
    if (0 < iVar3) {
      do {
        FUN_016d4b30(param_1);
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    uVar2 = 1;
  }
  return uVar2;
}

