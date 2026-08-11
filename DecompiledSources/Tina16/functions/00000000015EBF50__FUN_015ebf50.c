/* Ghidra address: 015ebf50 */
/* Ghidra symbol: FUN_015ebf50 */


void FUN_015ebf50(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x80) + 0x30);
  if (lVar1 != 0) {
    (**(code **)PTR_DAT_020058d0)(lVar1);
  }
  if (*(char *)(param_2 + 0x57) != '\0') {
    FUN_015e9d30();
  }
  FUN_015ebc30(*(undefined8 *)(param_2 + 0x80));
  return;
}

