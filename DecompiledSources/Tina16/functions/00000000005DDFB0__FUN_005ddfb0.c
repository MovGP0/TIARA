/* Ghidra address: 005ddfb0 */
/* Ghidra symbol: FUN_005ddfb0 */


undefined8 FUN_005ddfb0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_005dc860(*(undefined8 *)(param_1 + 0x18));
  if ((lVar2 != 0) && (iVar1 = FUN_005dc4f0(lVar2,param_3), -1 < iVar1)) {
    return 1;
  }
  return 0;
}

