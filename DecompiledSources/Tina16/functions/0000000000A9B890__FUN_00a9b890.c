/* Ghidra address: 00a9b890 */
/* Ghidra symbol: FUN_00a9b890 */


void FUN_00a9b890(longlong param_1,longlong param_2,undefined4 param_3)

{
  char cVar1;
  longlong local_res10 [3];
  
  if (param_2 != 0) {
    local_res10[0] = param_2;
    cVar1 = FUN_004113d0(param_2,&PTR_FUN_00a84e18);
    if (cVar1 == '\0') {
      FUN_004ae7e0(param_1,local_res10[0]);
    }
    else {
      FUN_00a9b900(param_1,local_res10,param_3);
    }
    FUN_00ac37a0(local_res10[0],*(undefined8 *)(param_1 + 0x20));
  }
  return;
}

