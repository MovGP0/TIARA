/* Ghidra address: 00cd7390 */
/* Ghidra symbol: FUN_00cd7390 */


void FUN_00cd7390(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  
  if (DAT_01eaf028 != (code *)0x0) {
    if ((DAT_01eaf030 != 0) && (cVar1 = FUN_00cd71e0(DAT_01eaf030,&DAT_00401a88), cVar1 == '\0')) {
      return;
    }
    (*DAT_01eaf028)(DAT_01eaf030,param_1,param_2,param_3);
  }
  return;
}

