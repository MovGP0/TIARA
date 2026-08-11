/* Ghidra address: 01365790 */
/* Ghidra symbol: FUN_01365790 */


undefined8 FUN_01365790(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(int *)(param_2 + 0x10) == 2) {
    lVar1 = FUN_004aeac0(param_2,0);
    lVar2 = FUN_004aeac0(param_2,1);
    if (lVar1 == lVar2) {
      return 1;
    }
  }
  return 0;
}

