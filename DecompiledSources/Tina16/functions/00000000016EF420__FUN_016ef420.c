/* Ghidra address: 016ef420 */
/* Ghidra symbol: FUN_016ef420 */


void FUN_016ef420(longlong param_1,longlong param_2)

{
  if (*(char *)(param_1 + 0x110) != '\0') {
    (**(code **)(param_1 + 0x98))(param_1,param_2);
    if (*(char *)(*(longlong *)(param_2 + 0x110) + 10) != '\0') {
      FUN_0165ddf0(*(longlong *)(param_2 + 0x110),param_1 + 0x98,1,param_1,0);
    }
  }
  return;
}

