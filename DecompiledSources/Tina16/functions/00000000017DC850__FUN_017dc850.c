/* Ghidra address: 017dc850 */
/* Ghidra symbol: FUN_017dc850 */


void FUN_017dc850(longlong param_1,undefined1 param_2,undefined8 param_3,undefined4 param_4,
                 int param_5)

{
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  if (param_5 == *(int *)(param_1 + 8)) {
    FUN_00c43f10(*(undefined8 *)(param_1 + 0x48),local_res18);
  }
  else {
    FUN_00c43ea0(*(undefined8 *)(param_1 + 0x50),local_res18);
  }
  FUN_017d9580(param_1,param_4,param_5,local_res18[0],1,param_2);
  return;
}

