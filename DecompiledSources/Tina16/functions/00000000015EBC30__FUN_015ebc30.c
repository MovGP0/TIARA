/* Ghidra address: 015ebc30 */
/* Ghidra symbol: FUN_015ebc30 */


void FUN_015ebc30(longlong param_1)

{
  if (*(char *)(param_1 + 0x48) != '\0') {
    FUN_00805200(*(undefined8 *)PTR_DAT_020026a0);
    FUN_00410f20(*(undefined8 *)PTR_DAT_020026a0);
    *(undefined8 *)PTR_DAT_020026a0 = 0;
    *(undefined1 *)(param_1 + 0x48) = 0;
    FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
  }
  return;
}

