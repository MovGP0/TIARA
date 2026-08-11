/* Ghidra address: 01a40a60 */
/* Ghidra symbol: FUN_01a40a60 */


undefined8 FUN_01a40a60(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  if (((*(int *)PTR_DAT_02002560 == 0) && (*(char *)(param_1 + 0x2b48) == '\0')) &&
     (uVar1 = *(uint *)(*(longlong *)(param_1 + 0x2968) + 0x50), (uVar1 & 1) != 0)) {
    uVar2 = CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

