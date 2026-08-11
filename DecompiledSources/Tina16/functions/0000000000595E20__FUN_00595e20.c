/* Ghidra address: 00595e20 */
/* Ghidra symbol: FUN_00595e20 */


void FUN_00595e20(longlong *param_1,int param_2,int param_3)

{
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 local_20;
  
  local_30 = auStack_58;
  local_20 = 0;
  FUN_0041b840(&local_20,*(undefined8 *)(*param_1 + (longlong)param_2 * 8));
  FUN_0041b840(*param_1 + (longlong)param_2 * 8,*(undefined8 *)(*param_1 + (longlong)param_3 * 8));
  FUN_0041b840(*param_1 + (longlong)param_3 * 8,local_20);
  FUN_0041b800(&local_20);
  return;
}

