/* Ghidra address: 010b3ad0 */
/* Ghidra symbol: FUN_010b3ad0 */


undefined8 FUN_010b3ad0(longlong param_1,int param_2)

{
  undefined8 uVar1;
  
  if ((param_2 == 8) && ((*(uint *)(param_1 + 0x2a) & 1) == 0)) {
    uVar1 = CONCAT71((uint7)(uint3)(*(uint *)(param_1 + 0x2a) >> 8),1);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

