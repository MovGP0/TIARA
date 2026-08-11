/* Ghidra address: 010f0e80 */
/* Ghidra symbol: FUN_010f0e80 */


ushort FUN_010f0e80(ushort *param_1)

{
  ushort *puVar1;
  ushort uVar2;
  
  uVar2 = 0;
  puVar1 = param_1 + 0xb;
  for (; param_1 < puVar1; param_1 = param_1 + 2) {
    uVar2 = uVar2 ^ *param_1;
  }
  return uVar2;
}

