/* Ghidra address: 01b37eb0 */
/* Ghidra symbol: FUN_01b37eb0 */


undefined8 FUN_01b37eb0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(*param_1 + 0x18);
  *param_1 = lVar1;
  if (*param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar2;
}

