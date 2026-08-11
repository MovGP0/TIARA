/* Ghidra address: 006ef680 */
/* Ghidra symbol: FUN_006ef680 */


undefined8 FUN_006ef680(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_00416db0(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_2 + 0x30));
  if ((iVar1 == 0) && (*(longlong *)(param_1 + 0x40) == *(longlong *)(param_2 + 0x40))) {
    uVar2 = CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x40) >> 8),1);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

