/* Ghidra address: 007fc7f0 */
/* Ghidra symbol: FUN_007fc7f0 */


void FUN_007fc7f0(longlong *param_1)

{
  (**(code **)(**(longlong **)PTR_DAT_02005910 + 0x28))(*(longlong **)PTR_DAT_02005910);
  FUN_004d2c10(param_1);
  FUN_004aee50(*(undefined8 *)(DAT_02012670 + 0xf8),param_1,0);
  FUN_004bdcb0(param_1,0);
  if (param_1[0xa6] != 0) {
    (**(code **)(*(longlong *)param_1[0xa6] + 0x18))((longlong *)param_1[0xa6]);
  }
  if ((*(char *)((longlong)param_1 + 0x4d6) != '\x01') && ((*(byte *)(param_1 + 0xd5) & 4) == 0)) {
    FUN_00805990(param_1);
  }
  if (*(char *)((longlong)param_1 + 0x691) == '\0') {
    (**(code **)(*param_1 + 0x288))(param_1);
  }
  return;
}

