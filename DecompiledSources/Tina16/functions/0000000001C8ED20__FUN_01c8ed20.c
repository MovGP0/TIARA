/* Ghidra address: 01c8ed20 */
/* Ghidra symbol: FUN_01c8ed20 */


void FUN_01c8ed20(longlong param_1)

{
  char cVar1;
  
  if (*PTR_DAT_020052b8 == '\0') {
    cVar1 = FUN_01c8cee0(param_1);
    if (cVar1 == '\0') {
      cVar1 = FUN_019a4e70(*(undefined8 *)(param_1 + 0x27a8));
      if (((cVar1 != '\0') && (*(int *)(param_1 + 0x17f4) == 0)) &&
         (*(char *)(param_1 + 0x27c1) == '\0')) {
        FUN_019a4ec0(*(undefined8 *)(param_1 + 0x27a8),0);
        FUN_0064e770(*(undefined8 *)(param_1 + 0xa10));
      }
    }
  }
  else {
    FUN_017fe450(*(undefined8 *)PTR_DAT_02001d08,"Redo()",0,1);
    FUN_0135b700(*(undefined8 *)PTR_DAT_02005a38,*(undefined8 *)(param_1 + 0x27a8));
  }
  return;
}

