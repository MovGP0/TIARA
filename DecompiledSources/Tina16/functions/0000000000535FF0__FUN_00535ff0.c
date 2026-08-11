/* Ghidra address: 00535ff0 */
/* Ghidra symbol: FUN_00535ff0 */


void FUN_00535ff0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_00534e60(*(undefined8 *)(param_1 + 0x18));
  if (cVar1 == '\0') {
    uVar2 = 0;
    if (*(longlong *)(param_1 + 0x20) != 0) {
      uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x20) + -8);
    }
    FUN_00409a70(*(undefined8 *)(param_1 + 0x20),param_2,uVar2);
  }
  else {
    FUN_004185b0(param_2,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x18),1);
  }
  return;
}

