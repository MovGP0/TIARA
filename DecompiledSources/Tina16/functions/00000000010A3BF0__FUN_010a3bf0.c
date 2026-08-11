/* Ghidra address: 010a3bf0 */
/* Ghidra symbol: FUN_010a3bf0 */


void FUN_010a3bf0(longlong param_1)

{
  double *pdVar1;
  longlong lVar2;
  double dVar3;
  undefined8 local_10;
  
  local_10 = 0;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x1a70) + 0x78);
  dVar3 = *(double *)(lVar2 + 0x13a20) - *(double *)(param_1 + 0xa48);
  if ((*(double *)(param_1 + 0xa50) <= dVar3 && dVar3 != *(double *)(param_1 + 0xa50)) ||
     (pdVar1 = (double *)(*(longlong *)(*(longlong *)(param_1 + 0x1a70) + 0x78) + 0x13a20),
     *pdVar1 <= *(double *)(param_1 + 0xa48) && *(double *)(param_1 + 0xa48) != *pdVar1)) {
    if (*(char *)(param_1 + 0xa2a) == '\0') {
      FUN_00b8fd60(&local_10,
                   *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x1a70) + 0x78) + 0x13a20),
                   *(undefined1 *)(lVar2 + 0x94),0,1);
      FUN_0064de00(*(undefined8 *)(param_1 + 0x850),local_10);
    }
    else {
      FUN_0064de00(*(undefined8 *)(param_1 + 0x850),L"<end sim>");
    }
    *(undefined8 *)(param_1 + 0xa48) =
         *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x1a70) + 0x78) + 0x13a20);
  }
  FUN_00414480(&local_10);
  return;
}

