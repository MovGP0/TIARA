/* Ghidra address: 015c3590 */
/* Ghidra symbol: FUN_015c3590 */


longlong FUN_015c3590(longlong param_1,char param_2,undefined8 param_3,char param_4,
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
  *(undefined1 *)(local_res8 + 0xa9) = 0;
  *(char *)(local_res8 + 0x10) = param_4;
  *(undefined8 *)(local_res8 + 0x18) = param_5;
  uVar2 = FUN_015c2230(&DAT_015ba1f0,1);
  *(undefined8 *)(local_res8 + 0x28) = uVar2;
  uVar2 = FUN_015c2230(&DAT_015ba1f0,1);
  *(undefined8 *)(local_res8 + 0x20) = uVar2;
  *(undefined8 *)(local_res8 + 8) = param_3;
  *(bool *)(local_res8 + 0x11) =
       *(longlong *)(local_res8 + 8) != *(longlong *)(*(longlong *)(local_res8 + 0x18) + 0x250);
  *(undefined1 *)(local_res8 + 0xa8) = 0;
  *(undefined8 *)(local_res8 + 0xa0) = 0;
  FUN_015c43e0(local_res8);
  if (param_4 != '\0') {
    FUN_015c1b40(*(undefined8 *)(*(longlong *)(local_res8 + 0x18) + 0x98),1);
    if (*(longlong *)(*(longlong *)(local_res8 + 0x18) + 0xb8) != 0) {
      FUN_015c4270(local_res8);
    }
  }
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

