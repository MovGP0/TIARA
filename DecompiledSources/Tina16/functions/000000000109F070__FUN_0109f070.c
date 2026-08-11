/* Ghidra address: 0109f070 */
/* Ghidra symbol: FUN_0109f070 */


void FUN_0109f070(longlong param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x9e1) == '\0') {
    uVar1 = _Dbg_IsNodeChanged(*(undefined8 *)(param_1 + 0x9c0));
    FUN_00f85520(*(undefined8 *)PTR_DAT_020019c8,uVar1);
    FUN_00f84b70(*(undefined8 *)PTR_DAT_020019c8);
  }
  return;
}

