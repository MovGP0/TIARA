/* Ghidra address: 00973570 */
/* Ghidra symbol: FUN_00973570 */


longlong FUN_00973570(longlong param_1,char param_2,undefined8 param_3)

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
  FUN_004d22d0(local_res8,0,param_3);
  *(undefined1 *)(local_res8 + 0x78) = 0;
  *(undefined1 *)(local_res8 + 0x79) = 0;
  uVar2 = FUN_00410e60(&PTR_FUN_008f5158,1);
  *(undefined8 *)(local_res8 + 0x88) = uVar2;
  *(undefined1 *)(local_res8 + 0x90) = 0;
  uVar2 = FUN_00410e60(&PTR_FUN_008f5158,1);
  *(undefined8 *)(local_res8 + 0x98) = uVar2;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

