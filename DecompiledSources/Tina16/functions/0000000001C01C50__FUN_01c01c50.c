/* Ghidra address: 01c01c50 */
/* Ghidra symbol: FUN_01c01c50 */


void FUN_01c01c50(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_1[0x93] != param_2) {
    (**(code **)(*param_1 + 0x270))(param_1);
    param_1[0x93] = param_2;
    if (param_2 == 0) {
      (**(code **)(*param_1 + 0x180))(param_1);
    }
    else {
      if (*(int *)(param_1[0x93] + 0x48) != 0x20000000) {
        FUN_0064e030(param_1,*(int *)(param_1[0x93] + 0x48));
      }
      uVar1 = FUN_01bfab50(param_2);
      uVar1 = FUN_01bf9620(uVar1);
      FUN_01c02120(param_1,uVar1);
      param_1[0x93] = param_2;
      (**(code **)(*param_1 + 0x268))(param_1);
      (**(code **)(*param_1 + 0x278))(param_1);
    }
  }
  return;
}

