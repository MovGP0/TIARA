/* Ghidra address: 010b6c20 */
/* Ghidra symbol: FUN_010b6c20 */


ushort FUN_010b6c20(ushort *param_1)

{
  ushort *puVar1;
  ushort uVar2;
  
  uVar2 = 0;
  puVar1 = param_1 + 0xb;
  for (; param_1 < puVar1; param_1 = param_1 + 1) {
    uVar2 = uVar2 ^ *param_1;
  }
  return uVar2;
}

