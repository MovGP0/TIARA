/* Ghidra address: 0165d200 */
/* Ghidra symbol: FUN_0165d200 */


void FUN_0165d200(undefined8 *param_1)

{
  longlong local_20 [2];
  
  FUN_00409a70(param_1 + 2,local_20,8);
  if (*(int *)((longlong)param_1 + 0xc) < *(int *)(param_1 + 1)) {
    if (local_20[0] != 0) {
      thunk_FUN_04184b1a(local_20[0],0,0x8000);
    }
    *(int *)((longlong)param_1 + 0xc) = *(int *)(param_1 + 1) + 0x4000;
    local_20[0] = thunk_FUN_041b4712(0,(longlong)(*(int *)(param_1 + 1) + 0x4000),0x3000,0x40);
  }
  FUN_00409a70(*param_1,local_20[0],(longlong)*(int *)(param_1 + 1));
  FUN_00409a70(local_20,param_1 + 2,8);
  return;
}

