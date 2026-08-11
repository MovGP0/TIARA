/* Ghidra address: 00cfbb90 */
/* Ghidra symbol: FUN_00cfbb90 */


undefined8 FUN_00cfbb90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 *local_20;
  undefined8 local_10;
  
  local_20 = auStack_48;
  local_28 = 0;
  local_10 = FUN_008b1f70(&PTR_FUN_008b1e38,1);
  FUN_008b1280(local_10,&local_28,param_3,0);
  FUN_0043e1a0(param_2,local_28);
  FUN_00410f20(local_10);
  FUN_00414480(&local_28);
  return param_2;
}

