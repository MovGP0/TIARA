/* Ghidra address: 005dceb0 */
/* Ghidra symbol: FUN_005dceb0 */


void FUN_005dceb0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = FUN_005dc860(*(undefined8 *)(param_1 + 0x18));
  if (lVar2 != 0) {
    cVar1 = FUN_005dc710(lVar2,param_3);
    if (cVar1 != '\0') {
      *(undefined1 *)(param_1 + 0x28) = 1;
    }
  }
  return;
}

