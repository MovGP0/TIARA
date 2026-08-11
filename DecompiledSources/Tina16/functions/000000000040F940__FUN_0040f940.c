/* Ghidra address: 0040f940 */
/* Ghidra symbol: FUN_0040f940 */


undefined8 FUN_0040f940(longlong param_1,int param_2)

{
  char *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  if (0x34 < *(byte *)(param_1 + (param_2 + 1))) {
    for (; lVar2 = (longlong)param_2, *(char *)(param_1 + lVar2) == '9'; param_2 = param_2 + -1) {
      *(undefined1 *)(param_1 + lVar2) = 0x30;
    }
    pcVar1 = (char *)(param_1 + lVar2);
    *pcVar1 = *pcVar1 + '\x01';
    uVar3 = CONCAT71((int7)((ulonglong)pcVar1 >> 8),param_2 == -1);
  }
  return uVar3;
}

