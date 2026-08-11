/* Ghidra address: 015c3450 */
/* Ghidra symbol: FUN_015c3450 */


void FUN_015c3450(longlong param_1,int param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  int local_c;
  
  local_30 = 0;
  local_28 = 0;
  local_20[0] = 0;
  FUN_015bf270(local_20,*(undefined8 *)
                         (*(longlong *)(param_1 + 8) + 0x2e + (longlong)param_2 * 0x90));
  local_c = (**(code **)(**(longlong **)(param_1 + 0x10) + 0xb0))
                      (*(longlong **)(param_1 + 0x10),local_20[0]);
  if (local_c < 0) {
    FUN_015bf270(&local_30,param_3);
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x78))(*(longlong **)(param_1 + 0x10),local_30);
  }
  else if (local_c == param_2) {
    FUN_015bf270(&local_28,param_3);
    FUN_015c0210(*(undefined8 *)(param_1 + 0x10),local_c,local_28);
  }
  else {
    uVar1 = FUN_015b59b0(&PTR_FUN_015b5818,1,0x3b,0);
    FUN_004134c0(uVar1);
  }
  FUN_00414ad0(*(longlong *)(param_1 + 8) + 0x2e + (longlong)param_2 * 0x90,param_3);
  FUN_00414560(&local_30,3);
  return;
}

