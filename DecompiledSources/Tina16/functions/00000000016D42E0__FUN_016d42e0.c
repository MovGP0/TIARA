/* Ghidra address: 016d42e0 */
/* Ghidra symbol: FUN_016d42e0 */


double FUN_016d42e0(longlong *param_1)

{
  int iVar1;
  int iVar2;
  double dVar3;
  
  if ((char)param_1[0xaf] == '\0') {
    dVar3 = 0.0;
  }
  else {
    iVar1 = (**(code **)(*param_1 + 0x2a0))(param_1);
    iVar2 = FUN_016d3bb0(param_1);
    dVar3 = (double)iVar1 / (double)iVar2;
  }
  return dVar3;
}

