/* Ghidra address: 01c8ec70 */
/* Ghidra symbol: FUN_01c8ec70 */


void FUN_01c8ec70(longlong param_1)

{
  char cVar1;
  
  if (*PTR_DAT_020052b8 == '\0') {
    cVar1 = FUN_01c8cee0(param_1);
    if (cVar1 == '\0') {
      cVar1 = FUN_019a4e30(*(undefined8 *)(param_1 + 0x27a8));
      if (((cVar1 != '\0') && (*(int *)(param_1 + 0x17f4) == 0)) &&
         (*(char *)(param_1 + 0x27c1) == '\0')) {
        FUN_019a4ec0(*(undefined8 *)(param_1 + 0x27a8),1);
        FUN_0064e770(*(undefined8 *)(param_1 + 0xa10));
      }
    }
  }
  else {
    FUN_017fe450(*(undefined8 *)PTR_DAT_02001d08,"Undo()",0,1);
    FUN_0135b680(*(undefined8 *)PTR_DAT_02005a38,*(undefined8 *)(param_1 + 0x27a8));
  }
  return;
}

