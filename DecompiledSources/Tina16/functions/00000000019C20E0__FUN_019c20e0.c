/* Ghidra address: 019c20e0 */
/* Ghidra symbol: FUN_019c20e0 */


int FUN_019c20e0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_2;
  if (param_1 < param_2) {
    iVar1 = param_1;
  }
  iVar2 = param_4;
  if (param_3 < param_4) {
    iVar2 = param_3;
  }
  if (iVar1 <= iVar2) {
    iVar1 = iVar2;
  }
  if (param_1 <= param_2) {
    param_1 = param_2;
  }
  if (param_4 < param_3) {
    param_4 = param_3;
  }
  if (param_4 <= param_1) {
    param_1 = param_4;
  }
  iVar1 = (param_1 - iVar1) + 1;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  return iVar1;
}

