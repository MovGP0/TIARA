/* Ghidra address: 00410d60 */
/* Ghidra symbol: FUN_00410d60 */


undefined8 FUN_00410d60(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = param_1[1];
  if ((lVar2 == param_2[1]) && (lVar2 = *param_1, lVar2 == *param_2)) {
    uVar1 = 0;
  }
  else {
    uVar1 = CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
  }
  return uVar1;
}

