/* Ghidra address: 012beb90 */
/* Ghidra symbol: FUN_012beb90 */


void FUN_012beb90(longlong param_1,undefined1 param_2,longlong param_3)

{
  undefined4 uVar1;
  longlong local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  if (local_res18[0] != 0) {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x78))
                      (*(longlong **)(param_1 + 0x10),local_res18[0]);
    FUN_012beae0(param_1,uVar1,param_2);
  }
  FUN_00414480(local_res18);
  return;
}

