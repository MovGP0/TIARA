/* Ghidra address: 00f2e3d0 */
/* Ghidra symbol: FUN_00f2e3d0 */


undefined8 FUN_00f2e3d0(longlong param_1,int param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  uVar1 = *(longlong *)(param_1 + 8) + (longlong)param_2;
  if (*(ulonglong *)(param_1 + 0x18) < uVar1) {
    param_2 = *(int *)(param_1 + 0x30) + param_2;
    if (*(int *)(param_1 + 0x34) < param_2) {
      uVar2 = 0;
    }
    else {
      uVar2 = CONCAT71((uint7)(uint3)((uint)param_2 >> 8),1);
    }
  }
  else {
    uVar2 = CONCAT71((int7)(uVar1 >> 8),1);
  }
  return uVar2;
}

