/* Ghidra address: 00727870 */
/* Ghidra symbol: FUN_00727870 */


void FUN_00727870(longlong param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  
  if (*(char *)(param_1 + 0x20) != '\0') {
    FUN_00728f60(*(undefined8 *)(param_1 + 0x18));
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  pcVar2 = (code *)FUN_00411550(uVar1,0xffdf);
  (*pcVar2)(uVar1);
  return;
}

