/* Ghidra address: 0156f530 */
/* Ghidra symbol: FUN_0156f530 */


longlong FUN_0156f530(longlong param_1,char param_2)

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
  FUN_00410e60(local_res8,0);
  uVar2 = FUN_01571dc0(&PTR_FUN_0156e288,1);
  *(undefined8 *)(local_res8 + 0x28) = uVar2;
  *(undefined8 *)(local_res8 + 0x40) = 0;
  FUN_00414480(local_res8 + 0x18);
  *(undefined1 *)(local_res8 + 0xfc) = 1;
  *(undefined4 *)(local_res8 + 0xc) = 0;
  *(undefined4 *)(local_res8 + 0xf4) = 0xffffffff;
  *(undefined4 *)(local_res8 + 0xf8) = 0;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x58) = uVar2;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x60) = uVar2;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

