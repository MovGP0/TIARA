/* Ghidra address: 010ed740 */
/* Ghidra symbol: FUN_010ed740 */


longlong FUN_010ed740(longlong param_1,char param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
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
  uVar3 = FUN_005fd250(&PTR_FUN_005f3290,1);
  *(undefined8 *)(local_res8 + 0x88) = uVar3;
  uVar2 = FUN_00f06b50(L"Circle width",2);
  FUN_005fd6d0(uVar3,uVar2);
  uVar2 = FUN_00f06b50(L"Circle color",0xff0000);
  FUN_005fd4e0(*(undefined8 *)(local_res8 + 0x88),uVar2);
  uVar2 = FUN_00f06b50(L"Circle style",0);
  FUN_005fd670(*(undefined8 *)(local_res8 + 0x88),uVar2);
  uVar3 = FUN_005fd7d0(&PTR_FUN_005f35d8,1);
  *(undefined8 *)(local_res8 + 0x90) = uVar3;
  FUN_005fdcb0(uVar3,1);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

