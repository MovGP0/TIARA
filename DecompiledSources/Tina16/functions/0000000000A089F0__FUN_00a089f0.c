/* Ghidra address: 00a089f0 */
/* Ghidra symbol: FUN_00a089f0 */


void FUN_00a089f0(longlong param_1,char param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if (((param_2 != *(char *)(param_1 + 0x9b)) &&
      (*(char *)(param_1 + 0x9b) = param_2, param_2 != '\0')) && (1 < *(int *)(param_1 + 0x90))) {
    lVar3 = FUN_00a08e00(*(undefined8 *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0x8c));
    iVar1 = *(int *)(lVar3 + 0x18);
    if (iVar1 < 2) {
      iVar1 = 1;
    }
    *(int *)(param_1 + 200) = iVar1;
    uVar2 = thunk_FUN_039b2f93();
    *(undefined4 *)(param_1 + 0xc4) = uVar2;
  }
  return;
}

