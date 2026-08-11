/* Ghidra address: 00d43b90 */
/* Ghidra symbol: FUN_00d43b90 */


undefined8 FUN_00d43b90(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x88);
  if ((lVar1 == 0) || (lVar1 != param_2)) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar2;
}

