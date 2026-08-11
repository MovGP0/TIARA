/* Ghidra address: 00b392f0 */
/* Ghidra symbol: FUN_00b392f0 */


longlong FUN_00b392f0(longlong param_1,char param_2,undefined8 param_3,undefined2 param_4,
                     undefined2 param_5)

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
  *(undefined8 *)(local_res8 + 8) = param_3;
  *(undefined2 *)(local_res8 + 0x10) = param_4;
  *(undefined2 *)(local_res8 + 0x12) = param_5;
  *(undefined1 *)(local_res8 + 0x14) = 0;
  FUN_00b39420(local_res8,0);
  FUN_00b39490(local_res8,0);
  FUN_00b39500(local_res8,0);
  *(undefined2 *)(local_res8 + 0x30) = DAT_02014868;
  *(undefined2 *)(local_res8 + 0x32) = DAT_0201486a;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

