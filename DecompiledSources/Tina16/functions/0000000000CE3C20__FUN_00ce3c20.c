/* Ghidra address: 00ce3c20 */
/* Ghidra symbol: FUN_00ce3c20 */


longlong FUN_00ce3c20(longlong param_1,char param_2,undefined8 param_3)

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
  FUN_00ce0bd0(local_res8,0,param_3);
  FUN_00414480(local_res8 + 0x70);
  FUN_00414480(local_res8 + 0x20);
  uVar2 = FUN_00cd8b80(&PTR_FUN_00cd7e78,1,3);
  *(undefined8 *)(local_res8 + 0xf0) = uVar2;
  uVar2 = FUN_00cd8b80(&PTR_FUN_00cd7e78,1,3);
  *(undefined8 *)(local_res8 + 0xe8) = uVar2;
  FUN_00414480(local_res8 + 0xc0);
  FUN_00414480(local_res8 + 200);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

