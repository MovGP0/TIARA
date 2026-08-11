/* Ghidra address: 017ff150 */
/* Ghidra symbol: FUN_017ff150 */


void FUN_017ff150(undefined8 param_1,longlong param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if ((((param_2 != 0) && (param_3 != -1)) && (param_4 != -1)) && (param_3 != param_4)) {
    iVar3 = *(int *)(*(longlong *)(param_2 + 1000) + 0x10);
    if ((0 < iVar3) && (iVar2 = 0, -1 < iVar3 + -1)) {
      do {
        piVar1 = (int *)FUN_004aeac0(*(undefined8 *)(param_2 + 1000),iVar2);
        if ((*piVar1 == param_3) && (piVar1[1] == param_4)) {
          return;
        }
        if ((*piVar1 == param_4) && (piVar1[1] == param_3)) {
          return;
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    piVar1 = (int *)FUN_004095c0(8);
    *piVar1 = param_3;
    piVar1[1] = param_4;
    FUN_004ae7e0(*(undefined8 *)(param_2 + 1000),piVar1);
  }
  return;
}

