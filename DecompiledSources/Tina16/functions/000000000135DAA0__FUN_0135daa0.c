/* Ghidra address: 0135daa0 */
/* Ghidra symbol: FUN_0135daa0 */


void FUN_0135daa0(longlong param_1)

{
  FUN_00410f20(*(undefined8 *)(param_1 + 0x728));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x730));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x740));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x738));
  if ((*(longlong *)PTR_DAT_02004e40 != 0) && (*(char *)(param_1 + 0x758) != '\0')) {
    FUN_01c6cf20(*(undefined8 *)PTR_DAT_02004e40);
  }
  if (*(longlong *)PTR_DAT_02004e40 != 0) {
    FUN_0064e770(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0xa10));
  }
  return;
}

