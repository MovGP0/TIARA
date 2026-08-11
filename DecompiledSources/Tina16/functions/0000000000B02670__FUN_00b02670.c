/* Ghidra address: 00b02670 */
/* Ghidra symbol: FUN_00b02670 */


void FUN_00b02670(longlong param_1)

{
  undefined8 local_20 [2];
  
  if (*(longlong *)(param_1 + 0x18) == 0) {
    FUN_0080ce30(*(undefined8 *)PTR_DAT_02004030,&PTR_FUN_00afff18,local_20);
    FUN_00b019b0(local_20[0],param_1);
    *(undefined8 *)(param_1 + 0x18) = local_20[0];
  }
  if (*(char *)(*(longlong *)(param_1 + 0x18) + 0xa9) == '\0') {
    FUN_008059a0(*(longlong *)(param_1 + 0x18));
  }
  return;
}

