/* Ghidra address: 017d3110 */
/* Ghidra symbol: FUN_017d3110 */


void FUN_017d3110(longlong param_1)

{
  int iVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  
  if (*(longlong *)(param_1 + 0x5b0) != 0) {
    if (*(longlong *)(param_1 + 0x5a0) == 0) {
      dVar4 = 0.0;
    }
    else {
      iVar1 = FUN_01b05600(*(longlong *)(param_1 + 0x5a0),1);
      iVar2 = FUN_01b05600(*(undefined8 *)(param_1 + 0x5a0),2);
      dVar4 = *(double *)(*(longlong *)(param_1 + 0x148) + (longlong)iVar1 * 8) -
              *(double *)(*(longlong *)(param_1 + 0x148) + (longlong)iVar2 * 8);
    }
    if (*(longlong *)(param_1 + 0x5a8) == 0) {
      dVar3 = 0.0;
    }
    else {
      iVar1 = FUN_01b05600(*(longlong *)(param_1 + 0x5a8),1);
      iVar2 = FUN_01b05600(*(undefined8 *)(param_1 + 0x5a8),2);
      dVar3 = *(double *)(*(longlong *)(param_1 + 0x148) + (longlong)iVar1 * 8) -
              *(double *)(*(longlong *)(param_1 + 0x148) + (longlong)iVar2 * 8);
    }
    FUN_016d6ca0(*(undefined8 *)(param_1 + 0x1358),*(undefined8 *)(param_1 + 0x390),dVar4,dVar3);
  }
  return;
}

