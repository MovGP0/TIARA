/* Ghidra address: 00714bb0 */
/* Ghidra symbol: FUN_00714bb0 */


undefined4 FUN_00714bb0(undefined8 param_1,undefined8 *param_2)

{
  longlong *local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = (longlong *)0x0;
  *param_2 = 0;
  FUN_00714b70();
  FUN_0041b890(&local_28,DAT_020124c8,&DAT_00714c68);
  (**(code **)(*local_28 + 0x18))(local_28,local_20,param_1);
  FUN_0041b840(param_2,local_20[0]);
  FUN_0041b800(&local_28);
  FUN_0041b800(local_20);
  return 0;
}

