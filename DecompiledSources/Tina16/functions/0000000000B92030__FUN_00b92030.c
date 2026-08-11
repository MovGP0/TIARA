/* Ghidra address: 00b92030 */
/* Ghidra symbol: FUN_00b92030 */


int FUN_00b92030(undefined8 param_1,undefined1 *param_2,int param_3)

{
  int iVar1;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  iVar1 = FUN_0043fc00(param_1);
  if (iVar1 != param_3) {
    *param_2 = 1;
  }
  return iVar1;
}

