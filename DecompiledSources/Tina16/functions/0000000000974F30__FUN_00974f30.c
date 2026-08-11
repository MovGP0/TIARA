/* Ghidra address: 00974f30 */
/* Ghidra symbol: FUN_00974f30 */


longlong FUN_00974f30(longlong param_1,char param_2,undefined8 param_3)

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
  *(undefined8 *)(local_res8 + 0x80) = 0;
  *(undefined1 *)(local_res8 + 0x78) = 1;
  *(undefined1 *)(local_res8 + 0x79) = 1;
  *(undefined1 *)(local_res8 + 0x7a) = 1;
  *(undefined1 *)(local_res8 + 0x7b) = 1;
  *(undefined1 *)(local_res8 + 0x7c) = 1;
  *(undefined1 *)(local_res8 + 0x7d) = 1;
  uVar2 = FUN_009a89b0(&PTR_FUN_00944970,1,0);
  *(undefined8 *)(local_res8 + 0x88) = uVar2;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

