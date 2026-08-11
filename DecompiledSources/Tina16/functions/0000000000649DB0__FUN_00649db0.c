/* Ghidra address: 00649db0 */
/* Ghidra symbol: FUN_00649db0 */


longlong FUN_00649db0(undefined8 *param_1)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = thunk_FUN_04129e10(*param_1);
  while( true ) {
    if (lVar2 == 0) {
      return 0;
    }
    cVar1 = FUN_00649d30(lVar2);
    if (cVar1 != '\0') break;
    lVar2 = thunk_FUN_03de17fb(lVar2);
  }
  return lVar2;
}

