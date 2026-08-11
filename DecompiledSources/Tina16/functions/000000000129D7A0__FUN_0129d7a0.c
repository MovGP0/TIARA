/* Ghidra address: 0129d7a0 */
/* Ghidra symbol: FUN_0129d7a0 */


double FUN_0129d7a0(longlong param_1)

{
  int iVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  
  dVar4 = 0.0;
  iVar1 = 0;
  iVar2 = *(ushort *)(param_1 + 0x5a) + 1;
  do {
    dVar3 = (double)FUN_017c58f0(*(undefined8 *)(param_1 + 0x32),*(undefined8 *)(param_1 + 0x3a),0,
                                 *(undefined2 *)(param_1 + 0x5a),iVar1,
                                 *(undefined1 *)(param_1 + 0x60),0);
    dVar4 = dVar4 + (double)*(int *)(param_1 + 0x5c) / dVar3;
    iVar1 = iVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return dVar4;
}

