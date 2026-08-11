/* Ghidra address: 0112a210 */
/* Ghidra symbol: FUN_0112a210 */


void FUN_0112a210(undefined8 param_1,undefined4 param_2)

{
  if ((char)param_2 == '\0') {
    thunk_FUN_0112a06e(param_1,param_2);
    FUN_0112a080(param_1,param_2);
    FUN_0112a0f0(param_1,param_2);
    FUN_0112a150(param_1,param_2);
    FUN_0112a1b0(param_1,param_2);
  }
  else {
    FUN_0112a1b0(param_1,param_2);
    FUN_0112a150(param_1,param_2);
    FUN_0112a0f0(param_1,param_2);
    FUN_0112a080(param_1,param_2);
    thunk_FUN_0112a06e(param_1,param_2);
  }
  return;
}

