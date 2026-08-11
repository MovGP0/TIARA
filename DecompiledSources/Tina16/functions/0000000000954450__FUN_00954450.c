/* Ghidra address: 00954450 */
/* Ghidra symbol: FUN_00954450 */


longlong FUN_00954450(longlong param_1,char param_2,longlong param_3)

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
  FUN_0094c4e0(local_res8,0,0);
  *(longlong *)(local_res8 + 0xa0) = param_3;
  if (param_3 != 0) {
    FUN_00949040(param_3,local_res8);
  }
  FUN_00414520(local_res8 + 0x58);
  FUN_00414520(local_res8 + 0xb8);
  FUN_00414520(local_res8 + 0xc0);
  *(undefined1 *)(local_res8 + 200) = 2;
  FUN_00414520(local_res8 + 0xd0);
  *(undefined1 *)(local_res8 + 0xb0) = 0;
  *(undefined8 *)(local_res8 + 0x90) = 0;
  uVar2 = FUN_009a0b10(&PTR_FUN_00937750,1);
  *(undefined8 *)(local_res8 + 0x80) = uVar2;
  uVar2 = FUN_009a1e00(&PTR_FUN_009393d0,1);
  *(undefined8 *)(local_res8 + 0x88) = uVar2;
  *(undefined2 *)(local_res8 + 0x78) = 0x6c2;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

