/* Ghidra address: 019a6fe0 */
/* Ghidra symbol: FUN_019a6fe0 */


undefined8 FUN_019a6fe0(longlong param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((-1 < param_2) && (iVar1 = FUN_019a6fd0(param_1), param_2 < iVar1)) {
    uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x10),param_2);
    return uVar2;
  }
  return 0;
}

