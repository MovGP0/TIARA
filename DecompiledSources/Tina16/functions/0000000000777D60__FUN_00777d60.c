/* Ghidra address: 00777d60 */
/* Ghidra symbol: FUN_00777d60 */


void FUN_00777d60(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined4 param_4)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined8 local_10;
  
  local_20 = auStack_48;
  local_10 = FUN_005fe0d0(&PTR_FUN_005f54e0,1);
  FUN_005ffb10(local_10,param_1);
  FUN_007780e0(local_10,param_2,param_3,param_4);
  FUN_005ffb10(local_10,0);
  FUN_00410f20(local_10);
  return;
}

