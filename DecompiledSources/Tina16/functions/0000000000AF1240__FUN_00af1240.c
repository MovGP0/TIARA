/* Ghidra address: 00af1240 */
/* Ghidra symbol: FUN_00af1240 */


void FUN_00af1240(undefined8 param_1,longlong param_2)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)(*(longlong *)(param_2 + 0xa0) + 0x8a0);
  *puVar1 = *puVar1 & 0xfffd;
  if (*(short *)(*(longlong *)(param_2 + 0xa0) + 0x4d0) != -1) {
    FUN_008088b0(*(undefined8 *)PTR_DAT_02005950,*(undefined2 *)(param_2 + 0x76));
  }
  return;
}

