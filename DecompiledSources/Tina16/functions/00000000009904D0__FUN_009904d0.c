/* Ghidra address: 009904d0 */
/* Ghidra symbol: FUN_009904d0 */


undefined8 FUN_009904d0(longlong *param_1)

{
  char cVar1;
  double dVar2;
  
  dVar2 = (double)(**(code **)(*param_1 + 0x100))(param_1);
  if (dVar2 != 0.0) {
    (**(code **)(*param_1 + 0x100))(param_1);
    cVar1 = FUN_00526f10();
    if (cVar1 == '\0') {
      return 1;
    }
  }
  return 0;
}

