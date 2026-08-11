/* Ghidra address: 0109d420 */
/* Ghidra symbol: FUN_0109d420 */


void FUN_0109d420(longlong *param_1)

{
  int iVar1;
  
  if (param_1[0x130] != 0) {
    iVar1 = (**(code **)(*param_1 + 0x2f0))(param_1);
    (**(code **)(*(longlong *)param_1[0x130] + 0x180))((longlong *)param_1[0x130]);
    if ((*(longlong *)(param_1[0x2cc] + 0x3548) != 0) && (iVar1 != -1)) {
      FUN_0109f8b0(param_1,iVar1);
      FUN_00bfcc50(param_1[0x130],iVar1 - *(int *)(param_1[0x130] + 0x508) / 2);
    }
  }
  return;
}

