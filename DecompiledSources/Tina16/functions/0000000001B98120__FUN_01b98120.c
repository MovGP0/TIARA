/* Ghidra address: 01b98120 */
/* Ghidra symbol: FUN_01b98120 */


void FUN_01b98120(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  uVar1 = FUN_006e2530(*(undefined8 *)(param_1 + 0x7e8));
  cVar2 = FUN_01b96a50(param_1,uVar1);
  if (cVar2 != '\0') {
    cVar2 = FUN_01b95e40(param_1);
    if (cVar2 != '\0') {
      *(undefined4 *)(param_1 + 0x508) = 1;
    }
  }
  return;
}

