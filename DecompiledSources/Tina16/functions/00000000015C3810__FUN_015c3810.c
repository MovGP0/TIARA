/* Ghidra address: 015c3810 */
/* Ghidra symbol: FUN_015c3810 */


undefined1 FUN_015c3810(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 local_19;
  
  local_19 = 0;
  uVar2 = FUN_004b6da0(*(undefined8 *)(*(longlong *)(param_1 + 0x90) + 8));
  FUN_004b6dc0(*(undefined8 *)(*(longlong *)(param_1 + 0x90) + 8),param_2);
  puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x90) + 8);
  lVar3 = (**(code **)*puVar1)(puVar1);
  lVar4 = FUN_004b6da0(*(undefined8 *)(*(longlong *)(param_1 + 0x90) + 8));
  if (0x15 < lVar3 - lVar4) {
    FUN_004b84c0(*(undefined8 *)(*(longlong *)(param_1 + 0x90) + 8),*(undefined8 *)(param_1 + 0x98),
                 0x16);
    if ((((*(ushort *)(*(longlong *)(param_1 + 0x98) + 6) <=
           *(ushort *)(*(longlong *)(param_1 + 0x98) + 4)) &&
         (*(ushort *)(*(longlong *)(param_1 + 0x98) + 8) <=
          *(ushort *)(*(longlong *)(param_1 + 0x98) + 10))) &&
        ((*(int *)(*(longlong *)(param_1 + 0x98) + 0xc) == -1 ||
         (lVar3 = FUN_004b6da0(*(undefined8 *)(*(longlong *)(param_1 + 0x90) + 8)),
         (longlong)(ulonglong)*(uint *)(*(longlong *)(param_1 + 0x98) + 0xc) < lVar3)))) &&
       (((*(ushort *)(*(longlong *)(param_1 + 0x98) + 6) <
          *(ushort *)(*(longlong *)(param_1 + 0x98) + 4) ||
         (*(int *)(*(longlong *)(param_1 + 0x98) + 0x10) == -1)) ||
        (lVar3 = FUN_004b6da0(*(undefined8 *)(*(longlong *)(param_1 + 0x90) + 8)),
        (longlong)(ulonglong)*(uint *)(*(longlong *)(param_1 + 0x98) + 0x10) <
        (longlong)(lVar3 - (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x98) + 0xc)))))) {
      puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x90) + 8);
      lVar3 = (**(code **)*puVar1)(puVar1);
      lVar4 = FUN_004b6da0(*(undefined8 *)(*(longlong *)(param_1 + 0x90) + 8));
      if ((longlong)(ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x98) + 0x14) <= lVar3 - lVar4) {
        local_19 = 1;
        goto LAB_015c3a00;
      }
    }
    local_19 = 0;
  }
LAB_015c3a00:
  FUN_004b6dc0(*(undefined8 *)(*(longlong *)(param_1 + 0x90) + 8),uVar2);
  return local_19;
}

