/* Ghidra address: 00ea46f0 */
/* Ghidra symbol: FUN_00ea46f0 */


undefined8 FUN_00ea46f0(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_1 + 0x504) < 1) {
    FUN_00ea3290();
  }
  if (*(int *)(param_1 + 0x504) < 1) {
    uVar2 = FUN_0044d710(&PTR_FUN_00ea2d28,1,PTR_PTR_02001290);
    FUN_004134c0(uVar2);
  }
  if (*(int *)(param_1 + 0x504) + -1 < param_3) {
    FUN_00414480(param_2);
  }
  else if (*(char *)(param_1 + 0x528) == '\0') {
    iVar1 = *(int *)(param_1 + 0x50 + (longlong)(param_3 * 2) * 4);
    FUN_00416dc0(param_2,*(undefined8 *)(param_1 + 0x20),iVar1 + 1,
                 *(int *)(param_1 + 0x50 + (longlong)(param_3 * 2 + 1) * 4) - iVar1);
  }
  else {
    FUN_00414ad0(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x530) + (longlong)param_3 * 8));
  }
  return param_2;
}

