/* Ghidra address: 01695520 */
/* Ghidra symbol: FUN_01695520 */


undefined8 FUN_01695520(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x318);
  if ((iVar1 == 1) || (iVar1 == 2)) {
    uVar2 = CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

