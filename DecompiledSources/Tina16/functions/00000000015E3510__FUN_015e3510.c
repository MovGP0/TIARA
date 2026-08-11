/* Ghidra address: 015e3510 */
/* Ghidra symbol: FUN_015e3510 */


void FUN_015e3510(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  FUN_00414bf0(param_1 + 0x1b8);
  if ((*(char *)(param_1 + 8) == '\x01') && (*(longlong *)(param_1 + 0x1a8) != 0)) {
    if (*(longlong *)(param_1 + 0x10) != 0) {
      (**(code **)(**(longlong **)(param_1 + 0x10) + -0x20))(*(longlong **)(param_1 + 0x10));
    }
    uVar1 = FUN_01596170(&DAT_01595c18,CONCAT71((int7)((ulonglong)param_3 >> 8),1) & 0xffffffff,
                         *(undefined8 *)(param_1 + 0x1b8),*(undefined8 *)(param_1 + 0x1a8),
                         *(ushort *)(param_1 + 0x188) / 2,1000);
    *(undefined8 *)(param_1 + 0x10) = uVar1;
  }
  else {
    if (*(longlong *)(param_1 + 0x10) != 0) {
      (**(code **)(**(longlong **)(param_1 + 0x10) + -0x20))(*(longlong **)(param_1 + 0x10),1);
    }
    uVar1 = FUN_01595fc0(&DAT_01595c18,CONCAT71((int7)((ulonglong)param_3 >> 8),1) & 0xffffffff,
                         *(undefined8 *)(param_1 + 0x1b8),
                         (ulonglong)*(ushort *)(param_1 + 0x188) / 2,1000);
    *(undefined8 *)(param_1 + 0x10) = uVar1;
    uVar1 = FUN_01596450(*(undefined8 *)(param_1 + 0x10));
    *(undefined8 *)(param_1 + 0x1a8) = uVar1;
  }
  FUN_015e3670(param_1);
  return;
}

