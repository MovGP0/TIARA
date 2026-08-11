/* Ghidra address: 00b58f30 */
/* Ghidra symbol: FUN_00b58f30 */


void FUN_00b58f30(longlong param_1,byte param_2,byte param_3)

{
  undefined8 uVar1;
  char cVar2;
  
  if (param_2 <= param_3) {
    cVar2 = (param_3 - param_2) + '\x01';
    do {
      uVar1 = FUN_00b52ce0(*(undefined8 *)(param_1 + 0x18),param_2);
      FUN_00b50720(uVar1);
      param_2 = param_2 + 1;
      cVar2 = cVar2 + -1;
    } while (cVar2 != '\0');
  }
  return;
}

