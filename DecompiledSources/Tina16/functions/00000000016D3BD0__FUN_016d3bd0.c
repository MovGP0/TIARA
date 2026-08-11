/* Ghidra address: 016d3bd0 */
/* Ghidra symbol: FUN_016d3bd0 */


longlong FUN_016d3bd0(longlong param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  longlong local_res8;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  int local_1c;
  
  local_30 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_00660290(local_res8,0,param_3);
  FUN_0064cc50(local_res8,0x1c);
  FUN_0064cbf0(local_res8,0x1c);
  *(undefined4 *)(local_res8 + 0x4a0) = 4;
  *(undefined4 *)(local_res8 + 0x49c) = 0x2000;
  *(undefined1 *)(local_res8 + 0x578) = 0;
  *(undefined1 *)(local_res8 + 0x4a4) = 0;
  *(undefined4 *)(local_res8 + 0x4d8) = 0xffffffff;
  FUN_00414480(local_res8 + 0x570);
  *(undefined1 *)(local_res8 + 0x4a5) = 0;
  *(undefined2 *)(local_res8 + 0x4a6) = 1;
  *(undefined2 *)(local_res8 + 0x4b4) = 0x10;
  *(undefined2 *)(local_res8 + 0x4a8) = 1;
  *(undefined4 *)(local_res8 + 0x4aa) = 0x5622;
  FUN_016d3db0(local_res8);
  local_1c = 0;
  do {
    *(undefined8 *)(local_res8 + 0x548 + (longlong)local_1c * 8) = 0;
    local_1c = local_1c + 1;
  } while (local_1c != 4);
  FUN_016d4090(local_res8);
  FUN_016d3ea0(local_res8);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

