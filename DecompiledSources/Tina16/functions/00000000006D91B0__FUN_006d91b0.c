/* Ghidra address: 006d91b0 */
/* Ghidra symbol: FUN_006d91b0 */


void FUN_006d91b0(longlong param_1)

{
  if (*(char *)(param_1 + 0x4ab) != '\0') {
    FUN_0064df10(param_1,*(undefined8 *)(*(longlong *)PTR_DAT_02005950 + 0x100));
    FUN_005fc860(*(undefined8 *)(param_1 + 0xb8),0xff000012);
  }
  return;
}

