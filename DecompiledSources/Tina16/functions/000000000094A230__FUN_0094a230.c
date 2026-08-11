/* Ghidra address: 0094a230 */
/* Ghidra symbol: FUN_0094a230 */


longlong FUN_0094a230(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = 0;
  if (param_2 != param_1[4]) {
    lVar1 = (**(code **)(*param_1 + 0x30))(param_1,param_2);
    if (lVar1 == 0) {
      lVar1 = (**(code **)(*param_1 + 0x20))(param_1,param_2);
    }
    else {
      lVar2 = (**(code **)(*param_1 + 8))(param_1,lVar1);
      if (lVar2 != 0) {
        lVar1 = lVar2;
      }
    }
  }
  return lVar1;
}

