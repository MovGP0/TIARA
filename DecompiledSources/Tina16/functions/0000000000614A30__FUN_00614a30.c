/* Ghidra address: 00614a30 */
/* Ghidra symbol: FUN_00614a30 */


void FUN_00614a30(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = param_1[1];
  if (param_2 != lVar1) {
    if (lVar1 != 0) {
      FUN_00614650(lVar1,param_1);
    }
    if (param_2 != 0) {
      FUN_006145c0(param_2,param_1);
    }
    if ((char)param_1[5] == '\0') {
      (**(code **)(*param_1 + 8))(param_1);
    }
  }
  return;
}

