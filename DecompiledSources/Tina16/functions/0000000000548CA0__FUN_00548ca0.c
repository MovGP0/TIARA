/* Ghidra address: 00548ca0 */
/* Ghidra symbol: FUN_00548ca0 */


undefined8 FUN_00548ca0(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x60))(param_1);
  if (cVar1 == '\0') {
    lVar2 = FUN_00548d90(param_1);
    if ((*(ushort *)(lVar2 + 8) & 5) != 1) {
      return 0;
    }
  }
  return 1;
}

