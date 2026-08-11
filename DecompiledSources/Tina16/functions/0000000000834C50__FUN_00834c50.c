/* Ghidra address: 00834c50 */
/* Ghidra symbol: FUN_00834c50 */


longlong FUN_00834c50(longlong param_1,char param_2,undefined8 param_3)

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
  FUN_00680200(local_res8,0,param_3);
  *(undefined1 *)(local_res8 + 0x4e9) = 0;
  *(undefined2 *)(local_res8 + 0x4e0) = *(undefined2 *)PTR_DAT_020059e8;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

