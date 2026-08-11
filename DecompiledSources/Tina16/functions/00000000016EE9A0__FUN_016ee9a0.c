/* Ghidra address: 016ee9a0 */
/* Ghidra symbol: FUN_016ee9a0 */


double FUN_016ee9a0(undefined8 param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
                   char param_5,longlong param_6)

{
  int iVar1;
  int iVar2;
  double dVar3;
  
  if (param_6 == 0) {
    iVar1 = FUN_01b05600(param_1,param_3);
    iVar2 = FUN_01b05600(param_1,param_4);
  }
  else {
    iVar1 = FUN_01b05600(param_6,param_3);
    iVar2 = FUN_01b05600(param_6,param_4);
  }
  if (param_5 == '\0') {
    dVar3 = *(double *)(*(longlong *)(param_2 + 0x118) + (longlong)iVar1 * 8) -
            *(double *)(*(longlong *)(param_2 + 0x118) + (longlong)iVar2 * 8);
  }
  else if (param_5 == '\x01') {
    dVar3 = *(double *)(*(longlong *)(param_2 + 0x168) + (longlong)iVar1 * 8) -
            *(double *)(*(longlong *)(param_2 + 0x168) + (longlong)iVar2 * 8);
  }
  else if (param_5 == '\x02') {
    dVar3 = *(double *)(*(longlong *)(param_2 + 0x170) + (longlong)iVar1 * 8) -
            *(double *)(*(longlong *)(param_2 + 0x170) + (longlong)iVar2 * 8);
  }
  else if (param_5 == '\n') {
    dVar3 = *(double *)(*(longlong *)(param_2 + 0x148) + (longlong)iVar1 * 8) -
            *(double *)(*(longlong *)(param_2 + 0x148) + (longlong)iVar2 * 8);
  }
  else {
    dVar3 = *(double *)(*(longlong *)(param_2 + 0x118) + (longlong)iVar1 * 8) -
            *(double *)(*(longlong *)(param_2 + 0x118) + (longlong)iVar2 * 8);
  }
  return dVar3;
}

