/* Ghidra address: 0147d7c0 */
/* Ghidra symbol: FUN_0147d7c0 */


undefined1 FUN_0147d7c0(undefined8 param_1,undefined4 *param_2)

{
  char cVar1;
  undefined8 local_res8 [4];
  undefined1 local_9;
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  *param_2 = 0;
  local_9 = 0;
  cVar1 = FUN_0147d3c0(local_res8[0],L"flipflop");
  if (cVar1 == '\0') {
    cVar1 = FUN_0147d3c0(local_res8[0],L"flip_flop");
    if (cVar1 == '\0') {
      cVar1 = FUN_0147d3c0(local_res8[0],&DAT_0147d904);
      if (cVar1 == '\0') goto code_r0x0147d880;
    }
  }
  cVar1 = FUN_0147d3c0(local_res8[0],&PTR_u_lwhite_0147d918);
  if (cVar1 == '\0') {
    cVar1 = FUN_0147d3c0(local_res8[0],&DAT_0147d92c);
    if (cVar1 != '\0') goto LAB_0147d84d;
  }
  else {
LAB_0147d84d:
    *param_2 = 0x3f7;
    local_9 = 1;
  }
  cVar1 = FUN_0147d3c0(local_res8[0],&LAB_0147d940);
  if (cVar1 != '\0') {
    *param_2 = 0x3f6;
    local_9 = 1;
  }
code_r0x0147d880:
  FUN_00414480(local_res8);
  return local_9;
}

