/* Ghidra address: 00725300 */
/* Ghidra symbol: FUN_00725300 */


longlong FUN_00725300(longlong param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
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
  FUN_00722380(local_res8,0,param_3);
  uVar2 = FUN_005fc570(&PTR_FUN_005f2d40,1);
  *(undefined8 *)(local_res8 + 0xd0) = uVar2;
  *(undefined2 *)(local_res8 + 0xd9) = 4;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

