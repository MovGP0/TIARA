/* Ghidra address: 00456030 */
/* Ghidra symbol: FUN_00456030 */


undefined8 FUN_00456030(short param_1,longlong param_2,int param_3)

{
  short sVar1;
  longlong lVar2;
  
  lVar2 = 0;
  while( true ) {
    if (param_3 < lVar2) {
      return 0;
    }
    sVar1 = *(short *)(param_2 + lVar2 * 2);
    if (sVar1 == param_1) break;
    lVar2 = lVar2 + 1;
  }
  return CONCAT71((uint7)(byte)((ushort)sVar1 >> 8),1);
}

