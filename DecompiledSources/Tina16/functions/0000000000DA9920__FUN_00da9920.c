/* Ghidra address: 00da9920 */
/* Ghidra symbol: FUN_00da9920 */


longlong FUN_00da9920(longlong param_1,char param_2,undefined4 param_3)

{
  undefined1 *puVar1;
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
  *(undefined4 *)(local_res8 + 0x28) = param_3;
  *(undefined4 *)(local_res8 + 0x24) = 0;
  *(undefined4 *)(local_res8 + 0x20) = 0xffffffff;
  FUN_00419260(local_res8 + 0x30,&DAT_00da95d8,1,(longlong)(*(int *)(local_res8 + 0x28) + 1));
  FUN_00419260(local_res8 + 8,&DAT_00da95d8,1,(longlong)(*(int *)(local_res8 + 0x28) + 1));
  FUN_00419260(local_res8 + 0x10,&DAT_00da95d8,1,(longlong)(*(int *)(local_res8 + 0x28) + 1));
  FUN_00419260(local_res8 + 0x18,&DAT_00da95d8,1,(longlong)(*(int *)(local_res8 + 0x28) + 1));
  FUN_0040d200(*(longlong *)(local_res8 + 0x18) + 8,(longlong)(*(int *)(local_res8 + 0x28) * 8),0);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

