/* Ghidra address: 01baff50 */
/* Ghidra symbol: FUN_01baff50 */


void FUN_01baff50(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  FUN_00411a80(param_1,param_2);
  if (*(int *)(param_1 + 0x1c) == -1) {
    lVar1 = *(longlong *)(param_1 + 0x28);
    if (lVar1 != 0) {
      *(int *)(lVar1 + 0x20) =
           *(int *)(lVar1 + 0x20) - (*(int *)(lVar1 + 0x24) - *(int *)(lVar1 + 0x18));
      *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x18) =
           *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x24);
    }
  }
  else if (*(longlong *)(param_1 + 0x28) == 0) {
    FUN_004b89e0(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                 (longlong)*(int *)(param_1 + 0x18));
  }
  else {
    FUN_01bb0340(*(longlong *)(param_1 + 0x28),*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x1c));
  }
  FUN_00419430(param_1 + 0x10,&DAT_00406578);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

