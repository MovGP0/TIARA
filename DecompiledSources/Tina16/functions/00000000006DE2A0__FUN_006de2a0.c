/* Ghidra address: 006de2a0 */
/* Ghidra symbol: FUN_006de2a0 */


undefined8 FUN_006de2a0(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_00416db0(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_2 + 0x10));
  if ((iVar1 == 0) && (*(longlong *)(param_1 + 0x18) == *(longlong *)(param_2 + 0x18))) {
    uVar2 = CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x18) >> 8),1);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

