/* Ghidra address: 006f6650 */
/* Ghidra symbol: FUN_006f6650 */


void FUN_006f6650(longlong *param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,
                 undefined1 param_5)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_006f7390(param_1,param_3,param_4);
  if (lVar1 != 0) {
    lVar2 = FUN_006f7090(param_1);
    if ((lVar1 != lVar2) || (lVar1 == param_1[0xaa])) {
      param_1[0xaa] = 0;
      (**(code **)(*param_2 + 0x30))(param_2);
      (**(code **)(*param_1 + 0x198))(param_1);
      if (lVar2 != 0) {
        FUN_006ef2d0(lVar2,1,0);
      }
      FUN_006ef2d0(lVar1,1,param_5);
      (**(code **)(*param_1 + 0x198))(param_1);
      (**(code **)(*param_2 + 0x40))(param_2);
    }
  }
  return;
}

