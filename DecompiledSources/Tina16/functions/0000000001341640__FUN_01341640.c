/* Ghidra address: 01341640 */
/* Ghidra symbol: FUN_01341640 */


longlong FUN_01341640(longlong param_1,char param_2,longlong param_3,char param_4)

{
  undefined1 *puVar1;
  undefined1 uVar2;
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
  *(undefined8 *)(local_res8 + 0x58) = *(undefined8 *)(param_3 + 0xb0);
  *(longlong *)(local_res8 + 0x68) = param_3;
  *(char *)(local_res8 + 0x27) = param_4;
  if (param_4 == '\0') {
    *(undefined8 *)(local_res8 + 0x28) = *(undefined8 *)(param_3 + 0x888);
    *(undefined8 *)(local_res8 + 0x30) = *(undefined8 *)(param_3 + 0x890);
  }
  uVar2 = FUN_01b07dd0(param_3);
  *(undefined1 *)(local_res8 + 0x60) = uVar2;
  *(undefined4 *)(local_res8 + 8) = 2000;
  *(undefined1 *)(local_res8 + 0x79) = 0;
  *(undefined1 *)(local_res8 + 0x78) = 1;
  uVar3 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x40) = uVar3;
  uVar3 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x48) = uVar3;
  uVar3 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(local_res8 + 0x50) = uVar3;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

