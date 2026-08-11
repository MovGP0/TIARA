/* Ghidra address: 00416910 */
/* Ghidra symbol: FUN_00416910 */


void FUN_00416910(undefined1 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  undefined1 local_218 [512];
  
  if (0xff < param_3) {
    param_3 = 0xff;
  }
  iVar1 = 0;
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + -4);
  }
  if (param_3 <= iVar1) {
    iVar1 = param_3;
  }
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_004146f0(local_218,0x1ff,param_2,iVar1);
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    else if (param_3 < iVar1) {
      iVar1 = param_3;
    }
  }
  *param_1 = (char)iVar1;
  if (0 < iVar1) {
    FUN_00409a70(local_218,param_1 + 1,(longlong)iVar1);
  }
  return;
}

