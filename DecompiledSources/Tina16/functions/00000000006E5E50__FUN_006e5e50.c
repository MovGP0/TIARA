/* Ghidra address: 006e5e50 */
/* Ghidra symbol: FUN_006e5e50 */


longlong FUN_006e5e50(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = FUN_006dd3e0(param_2);
  while ((lVar2 != 0 && (cVar1 = FUN_006e5e00(param_1,lVar2), cVar1 != '\0'))) {
    lVar2 = FUN_006dd3e0(lVar2);
  }
  if (lVar2 == 0) {
    lVar2 = FUN_006dd430(param_2);
    while ((lVar2 != 0 && (cVar1 = FUN_006e5e00(param_1,lVar2), cVar1 != '\0'))) {
      lVar2 = FUN_006dd430(lVar2);
    }
  }
  return lVar2;
}

