/* Ghidra address: 0114f130 */
/* Ghidra symbol: FUN_0114f130 */


double FUN_0114f130(longlong param_1,double param_2,undefined8 param_3,undefined8 param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = (double)FUN_0040c850(param_3);
  dVar2 = (double)FUN_0040c850(param_4);
  if (*(char *)(*(longlong *)(param_1 + 0xa0) + 0xb73) == '\0') {
    dVar3 = (double)FUN_00409eb0();
    if (dVar3 < 0.5) {
      dVar1 = param_2 * (-dVar2 / 100.0 + 1.0);
    }
    else {
      dVar1 = param_2 * (dVar1 / 100.0 + 1.0);
    }
  }
  else if ((*(ushort *)(param_1 + 0x4c) & *(ushort *)(param_1 + 0x48)) == 0) {
    dVar1 = param_2 * (-dVar2 / 100.0 + 1.0);
  }
  else {
    dVar1 = param_2 * (dVar1 / 100.0 + 1.0);
  }
  if (dVar1 <= 0.0) {
    dVar1 = param_2;
  }
  return dVar1;
}

