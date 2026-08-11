/* Ghidra address: 015748d0 */
/* Ghidra symbol: FUN_015748d0 */


longlong FUN_015748d0(longlong param_1,char param_2,undefined4 param_3,undefined8 param_4,
                     undefined4 param_5)

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
  FUN_0044d490(local_res8,0,param_4);
  *(undefined8 *)(local_res8 + 0x38) = 0;
  *(undefined4 *)(local_res8 + 0x34) = 0;
  *(undefined4 *)(local_res8 + 0x30) = param_5;
  *(undefined4 *)(local_res8 + 0x58) = param_3;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

