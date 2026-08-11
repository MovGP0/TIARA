/* Ghidra address: 015661f0 */
/* Ghidra symbol: FUN_015661f0 */


undefined8 FUN_015661f0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = FUN_01566240(param_1);
  if (lVar2 != 0) {
    lVar2 = FUN_004aeac0(lVar2,param_3);
    if ((*(longlong *)(param_1 + 8) != 0) &&
       (cVar1 = FUN_01563760(*(longlong *)(param_1 + 8),*(undefined4 *)(lVar2 + 8)), cVar1 != '\0'))
    {
      return 1;
    }
  }
  return 0;
}

