/* Ghidra address: 010ff880 */
/* Ghidra symbol: FUN_010ff880 */


longlong FUN_010ff880(longlong param_1,char param_2)

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
  FUN_01d2ae00(local_res8,0);
  *(undefined8 *)(local_res8 + 0x88) = 0;
  *(undefined8 *)(local_res8 + 0x90) = 0;
  *(undefined8 *)(local_res8 + 0x98) = 0;
  *(undefined2 *)(local_res8 + 0x70) = 0xc;
  uVar2 = FUN_005fc570(&PTR_FUN_005f2d40,1);
  *(undefined8 *)(local_res8 + 0xa0) = uVar2;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

