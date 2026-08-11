/* Ghidra address: 0114c680 */
/* Ghidra symbol: FUN_0114c680 */


longlong FUN_0114c680(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5)

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
  *(undefined8 *)(local_res8 + 0x7b0) = param_4;
  *(undefined8 *)(local_res8 + 0x7b8) = param_5;
  if ((*(longlong *)(local_res8 + 0x7b0) == 0) && (*(longlong *)(local_res8 + 0x7b8) == 0)) {
    *(undefined1 *)(local_res8 + 0x100811) = 1;
  }
  *(longlong *)(local_res8 + 0x7f8) = local_res8 + 0x800;
  FUN_007fc180(local_res8,0,param_3);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

