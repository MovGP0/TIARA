/* Ghidra address: 00460970 */
/* Ghidra symbol: FUN_00460970 */


int FUN_00460970(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int local_20;
  int local_1c;
  
  uVar1 = thunk_FUN_041a1c33(param_2,param_3,&local_1c);
  FUN_004607e0(uVar1);
  uVar1 = thunk_FUN_041aeaef(param_2,param_3,&local_20);
  FUN_004607e0(uVar1);
  return (local_20 - local_1c) + 1;
}

