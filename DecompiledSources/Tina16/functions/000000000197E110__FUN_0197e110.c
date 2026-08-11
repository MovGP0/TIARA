/* Ghidra address: 0197e110 */
/* Ghidra symbol: FUN_0197e110 */


undefined8 FUN_0197e110(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = 0;
  if (0 < *(int *)(*(longlong *)(param_1 + 0x20) + 0x10)) {
    lVar2 = FUN_004aeac0(*(longlong *)(param_1 + 0x20),0);
    uVar1 = *(undefined8 *)(lVar2 + 8);
  }
  return uVar1;
}

