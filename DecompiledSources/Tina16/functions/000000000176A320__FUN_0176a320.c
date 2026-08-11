/* Ghidra address: 0176a320 */
/* Ghidra symbol: FUN_0176a320 */


void FUN_0176a320(longlong param_1,undefined4 param_2,int *param_3,int *param_4)

{
  longlong lVar1;
  undefined1 local_56 [21];
  short local_41;
  short local_3f;
  
  if (*(longlong *)(param_1 + 0x68) == 0) {
    *param_3 = 0;
    *param_4 = 0;
  }
  else {
    lVar1 = FUN_00c41090(*(longlong *)(param_1 + 0x68),0,0,0);
    if (lVar1 == 0) {
      lVar1 = FUN_00c41110(*(undefined8 *)(param_1 + 0x68));
    }
    FUN_00c3d330(lVar1,local_56,param_2);
    *param_3 = (int)local_41;
    *param_4 = (int)local_3f;
  }
  return;
}

