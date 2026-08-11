/* Ghidra address: 01a69160 */
/* Ghidra symbol: FUN_01a69160 */


void FUN_01a69160(undefined8 param_1,longlong param_2)

{
  FUN_00410f20(*(undefined8 *)(param_2 + 0x58));
  FUN_00410f20(*(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x770));
  FUN_00410f20(*(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x768));
  *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x768) = 0;
  if (*(longlong *)(param_2 + 0x50) != 0) {
    FUN_00410f20(*(undefined8 *)(param_2 + 0x50));
  }
  FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
  return;
}

