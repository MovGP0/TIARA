/* Ghidra address: 01be74c0 */
/* Ghidra symbol: FUN_01be74c0 */


void FUN_01be74c0(longlong param_1)

{
  undefined8 local_38;
  undefined8 uStack_30;
  
  FUN_01bea390(param_1);
  FUN_0064cbf0(param_1,*(int *)(param_1 + 0x98) + 0x12);
  *(ulonglong *)(param_1 + 0x32c) =
       CONCAT44(*(undefined4 *)(param_1 + 0x330),*(int *)(param_1 + 0x32c) + 0x12);
  local_38 = *(undefined8 *)(param_1 + 0x34c);
  uStack_30 = *(undefined8 *)(param_1 + 0x354);
  FUN_00423b50(&local_38,0x12,0);
  *(undefined8 *)(param_1 + 0x34c) = local_38;
  *(undefined8 *)(param_1 + 0x354) = uStack_30;
  return;
}

