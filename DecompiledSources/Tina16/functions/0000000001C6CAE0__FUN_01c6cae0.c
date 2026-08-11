/* Ghidra address: 01c6cae0 */
/* Ghidra symbol: FUN_01c6cae0 */


longlong FUN_01c6cae0(longlong param_1,char param_2,undefined8 param_3)

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
  *(longlong *)(local_res8 + 0x2800) = local_res8;
  *(code **)(local_res8 + 0x27f8) = FUN_01c8a450;
  *(longlong *)(local_res8 + 0x2810) = local_res8;
  *(code **)(local_res8 + 0x2808) = FUN_01c8a4c0;
  FUN_01aebb40(local_res8,0,param_3);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

