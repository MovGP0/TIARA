/* Ghidra address: 00f10f20 */
/* Ghidra symbol: FUN_00f10f20 */


longlong FUN_00f10f20(longlong param_1,char param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
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
  FUN_01d2b190(local_res8,0);
  *(undefined8 *)(local_res8 + 0x68) = 0;
  *(undefined1 *)(local_res8 + 0x70) = 0;
  *(undefined8 *)(local_res8 + 0x78) = 0;
  *(undefined8 *)(local_res8 + 0x80) = 0;
  uVar2 = FUN_00f06b50(L"Line width",2);
  FUN_005fd6d0(*(undefined8 *)(local_res8 + 0x60),uVar2);
  uVar2 = FUN_00f06b50(L"Line color",0xff0000);
  FUN_005fd4e0(*(undefined8 *)(local_res8 + 0x60),uVar2);
  uVar2 = FUN_00f06b50(L"Line style",0);
  FUN_005fd670(*(undefined8 *)(local_res8 + 0x60),uVar2);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

