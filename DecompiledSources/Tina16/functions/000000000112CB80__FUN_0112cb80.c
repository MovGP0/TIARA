/* Ghidra address: 0112cb80 */
/* Ghidra symbol: FUN_0112cb80 */


longlong FUN_0112cb80(longlong param_1,char param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  longlong local_res8;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  undefined2 local_48;
  undefined2 local_46;
  undefined2 local_44;
  undefined2 local_42;
  undefined2 local_40;
  undefined2 local_3e;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_50 = auStack_78;
  local_res8 = param_1;
  puVar1 = auStack_78;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_50;
  }
  local_50 = puVar1;
  local_38 = *param_3;
  uStack_30 = param_3[1];
  FUN_0112c6f0(&local_48,&local_38);
  *(undefined2 *)(local_res8 + 8) = local_48;
  *(undefined2 *)(local_res8 + 10) = local_46;
  *(undefined2 *)(local_res8 + 0xc) = local_44;
  *(undefined2 *)(local_res8 + 0xe) = local_42;
  *(undefined2 *)(local_res8 + 0x10) = local_40;
  *(undefined2 *)(local_res8 + 0x12) = local_3e;
  *(undefined4 *)(local_res8 + 0x14) = local_3c;
  *(undefined2 *)(local_res8 + 0x18) = 0;
  *(undefined2 *)(local_res8 + 0x1a) = 0;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

