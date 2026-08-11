/* Ghidra address: 006f37f0 */
/* Ghidra symbol: FUN_006f37f0 */


void FUN_006f37f0(longlong param_1)

{
  char cVar1;
  
  FUN_0065a330(param_1);
  cVar1 = FUN_0065be20(param_1);
  if (cVar1 != '\0') {
    FUN_006f3380(param_1,*(undefined4 *)(*(longlong *)(param_1 + 0xb8) + 0x28));
    cVar1 = FUN_006f37e0(param_1);
    if (cVar1 != '\0') {
      thunk_FUN_03a2fc9d(*(undefined8 *)(param_1 + 0x540),0,0xffffffff);
    }
  }
  return;
}

