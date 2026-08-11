/* Ghidra address: 01cd66b0 */
/* Ghidra symbol: FUN_01cd66b0 */


int FUN_01cd66b0(longlong param_1)

{
  double dVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  
  iVar4 = *(int *)(param_1 + 0x90);
  dVar5 = (double)FUN_0040c850(*(double *)(param_1 + 0xc0) - *(double *)(param_1 + 0xb8));
  if (1e-14 <= dVar5) {
    dVar5 = *(double *)(param_1 + 0xc0);
    dVar1 = *(double *)(param_1 + 0xb8);
    iVar3 = *(int *)(param_1 + 0x74);
    iVar2 = FUN_00f06000(*(undefined8 *)(param_1 + 0xc0));
    iVar3 = FUN_00f060d0((dVar5 - dVar1) / (double)iVar3);
    if (iVar4 <= iVar2 - iVar3) {
      iVar4 = iVar2 - iVar3;
    }
  }
  return iVar4;
}

