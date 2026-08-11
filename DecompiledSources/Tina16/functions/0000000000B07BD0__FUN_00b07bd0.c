/* Ghidra address: 00b07bd0 */
/* Ghidra symbol: FUN_00b07bd0 */


void FUN_00b07bd0(longlong param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = FUN_00680640(*(undefined8 *)(param_1 + 0x4b8));
  if ((char)param_2 != cVar1) {
    FUN_006807e0(*(undefined8 *)(param_1 + 0x4b8),param_2);
  }
  return;
}

