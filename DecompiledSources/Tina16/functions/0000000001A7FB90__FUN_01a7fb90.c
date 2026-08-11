/* Ghidra address: 01a7fb90 */
/* Ghidra symbol: FUN_01a7fb90 */


void FUN_01a7fb90(longlong param_1)

{
  longlong *plVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x798) + 0xf8) + 0x58);
  dVar2 = (double)FUN_01abfb00(*(undefined8 *)(*(longlong *)(param_1 + 0x798) + 0xf0));
  dVar3 = (double)FUN_01abfb00(*(undefined8 *)(*(longlong *)(param_1 + 0x798) + 0xf8));
  plVar1[0x1e] = (longlong)(((double)plVar1[0x1e] + dVar2) - dVar3);
  dVar4 = (double)FUN_01ab2a30(plVar1);
  dVar2 = *(double *)(plVar1[0x1f] + 200);
  dVar3 = dVar4 + (double)plVar1[0x1e];
  if (dVar2 <= dVar4 + (double)plVar1[0x1e]) {
    dVar3 = dVar2;
  }
  *(double *)(plVar1[0x1f] + 200) = dVar3;
  dVar4 = (double)FUN_01ab2a60(plVar1);
  dVar2 = *(double *)(plVar1[0x1f] + 0xd0);
  dVar3 = dVar4 + (double)plVar1[0x1e];
  if (dVar4 + (double)plVar1[0x1e] <= dVar2) {
    dVar3 = dVar2;
  }
  *(double *)(plVar1[0x1f] + 0xd0) = dVar3;
  (**(code **)(*plVar1 + 0xc0))(plVar1,*(undefined8 *)(DAT_01fcab48 + 0x780),DAT_01fcab48);
  FUN_01aceb90(*(undefined8 *)(param_1 + 0x798),1);
  return;
}

