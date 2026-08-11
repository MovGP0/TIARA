/* Ghidra address: 0155ffc0 */
/* Ghidra symbol: FUN_0155ffc0 */


void FUN_0155ffc0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  *(undefined4 *)(param_1 + 0x7e0) = 0;
  FUN_01995600(*(undefined8 *)(param_1 + 0x748),0,0);
  lVar2 = FUN_01995660(*(undefined8 *)(param_1 + 0x748),0,0);
  while (lVar2 != 0) {
    FUN_01d03160(lVar2);
    cVar1 = FUN_01d3f210(lVar2);
    if (cVar1 != '\0') {
      *(int *)(param_1 + 0x7e0) = *(int *)(param_1 + 0x7e0) + 1;
    }
    FUN_01995800(*(undefined8 *)(param_1 + 0x748),0,0);
    lVar2 = FUN_01995660(*(undefined8 *)(param_1 + 0x748));
  }
  return;
}

