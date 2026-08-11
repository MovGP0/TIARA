/* Ghidra address: 00595fa0 */
/* Ghidra symbol: FUN_00595fa0 */


void FUN_00595fa0(longlong *param_1,int param_2,int param_3)

{
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 local_20;
  
  local_30 = auStack_58;
  local_20 = 0;
  FUN_00414c70(&local_20,*(undefined8 *)(*param_1 + (longlong)param_2 * 8));
  FUN_00414bf0(*param_1 + (longlong)param_2 * 8,*(undefined8 *)(*param_1 + (longlong)param_3 * 8));
  FUN_00414bf0(*param_1 + (longlong)param_3 * 8,local_20);
  FUN_004144d0(&local_20);
  return;
}

