/* Ghidra address: 00651270 */
/* Ghidra symbol: FUN_00651270 */


void FUN_00651270(longlong param_1)

{
  undefined4 uVar1;
  
  if (((*(ushort *)(param_1 + 0x34) & 0x10) == 0) || ((*(uint *)(param_1 + 0xa0) & 0x400) != 0)) {
    if ((*(char *)(param_1 + 0xa9) == '\0') || ((*(uint *)(param_1 + 0xa0) & 0x40) == 0)) {
      uVar1 = 0;
    }
    else {
      uVar1 = (undefined4)CONCAT71((uint7)(uint3)(*(uint *)(param_1 + 0xa0) >> 8),1);
    }
    FUN_0064e4c0(param_1,1,uVar1);
  }
  return;
}

