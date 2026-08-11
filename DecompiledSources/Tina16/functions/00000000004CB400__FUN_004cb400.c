/* Ghidra address: 004cb400 */
/* Ghidra symbol: FUN_004cb400 */


void FUN_004cb400(longlong param_1)

{
  char cVar1;
  
  FUN_004c9f90(param_1);
  *(int *)(param_1 + 0x1ec) = *(int *)(param_1 + 0x1ec) + 1;
  while( true ) {
    cVar1 = FUN_004be290(*(undefined8 *)(param_1 + 0x1d0));
    if (cVar1 != '\0') break;
    FUN_004cb330(param_1);
  }
  FUN_004be030(*(undefined8 *)(param_1 + 0x1d0),0);
  while( true ) {
    cVar1 = FUN_004be290(*(undefined8 *)(param_1 + 0x1d0));
    if (cVar1 != '\0') break;
    FUN_004cb400(param_1);
  }
  FUN_004be030(*(undefined8 *)(param_1 + 0x1d0),0);
  *(int *)(param_1 + 0x1ec) = *(int *)(param_1 + 0x1ec) + -1;
  FUN_004c9bf0(param_1);
  FUN_004c9d80(param_1,L"end\r\n");
  return;
}

