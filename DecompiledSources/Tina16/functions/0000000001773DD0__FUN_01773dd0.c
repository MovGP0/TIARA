/* Ghidra address: 01773dd0 */
/* Ghidra symbol: FUN_01773dd0 */


undefined8 FUN_01773dd0(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = *(uint *)(*(longlong *)(param_1 + 0x110) + 0x2a);
  if ((uVar1 & 0x1000) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
  }
  return uVar2;
}

