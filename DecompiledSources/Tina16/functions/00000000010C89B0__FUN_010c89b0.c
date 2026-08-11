/* Ghidra address: 010c89b0 */
/* Ghidra symbol: FUN_010c89b0 */


void FUN_010c89b0(undefined1 *param_1)

{
  char cVar1;
  double dVar2;
  
  cVar1 = FUN_010c7a10(*(undefined8 *)(param_1 + 8));
  if ((cVar1 != '\0') && (cVar1 = FUN_010c7a10(*(undefined8 *)(param_1 + 0x10)), cVar1 != '\0')) {
    *param_1 = 0;
    *(undefined8 *)(param_1 + 8) = 0xc059000000000000;
    *(undefined8 *)(param_1 + 0x10) = 0;
    param_1[0x18] = 0;
    return;
  }
  FUN_010c87e0(param_1);
  dVar2 = (double)FUN_0040c2f0(0x4024000000000000);
  *(double *)(param_1 + 8) = (*(double *)(param_1 + 8) * 20.0) / dVar2;
  dVar2 = (double)FUN_0040c2f0(0x4024000000000000);
  *(double *)(param_1 + 0x10) = (*(double *)(param_1 + 0x10) * 20.0) / dVar2;
  FUN_010c7a80(param_1);
  return;
}

