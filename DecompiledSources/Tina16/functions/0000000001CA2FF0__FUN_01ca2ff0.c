/* Ghidra address: 01ca2ff0 */
/* Ghidra symbol: FUN_01ca2ff0 */


void FUN_01ca2ff0(longlong param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  if (*(char *)(param_1 + 0x1829) != '\0') {
    uVar1 = FUN_00b89270();
    FUN_0041ddd0(&local_28,&PTR_PTR_01c66080);
    FUN_00b8e650(uVar1,local_20,L"Sched_c.Msg_DesignToolChangeTab",local_28);
    FUN_01542950(local_20[0]);
    *param_3 = 0;
  }
  FUN_00414560(&local_28,2);
  return;
}

