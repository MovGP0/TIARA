/* Ghidra address: 00cc1490 */
/* Ghidra symbol: FUN_00cc1490 */


longlong FUN_00cc1490(longlong param_1,char param_2,char param_3,undefined1 param_4,
                     undefined8 param_5)

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
  *(undefined1 *)(local_res8 + 0x69) = 4;
  if (param_3 != '\0') {
    *(byte *)(local_res8 + 0x69) = *(byte *)(local_res8 + 0x69) | 1;
  }
  uVar2 = FUN_00618bb0(&PTR_FUN_0086ece8,1);
  *(undefined8 *)(local_res8 + 0x50) = uVar2;
  *(undefined1 *)(local_res8 + 0x58) = param_4;
  FUN_00414ad0(local_res8 + 0x60,param_5);
  FUN_004d0ba0(local_res8,0,param_3);
  FUN_00cbf5b0(DAT_01ead3e8);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

