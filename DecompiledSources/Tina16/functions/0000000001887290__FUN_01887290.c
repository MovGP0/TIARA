/* Ghidra address: 01887290 */
/* Ghidra symbol: FUN_01887290 */


undefined8 FUN_01887290(longlong param_1,int param_2)

{
  int iVar1;
  
  if (((0 < param_2) && (iVar1 = FUN_01888a70(*(undefined8 *)(param_1 + 8)), param_2 <= iVar1)) &&
     (*(int *)(*(longlong *)(param_1 + 0x10) + 0x10) != 0)) {
    return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x10) >> 8),1);
  }
  return 0;
}

