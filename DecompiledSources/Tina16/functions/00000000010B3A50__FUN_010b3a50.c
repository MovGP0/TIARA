/* Ghidra address: 010b3a50 */
/* Ghidra symbol: FUN_010b3a50 */


undefined8 FUN_010b3a50(longlong param_1,int param_2)

{
  undefined8 uVar1;
  
  if (((param_2 == 4) || (param_2 == 0x800)) && ((*(uint *)(param_1 + 0x2a) & 0x2000) != 0)) {
    uVar1 = CONCAT71((uint7)(uint3)(*(uint *)(param_1 + 0x2a) >> 8),1);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

