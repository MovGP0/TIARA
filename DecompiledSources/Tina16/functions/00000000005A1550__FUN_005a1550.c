/* Ghidra address: 005a1550 */
/* Ghidra symbol: FUN_005a1550 */


void FUN_005a1550(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FUN_005a4850(*(undefined8 *)(param_1 + 8),param_2);
  if (cVar2 == '\0') {
    uVar1 = FUN_005a22c0(&PTR_FUN_0059be98,1);
    FUN_005a4460(*(undefined8 *)(param_1 + 8),param_2,uVar1);
  }
  return;
}

