/* Ghidra address: 0095d3c0 */
/* Ghidra symbol: FUN_0095d3c0 */


longlong FUN_0095d3c0(longlong param_1,char param_2,longlong param_3,undefined8 param_4)

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
  if (param_3 == 0) {
    uVar2 = FUN_0044d490(&PTR_FUN_004361b8,1,L"Owner DTD subset model not specified.");
    FUN_004134c0(uVar2);
  }
  FUN_00410e60(local_res8,0);
  *(undefined1 *)(local_res8 + 0x10) = 0;
  *(longlong *)(local_res8 + 0x18) = param_3;
  FUN_00414b90(local_res8 + 8,param_4);
  uVar2 = FUN_0095f6b0(param_3);
  *(undefined8 *)(local_res8 + 0x20) = uVar2;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

