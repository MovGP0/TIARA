/* Ghidra address: 00f20750 */
/* Ghidra symbol: FUN_00f20750 */


void FUN_00f20750(longlong param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  longlong *plVar1;
  int local_2c;
  
  FUN_01d30f00(*param_2,&local_2c,4);
  if (-1 < local_2c + -1) {
    do {
      plVar1 = (longlong *)FUN_00f1fd70(&PTR_FUN_00f1e9c8,1);
      FUN_004ae7e0(*(undefined8 *)(param_1 + 8),plVar1);
      (**(code **)(*plVar1 + 8))(plVar1,param_2,param_3,param_4,param_5);
      local_2c = local_2c + -1;
    } while (local_2c != 0);
  }
  return;
}

