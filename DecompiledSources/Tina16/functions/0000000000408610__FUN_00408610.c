/* Ghidra address: 00408610 */
/* Ghidra symbol: FUN_00408610 */


undefined8 FUN_00408610(longlong param_1,ulonglong param_2)

{
  undefined8 uVar1;
  
  if ((param_2 < 0x10000) || ((param_2 & 3) != 0)) {
    uVar1 = 0;
  }
  else {
    if ((param_2 < *(ulonglong *)(param_1 + 0x20)) ||
       (*(ulonglong *)(param_1 + 0x20) + *(longlong *)(param_1 + 0x38) < param_2 + 8)) {
      *(undefined8 *)(param_1 + 0x38) = 0;
      thunk_FUN_0413c1ac(param_2,param_1 + 0x20,0x30);
    }
    if ((((*(ulonglong *)(param_1 + 0x38) < 8) || (*(int *)(param_1 + 0x40) != 0x1000)) ||
        ((*(uint *)(param_1 + 0x44) & 0xf6) == 0)) || ((*(uint *)(param_1 + 0x44) & 0x100) != 0)) {
      uVar1 = 0;
    }
    else {
      uVar1 = CONCAT71((uint7)(uint3)(*(uint *)(param_1 + 0x44) >> 8),1);
    }
  }
  return uVar1;
}

