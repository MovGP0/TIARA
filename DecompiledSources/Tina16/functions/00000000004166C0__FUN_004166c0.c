/* Ghidra address: 004166c0 */
/* Ghidra symbol: FUN_004166c0 */


void FUN_004166c0(undefined1 *param_1,undefined2 param_2,int param_3)

{
  int iVar1;
  undefined2 local_res10 [12];
  undefined1 local_118 [256];
  
  if (0xff < param_3) {
    param_3 = 0xff;
  }
  local_res10[0] = param_2;
  iVar1 = FUN_004146f0(local_118,0xff,local_res10,1);
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  else if (param_3 < iVar1) {
    iVar1 = param_3;
  }
  *param_1 = (char)iVar1;
  if (0 < iVar1) {
    FUN_00409a70(local_118,param_1 + 1,(longlong)iVar1);
  }
  return;
}

