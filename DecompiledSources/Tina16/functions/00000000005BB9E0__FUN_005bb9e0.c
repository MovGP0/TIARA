/* Ghidra address: 005bb9e0 */
/* Ghidra symbol: FUN_005bb9e0 */


undefined2 FUN_005bb9e0(undefined8 param_1,ushort param_2)

{
  char cVar1;
  longlong lVar2;
  
  if (param_2 == 2) {
    cVar1 = FUN_00448b30();
    if (cVar1 != '\0') {
      lVar2 = 1;
      goto LAB_005bb9fc;
    }
  }
  lVar2 = 0;
LAB_005bb9fc:
  return *(undefined2 *)(PTR_DAT_020038d0 + (ulonglong)param_2 * 2 + lVar2 * 0x18 + -2);
}

