/* Ghidra address: 01bf9050 */
/* Ghidra symbol: FUN_01bf9050 */


void FUN_01bf9050(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  FUN_004115f0(param_1);
  if (((*(ushort *)(param_1 + 0x34) & 0x10) != 0) && ((*(ushort *)(param_1 + 0x34) & 1) == 0)) {
    uVar1 = (**(code **)(*DAT_02111470 + 0xb0))(DAT_02111470,DAT_02111478);
    uVar2 = FUN_01c07a90(DAT_02111470,uVar1);
    *(undefined8 *)(param_1 + 0x1b8) = uVar2;
  }
  return;
}

