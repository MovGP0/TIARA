/* Ghidra address: 00f335f0 */
/* Ghidra symbol: FUN_00f335f0 */


undefined8 FUN_00f335f0(longlong param_1,uint param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (*(uint *)(lVar1 + 0x10) <= param_2) {
    FUN_00594f90();
  }
  uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 8) + (longlong)(int)param_2 * 8);
  FUN_00599670(lVar1 + 8,param_2,3);
  return uVar2;
}

