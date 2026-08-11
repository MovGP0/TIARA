/* Ghidra address: 00688630 */
/* Ghidra symbol: FUN_00688630 */


void FUN_00688630(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1[0x9a];
  if (param_2 != (int)lVar1) {
    *(int *)(param_1 + 0x9a) = param_2;
    if (param_1[0x9d] != 0) {
      if (param_2 == -1) {
        FUN_007d6450(param_1[0x9d]);
        FUN_006886b0(param_1,0);
      }
      else {
        (**(code **)(*param_1 + 0x280))(param_1);
        if ((int)lVar1 == -1) {
          uVar2 = FUN_007d56e0(param_1[0x9d]);
          FUN_006886b0(param_1,uVar2);
        }
      }
      (**(code **)(*param_1 + 0x180))(param_1);
    }
  }
  return;
}

