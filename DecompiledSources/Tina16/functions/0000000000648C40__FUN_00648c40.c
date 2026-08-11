/* Ghidra address: 00648c40 */
/* Ghidra symbol: FUN_00648c40 */


undefined1 FUN_00648c40(longlong param_1,longlong param_2,int *param_3)

{
  longlong lVar1;
  
  *param_3 = 0;
  while( true ) {
    if (*(int *)(param_1 + 0x10) <= *param_3) {
      return 0;
    }
    lVar1 = FUN_004aeac0(param_1,*param_3);
    if (*(longlong *)(lVar1 + 8) == param_2) break;
    *param_3 = *param_3 + 1;
  }
  return 1;
}

