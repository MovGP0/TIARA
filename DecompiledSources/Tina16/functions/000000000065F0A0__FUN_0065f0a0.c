/* Ghidra address: 0065f0a0 */
/* Ghidra symbol: FUN_0065f0a0 */


undefined8 FUN_0065f0a0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  for (; param_1 != 0; param_1 = *(longlong *)(param_1 + 0x78)) {
    cVar1 = FUN_0065be20(param_1);
    if (cVar1 != '\0') break;
  }
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x468);
  }
  return uVar2;
}

