/* Ghidra address: 00c29d60 */
/* Ghidra symbol: FUN_00c29d60 */


undefined8 FUN_00c29d60(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if ((*(int *)(*(longlong *)(param_1 + 0x40) + 0x10) < 1) &&
     (lVar1 = FUN_00c360e0(*(undefined8 *)(param_1 + 8)), *(int *)(lVar1 + 0x10) != 0)) {
    uVar2 = FUN_00c360e0(*(undefined8 *)(param_1 + 8));
    return uVar2;
  }
  return *(undefined8 *)(param_1 + 0x40);
}

