/* Ghidra address: 0068ba70 */
/* Ghidra symbol: FUN_0068ba70 */


ulonglong FUN_0068ba70(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  bool bVar2;
  
  if (*(byte *)(param_1 + 0x4cc) < 8) {
    bVar2 = ((int)CONCAT71((int7)((ulonglong)param_2 >> 8),1) << (*(byte *)(param_1 + 0x4cc) & 0x1f)
            & 0x18U) != 0;
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    uVar1 = (ulonglong)*(uint *)(param_1 + 0x49c);
  }
  else {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x4a0) + 0x28))(*(longlong **)(param_1 + 0x4a0));
  }
  return uVar1;
}

