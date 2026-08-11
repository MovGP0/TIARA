/* Ghidra address: 01754bf0 */
/* Ghidra symbol: FUN_01754bf0 */


longlong FUN_01754bf0(longlong param_1,char param_2,undefined8 param_3)

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
  FUN_0173ce20(local_res8,0,param_3);
  *(undefined8 *)(local_res8 + 0x58) = 0;
  uVar2 = FUN_00608c80(&PTR_FUN_005f92e8,1);
  *(undefined8 *)(local_res8 + 0x40) = uVar2;
  uVar2 = FUN_00c32af0(&PTR_FUN_00c17678,1);
  *(undefined8 *)(local_res8 + 0x48) = uVar2;
  uVar2 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
  *(undefined8 *)(local_res8 + 0x50) = uVar2;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

