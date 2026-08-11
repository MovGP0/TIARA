/* Ghidra address: 01be3fd0 */
/* Ghidra symbol: FUN_01be3fd0 */


void FUN_01be3fd0(longlong param_1,longlong *param_2)

{
  code *pcVar1;
  longlong lVar2;
  
  if ((*(char *)(*(longlong *)(param_1 + 0x50) + 0x538) != '\0') &&
     (*(int *)(*(longlong *)(*param_2 + 0x80) + 0x94) == -99999)) {
    if (*(char *)(param_1 + 0x58) == '\0') {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x568);
      if (*(char *)(lVar2 + 0xa9) == '\0') {
        FUN_01bd5d50(*(undefined8 *)(param_1 + 0x50));
      }
    }
    else {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x560);
      if (*(char *)(lVar2 + 0xa9) == '\0') {
        FUN_01bd6080(*(undefined8 *)(param_1 + 0x50),0);
      }
    }
    do {
      if (*(int *)(*(longlong *)(*param_2 + 0x80) + 0x94) != -99999) {
        return;
      }
      pcVar1 = (code *)FUN_00411550(lVar2,0xffea);
      (*pcVar1)(lVar2);
    } while (*(char *)(lVar2 + 0xa9) != '\0');
  }
  return;
}

