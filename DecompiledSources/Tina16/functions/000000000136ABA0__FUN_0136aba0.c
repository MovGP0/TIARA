/* Ghidra address: 0136aba0 */
/* Ghidra symbol: FUN_0136aba0 */


longlong FUN_0136aba0(longlong param_1,char param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  char cVar3;
  longlong local_res8;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong local_28;
  longlong local_20;
  
  local_30 = auStack_58;
  local_res8 = param_1;
  puVar2 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar2 = local_30;
  }
  local_30 = puVar2;
  FUN_01364e80(local_res8,0,param_3);
  uVar1 = *(undefined8 *)(*(longlong *)(local_res8 + 0x10) + 0x27a8);
  *(undefined8 *)(local_res8 + 0x18) = uVar1;
  local_20 = FUN_01c8a330(*(undefined8 *)(local_res8 + 0x10),uVar1);
  if (local_20 != 0) {
    local_28 = *(longlong *)(local_20 + 0x10);
    FUN_01994230(*(undefined8 *)(local_res8 + 0x18));
    if (*(longlong *)(local_28 + 0x488) != 0) {
      cVar3 = FUN_01b07dd0(*(longlong *)(local_28 + 0x488));
      if (((cVar3 != '\0') &&
          (*(longlong *)(*(longlong *)(*(longlong *)(local_28 + 0x488) + 0xe8) + 0x23d0) != 0)) &&
         (*(char *)(*(longlong *)(*(longlong *)(*(longlong *)(local_28 + 0x488) + 0xe8) + 0x23d0) +
                   0x18) == '\0')) {
        FUN_01566760(*(undefined8 *)(*(longlong *)(*(longlong *)(local_28 + 0x488) + 0xe8) + 0x23d0)
                     ,local_28);
        *(undefined1 *)
         (*(longlong *)(*(longlong *)(*(longlong *)(local_28 + 0x488) + 0xe8) + 0x23d0) + 0x18) = 1;
      }
    }
  }
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

