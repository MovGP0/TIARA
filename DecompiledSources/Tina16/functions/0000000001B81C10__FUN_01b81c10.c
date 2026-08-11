/* Ghidra address: 01b81c10 */
/* Ghidra symbol: FUN_01b81c10 */


void FUN_01b81c10(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  if (*(char *)(param_1 + 0x3c1) == '\0') {
    *(undefined8 *)(PTR_DAT_02004010 + 0x38d) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(PTR_DAT_02004010 + 0x395) = uVar1;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x10);
    *(undefined8 *)(lVar2 + 0x81f) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(lVar2 + 0x827) = uVar1;
  }
  return;
}

