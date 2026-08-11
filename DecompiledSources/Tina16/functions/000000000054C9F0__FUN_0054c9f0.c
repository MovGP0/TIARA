/* Ghidra address: 0054c9f0 */
/* Ghidra symbol: FUN_0054c9f0 */


undefined4 FUN_0054c9f0(undefined8 param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = FUN_00547190(param_1);
  uVar2 = *(undefined4 *)(lVar1 + 5);
  lVar1 = FUN_00547190(param_1);
  if (*(int *)(lVar1 + 1) < 0) {
    uVar2 = 1;
  }
  return uVar2;
}

