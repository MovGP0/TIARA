/* Ghidra address: 015a2620 */
/* Ghidra symbol: FUN_015a2620 */


void FUN_015a2620(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  int local_res18;
  int local_18;
  
  iVar1 = *(int *)(param_1 + 0xb8d + (longlong)param_3 * 4);
  local_res18 = param_3;
  while (local_18 = local_res18 * 2, local_18 <= *(int *)(param_1 + 0x1481)) {
    if ((local_18 < *(int *)(param_1 + 0x1481)) &&
       ((*(ushort *)
          (param_2 + (longlong)*(int *)(param_1 + 0xb8d + (longlong)(local_18 + 1) * 4) * 4) <
         *(ushort *)(param_2 + (longlong)*(int *)(param_1 + 0xb8d + (longlong)local_18 * 4) * 4) ||
        ((*(short *)(param_2 +
                    (longlong)*(int *)(param_1 + 0xb8d + (longlong)(local_18 + 1) * 4) * 4) ==
          *(short *)(param_2 + (longlong)*(int *)(param_1 + 0xb8d + (longlong)local_18 * 4) * 4) &&
         (*(byte *)(param_1 + 0x1489 +
                   (longlong)*(int *)(param_1 + 0xb8d + (longlong)(local_18 + 1) * 4)) <=
          *(byte *)(param_1 + 0x1489 + (longlong)*(int *)(param_1 + 0xb8d + (longlong)local_18 * 4))
         )))))) {
      local_18 = local_18 + 1;
    }
    if ((*(ushort *)(param_2 + (longlong)iVar1 * 4) <
         *(ushort *)(param_2 + (longlong)*(int *)(param_1 + 0xb8d + (longlong)local_18 * 4) * 4)) ||
       ((*(short *)(param_2 + (longlong)iVar1 * 4) ==
         *(short *)(param_2 + (longlong)*(int *)(param_1 + 0xb8d + (longlong)local_18 * 4) * 4) &&
        (*(byte *)(param_1 + 0x1489 + (longlong)iVar1) <=
         *(byte *)(param_1 + 0x1489 + (longlong)*(int *)(param_1 + 0xb8d + (longlong)local_18 * 4)))
        ))) break;
    *(undefined4 *)(param_1 + 0xb8d + (longlong)local_res18 * 4) =
         *(undefined4 *)(param_1 + 0xb8d + (longlong)local_18 * 4);
    local_res18 = local_18;
  }
  *(int *)(param_1 + 0xb8d + (longlong)local_res18 * 4) = iVar1;
  return;
}

