/* Ghidra address: 00bc1350 */
/* Ghidra symbol: FUN_00bc1350 */


longlong FUN_00bc1350(longlong param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
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
  FUN_004d22d0(local_res8,0,param_3);
  lVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(longlong *)(local_res8 + 0x78) = lVar2;
  *(undefined1 *)(lVar2 + 0x49) = 2;
  FUN_004b67b0(lVar2,1);
  uVar3 = FUN_00bbc030(&PTR_FUN_00bb9918,1,local_res8);
  *(undefined8 *)(local_res8 + 0x80) = uVar3;
  FUN_00414480(local_res8 + 0xf8);
  *(undefined1 *)(local_res8 + 0x8c) = 1;
  uVar3 = FUN_00410e60(&PTR_FUN_00bbca78,1);
  *(undefined8 *)(local_res8 + 0xd8) = uVar3;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

