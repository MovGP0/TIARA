/* Ghidra address: 0108bb70 */
/* Ghidra symbol: FUN_0108bb70 */


void FUN_0108bb70(longlong param_1)

{
  *(undefined1 *)(param_1 + 0xbd4) = *(undefined1 *)(*(longlong *)(param_1 + 0x958) + 0x328);
  if ((PTR_DAT_020030c0[5] != '\0') && (*(char *)(param_1 + 0xbd4) == '\0')) {
    FUN_0199ded0(*(undefined8 *)(param_1 + 0xbd8),0,1);
    FUN_01ca2aa0(*(undefined8 *)PTR_DAT_02004e40);
    FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
  }
  PTR_DAT_020030c0[5] = *(undefined1 *)(param_1 + 0xbd4);
  return;
}

