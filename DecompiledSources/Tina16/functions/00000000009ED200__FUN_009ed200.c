/* Ghidra address: 009ed200 */
/* Ghidra symbol: FUN_009ed200 */


void FUN_009ed200(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_2 + 0x9f) != '\0') {
    uVar1 = FUN_005ffa40(*(undefined8 *)(param_2 + 0xd8));
    thunk_FUN_0418f5de(uVar1,*(undefined8 *)(param_2 + 0x90),0xffffffff);
  }
  return;
}

