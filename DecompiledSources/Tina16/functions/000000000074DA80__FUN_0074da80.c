/* Ghidra address: 0074da80 */
/* Ghidra symbol: FUN_0074da80 */


void FUN_0074da80(longlong param_1,longlong param_2)

{
  if ((*(longlong *)(param_1 + 0xb0) != param_2) &&
     (*(longlong *)(param_1 + 0xb0) = param_2, (*(ushort *)(param_1 + 0x34) & 0x10) == 0)) {
    if (param_2 == 0) {
      FUN_0074e2e0(param_1);
    }
    else {
      FUN_007d5d60(param_2,*(undefined4 *)(param_1 + 0xd0),*(undefined8 *)(param_1 + 0x98));
    }
    FUN_0074e0e0(param_1);
  }
  return;
}

