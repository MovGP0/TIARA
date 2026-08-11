/* Ghidra address: 01bfb4d0 */
/* Ghidra symbol: FUN_01bfb4d0 */


longlong FUN_01bfb4d0(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  longlong local_res8;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_res8 = param_1;
  puVar1 = auStack_48;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  FUN_01bfa2c0(local_res8,0,param_3,param_4);
  *(undefined4 *)(local_res8 + 0x48) = 0;
  FUN_01bfb720(local_res8,1);
  FUN_01bfb760(local_res8,1);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

