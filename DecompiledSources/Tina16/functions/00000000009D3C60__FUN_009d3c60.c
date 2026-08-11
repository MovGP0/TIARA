/* Ghidra address: 009d3c60 */
/* Ghidra symbol: FUN_009d3c60 */


longlong FUN_009d3c60(longlong param_1,char param_2)

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
  FUN_00410e60(local_res8,0);
  *(undefined8 *)(local_res8 + 0x20) = 0;
  *(undefined8 *)(local_res8 + 0x28) = 0;
  *(undefined8 *)(local_res8 + 0x30) = 0;
  *(undefined8 *)(local_res8 + 0x38) = 0;
  *(undefined8 *)(local_res8 + 0x40) = 0;
  *(undefined8 *)(local_res8 + 0x48) = 0;
  lVar2 = FUN_00948ef0(&PTR_FUN_00905628,1,0);
  *(longlong *)(local_res8 + 0x18) = lVar2;
  *(longlong *)(lVar2 + 0xb0) = local_res8;
  *(code **)(lVar2 + 0xa8) = FUN_009d4880;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

