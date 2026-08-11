/* Ghidra address: 013354e0 */
/* Ghidra symbol: FUN_013354e0 */


void FUN_013354e0(longlong *param_1,double *param_2,double *param_3)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  
  *param_2 = 0.0;
  *param_3 = 0.0;
  iVar1 = (**(code **)(*param_1 + 0x28))();
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      plVar2 = (longlong *)(**(code **)(*param_1 + 0x30))(param_1,iVar3);
      if (*(char *)(*plVar2 + 0x540) == '\x01') {
        *param_2 = *param_2 + (double)plVar2[3];
      }
      else if (*(char *)(*plVar2 + 0x540) == '\x02') {
        *param_3 = *param_3 + (double)plVar2[3];
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

