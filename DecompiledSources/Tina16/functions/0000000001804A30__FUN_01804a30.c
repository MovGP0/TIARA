/* Ghidra address: 01804a30 */
/* Ghidra symbol: FUN_01804a30 */


void FUN_01804a30(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  undefined1 *local_20;
  undefined8 local_10;
  
  local_20 = auStack_58;
  local_30 = 0;
  local_28 = 0;
  FUN_00416ba0(&local_28,param_2,L".tmp");
  local_10 = FUN_004b9860(&PTR_FUN_0047c498,1,local_28,0xff00);
  FUN_01804950(param_1,local_10);
  FUN_00410f20(local_10);
  FUN_018046a0(param_1);
  FUN_004412f0(param_2);
  FUN_00416ba0(&local_30,param_2,L".tmp");
  FUN_00441370(local_30,param_2);
  FUN_018049f0(param_1,param_2);
  FUN_00414560(&local_30,2);
  return;
}

