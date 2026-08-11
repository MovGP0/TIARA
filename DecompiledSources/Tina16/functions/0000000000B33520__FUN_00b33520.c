/* Ghidra address: 00b33520 */
/* Ghidra symbol: FUN_00b33520 */


void FUN_00b33520(longlong param_1)

{
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  if (*(char *)(*(longlong *)(param_1 + 0x38) + 1) == '\x15') {
    FUN_00b19790(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x38),&local_10);
    FUN_00415980(&local_10,3,&DAT_00b33648,local_10,&LAB_00b33658);
    FUN_00b19730(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x38),local_10);
  }
  else {
    FUN_00b19790(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x38),&local_10);
    FUN_00b19790(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x38),&local_18);
    FUN_00415980(&local_10,3,local_18,*(undefined8 *)(*(longlong *)(param_1 + 0x38) + 10),local_10);
    FUN_00b19730(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x38),local_10);
  }
  FUN_00414590(&local_18,2);
  return;
}

