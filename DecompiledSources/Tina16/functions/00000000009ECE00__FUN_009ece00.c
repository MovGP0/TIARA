/* Ghidra address: 009ece00 */
/* Ghidra symbol: FUN_009ece00 */


void FUN_009ece00(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_2 + 0xaf) != '\0') {
    uVar1 = FUN_005ffa40(*(undefined8 *)(param_2 + 0xe8));
    thunk_FUN_0418f5de(uVar1,*(undefined8 *)(param_2 + 0xa0),0xffffffff);
  }
  return;
}

