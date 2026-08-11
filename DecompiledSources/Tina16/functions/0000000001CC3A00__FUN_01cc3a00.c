/* Ghidra address: 01cc3a00 */
/* Ghidra symbol: FUN_01cc3a00 */


longlong FUN_01cc3a00(longlong param_1,char param_2,longlong param_3)

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
  uVar2 = FUN_01cc1fc0(&PTR_FUN_01cb4ce0,1,*(undefined8 *)(param_3 + 8));
  *(undefined8 *)(local_res8 + 8) = uVar2;
  if (*(longlong *)(param_3 + 0x10) != 0) {
    uVar2 = FUN_01cbff30(&PTR_FUN_01cb2978,1,*(longlong *)(param_3 + 0x10));
    *(undefined8 *)(local_res8 + 0x10) = uVar2;
  }
  *(undefined2 *)(local_res8 + 0x18) = *(undefined2 *)(param_3 + 0x18);
  *(undefined2 *)(local_res8 + 0x1a) = *(undefined2 *)(param_3 + 0x1a);
  *(undefined8 *)(local_res8 + 0x20) = *(undefined8 *)(param_3 + 0x20);
  *(undefined8 *)(local_res8 + 0x28) = *(undefined8 *)(param_3 + 0x28);
  *(undefined8 *)(local_res8 + 0x30) = *(undefined8 *)(param_3 + 0x30);
  *(undefined4 *)(local_res8 + 0x4c) = *(undefined4 *)(param_3 + 0x4c);
  *(undefined8 *)(local_res8 + 0x38) = *(undefined8 *)(param_3 + 0x38);
  *(undefined8 *)(local_res8 + 0x60) = *(undefined8 *)(param_3 + 0x60);
  *(undefined1 *)(local_res8 + 0x54) = *(undefined1 *)(param_3 + 0x54);
  *(undefined1 *)(local_res8 + 0x56) = *(undefined1 *)(param_3 + 0x56);
  *(undefined8 *)(local_res8 + 0x40) = *(undefined8 *)(param_3 + 0x40);
  *(undefined1 *)(local_res8 + 0x57) = *(undefined1 *)(param_3 + 0x57);
  *(undefined1 *)(local_res8 + 0x58) = *(undefined1 *)(param_3 + 0x58);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

