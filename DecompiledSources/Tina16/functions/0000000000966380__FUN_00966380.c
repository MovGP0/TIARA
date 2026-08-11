/* Ghidra address: 00966380 */
/* Ghidra symbol: FUN_00966380 */


char FUN_00966380(undefined8 param_1)

{
  char cVar1;
  longlong lVar2;
  char local_11;
  undefined8 local_10;
  
  local_10 = 0;
  lVar2 = FUN_00966240(param_1);
  local_11 = *(char *)(lVar2 + 0xab);
  if (local_11 == '\n') {
    FUN_00966410(param_1,&local_10);
    cVar1 = FUN_008ffe10(local_10);
    if (cVar1 != '\0') {
      local_11 = '\r';
    }
  }
  FUN_00414520(&local_10);
  return local_11;
}

