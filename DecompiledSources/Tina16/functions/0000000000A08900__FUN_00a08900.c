/* Ghidra address: 00a08900 */
/* Ghidra symbol: FUN_00a08900 */


void FUN_00a08900(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if ((*(char *)(param_1 + 0x9b) != '\0') &&
     (iVar1 = thunk_FUN_039b2f93(),
     *(uint *)(param_1 + 200) <= (uint)(iVar1 - *(int *)(param_1 + 0xc4)))) {
    *(int *)(param_1 + 0xc4) = iVar1;
    if (*(int *)(param_1 + 0x8c) == *(int *)(param_1 + 0x90)) {
      if ((0 < *(int *)(param_1 + 0x94)) && (*(int *)(param_1 + 0x94) <= *(int *)(param_1 + 0xc0)))
      {
        FUN_00a089f0(param_1,0);
        return;
      }
      *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xc0) + 1;
    }
    FUN_00a08d90(param_1,*(undefined4 *)(param_1 + 0x8c));
    *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + 1;
    if ((*(int *)(param_1 + 0x90) < *(int *)(param_1 + 0x8c)) || (*(int *)(param_1 + 0x8c) < 1)) {
      *(undefined4 *)(param_1 + 0x8c) = 1;
    }
    uVar2 = FUN_0065b870(param_2);
    thunk_FUN_03a2fc9d(uVar2,param_1 + 0x9c,0xffffffff);
    lVar3 = FUN_00a08e00(*(undefined8 *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0x8c));
    iVar1 = *(int *)(lVar3 + 0x18);
    if (iVar1 < 2) {
      iVar1 = 1;
    }
    *(int *)(param_1 + 200) = iVar1;
  }
  return;
}

