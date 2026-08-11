/* Ghidra address: 01970fc0 */
/* Ghidra symbol: FUN_01970fc0 */


undefined8 FUN_01970fc0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_0196d4a0(*(undefined8 *)(param_1 + 0x170));
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x18);
  }
  return uVar2;
}

