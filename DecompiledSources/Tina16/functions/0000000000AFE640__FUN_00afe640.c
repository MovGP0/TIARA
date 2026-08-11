/* Ghidra address: 00afe640 */
/* Ghidra symbol: FUN_00afe640 */


void FUN_00afe640(longlong param_1,undefined4 param_2)

{
  if (((*(ushort *)(param_1 + 0x8a0) & 8) != 0) != (bool)(char)param_2) {
    FUN_00af52f0(param_1,CONCAT71((uint7)(byte)(*(ushort *)(param_1 + 0x8a0) >> 8),3),param_2);
    if ((*(longlong *)(param_1 + 0x6e8) != 0) && ((*(ushort *)(param_1 + 0x34) & 1) == 0)) {
      (**(code **)(param_1 + 0x6e8))
                (*(undefined8 *)(param_1 + 0x6f0),param_1,(*(ushort *)(param_1 + 0x8a0) & 8) != 0);
    }
  }
  return;
}

