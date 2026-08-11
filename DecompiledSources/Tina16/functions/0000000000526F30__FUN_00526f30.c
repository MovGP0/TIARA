/* Ghidra address: 00526f30 */
/* Ghidra symbol: FUN_00526f30 */


undefined4 FUN_00526f30(undefined8 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 local_res8 [4];
  
  local_res8[0] = param_1;
  uVar3 = FUN_00458370(local_res8);
  if ((byte)uVar3 < 8) {
    uVar1 = (int)CONCAT71((int7)((ulonglong)uVar3 >> 8),1) << ((byte)uVar3 & 0x1f);
    uVar2 = CONCAT31((int3)(uVar1 >> 8),(uVar1 & 0xc0) != 0);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

