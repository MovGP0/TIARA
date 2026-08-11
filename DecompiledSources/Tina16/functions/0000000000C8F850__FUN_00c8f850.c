/* Ghidra address: 00c8f850 */
/* Ghidra symbol: FUN_00c8f850 */


longlong FUN_00c8f850(longlong param_1,char param_2,longlong param_3)

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
  FUN_004b1710(local_res8,0,param_3);
  *(undefined1 *)(local_res8 + 0x61) = 1;
  *(undefined1 *)(local_res8 + 0x62) = 0;
  uVar2 = FUN_00618bb0(&PTR_FUN_0086ece8,1);
  *(undefined8 *)(local_res8 + 0x58) = uVar2;
  uVar2 = FUN_0089b820(&PTR_FUN_008988e0);
  *(undefined8 *)(local_res8 + 0x48) = uVar2;
  FUN_00c8fb90(local_res8,1);
  *(undefined2 *)(local_res8 + 0x18) = 0;
  *(undefined2 *)(local_res8 + 0x1a) = 0;
  *(undefined1 *)(local_res8 + 0x55) = 0;
  if (param_3 != 0) {
    *(undefined2 *)(local_res8 + 0x40) = *(undefined2 *)(param_3 + 0x30);
  }
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

