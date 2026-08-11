/* Ghidra address: 0061cd00 */
/* Ghidra symbol: FUN_0061cd00 */


longlong FUN_0061cd00(longlong param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
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
  FUN_005b3690(local_res8,0,param_3);
  lVar2 = FUN_007d88e0(&PTR_FUN_007d3330,1);
  *(longlong *)(local_res8 + 200) = lVar2;
  *(longlong *)(lVar2 + 0x20) = local_res8;
  *(code **)(lVar2 + 0x18) = FUN_0061ce40;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

