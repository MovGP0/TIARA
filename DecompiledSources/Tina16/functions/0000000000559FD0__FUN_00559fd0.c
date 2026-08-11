/* Ghidra address: 00559fd0 */
/* Ghidra symbol: FUN_00559fd0 */


longlong FUN_00559fd0(longlong param_1,char param_2)

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
  *(undefined8 *)(local_res8 + 0x18) = 0;
  *(undefined8 *)(local_res8 + 0x20) = 0;
  *(undefined8 *)(local_res8 + 8) = 0xffffffffffffffff;
  uVar2 = FUN_00410e60(&DAT_00401a88,1);
  *(undefined8 *)(local_res8 + 0x30) = uVar2;
  uVar2 = FUN_0056b270(&PTR_FUN_0055bd30,1,2,0);
  *(undefined8 *)(local_res8 + 0x38) = uVar2;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

