/* Ghidra address: 00692610 */
/* Ghidra symbol: FUN_00692610 */


undefined8 FUN_00692610(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x70);
  if ((lVar1 == 0) || (lVar1 != param_2)) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar2;
}

