/* Ghidra address: 00ea4500 */
/* Ghidra symbol: FUN_00ea4500 */


int FUN_00ea4500(longlong param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (*(int *)(param_1 + 0x504) < 1) {
    FUN_00ea3290();
  }
  if (param_2 < 0) {
    bVar1 = true;
  }
  else {
    if (*(int *)(param_1 + 0x504) < 1) {
      uVar3 = FUN_0044d710(&PTR_FUN_00ea2d28,1,PTR_PTR_02001290);
      FUN_004134c0(uVar3);
    }
    bVar1 = *(int *)(param_1 + 0x504) + -1 < param_2;
  }
  if (bVar1) {
    FUN_00ea32c0(param_2);
  }
  iVar2 = FUN_00ea3300(param_1,*(undefined4 *)(param_1 + 0x50 + (longlong)(param_2 * 2) * 4));
  return iVar2 + 1;
}

