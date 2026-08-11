/* Ghidra address: 00bb0d10 */
/* Ghidra symbol: FUN_00bb0d10 */


longlong *
FUN_00bb0d10(longlong *param_1,char param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
            )

{
  undefined1 *puVar1;
  longlong *local_res8;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_res8 = param_1;
  puVar1 = auStack_48;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  FUN_00bae230(local_res8,0,param_3);
  *(undefined1 *)(local_res8 + 4) = 7;
  FUN_00414ad0(local_res8 + 0xb,param_4);
  (**(code **)(*local_res8 + 0x68))(local_res8,param_5);
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

