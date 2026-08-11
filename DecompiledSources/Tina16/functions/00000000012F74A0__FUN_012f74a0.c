/* Ghidra address: 012f74a0 */
/* Ghidra symbol: FUN_012f74a0 */


void FUN_012f74a0(longlong param_1)

{
  char cVar1;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x7c0),&local_10);
  cVar1 = FUN_00b96980(0,0,&local_10,0x2b,0);
  if (cVar1 != '\0') {
    FUN_0064de00(*(undefined8 *)(param_1 + 0x7c0),local_10);
  }
  FUN_00414480(&local_10);
  return;
}

