/* Ghidra address: 016aa6a0 */
/* Ghidra symbol: FUN_016aa6a0 */


undefined8 FUN_016aa6a0(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_0040c770(*param_1);
  if (lVar1 == 0) {
    uVar2 = param_1[2];
  }
  else {
    uVar2 = param_1[1];
  }
  return uVar2;
}

