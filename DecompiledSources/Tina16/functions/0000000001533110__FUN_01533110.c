/* Ghidra address: 01533110 */
/* Ghidra symbol: FUN_01533110 */


void FUN_01533110(longlong param_1)

{
  char cVar1;
  
  FUN_0152fca0(param_1,2);
  cVar1 = FUN_01320bb0(2,*(undefined8 *)(param_1 + 0x1c28),1,0,0,0,0,0,0x1c7,0,0,0,0,0,0,0);
  if (cVar1 == '\0') {
    FUN_008059a0(*(undefined8 *)PTR_DAT_02004a88);
  }
  FUN_0152fd80(param_1);
  return;
}

