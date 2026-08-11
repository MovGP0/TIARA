/* Ghidra address: 0140a760 */
/* Ghidra symbol: FUN_0140a760 */


void FUN_0140a760(double param_1,undefined4 param_2,longlong *param_3,char param_4)

{
  int iVar1;
  bool bVar2;
  double *pdVar3;
  bool bVar4;
  longlong local_40 [4];
  
  (**(code **)(*param_3 + 0x2d0))(param_3,1,local_40);
  iVar1 = *(int *)(*(longlong *)(local_40[0] + 8) + 0x10);
  bVar4 = true;
  bVar2 = true;
  if (0 < iVar1) {
    pdVar3 = (double *)
             FUN_01d3aab0(*(longlong *)(local_40[0] + 8),
                          CONCAT22((short)((uint)iVar1 >> 0x10),(short)iVar1 + -1));
    bVar4 = *(char *)(pdVar3 + 1) != (char)param_2;
    if (param_1 - *pdVar3 < 0.0) {
      bVar2 = false;
    }
  }
  if ((bVar2) && (bVar4 || param_4 != '\0')) {
    FUN_01d3aad0(*(undefined8 *)(local_40[0] + 8),param_1,param_2);
  }
  return;
}

