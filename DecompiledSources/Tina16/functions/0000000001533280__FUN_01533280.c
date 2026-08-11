/* Ghidra address: 01533280 */
/* Ghidra symbol: FUN_01533280 */


void FUN_01533280(longlong param_1)

{
  char cVar1;
  
  FUN_0152fca0(param_1,0);
  cVar1 = FUN_013911a0(0,*(undefined8 *)(param_1 + 0x1c28),0,0,0,0,0,0x1c7,0,0,0,0,0,0);
  if (cVar1 == '\0') {
    FUN_008059a0(*(undefined8 *)PTR_DAT_02004a88);
  }
  FUN_0152fd80(param_1);
  return;
}

