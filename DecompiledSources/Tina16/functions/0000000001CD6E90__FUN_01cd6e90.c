/* Ghidra address: 01cd6e90 */
/* Ghidra symbol: FUN_01cd6e90 */


longlong * FUN_01cd6e90(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*(int *)(*(longlong *)(param_1 + 0xf8) + 0x10) == 1) {
    uVar2 = FUN_004aeac0(*(longlong *)(param_1 + 0xf8),0);
    cVar1 = FUN_004113d0(uVar2,&PTR_FUN_01aae560);
    if (cVar1 == '\0') {
      uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xf8),0);
      cVar1 = FUN_004113d0(uVar2,&PTR_FUN_01aaff18);
      if (cVar1 == '\0') {
        FUN_00414ad0(param_2,&DAT_01cd6f6c);
      }
      else {
        uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xf8),0);
        FUN_01ab6de0(uVar2,param_2);
      }
    }
    else {
      uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xf8),0);
      FUN_01ab2940(uVar2,param_2);
    }
  }
  else {
    FUN_00414ad0(param_2,&DAT_01cd6f6c);
  }
  if (*param_2 == 0) {
    FUN_00414ad0(param_2,L"Default");
  }
  return param_2;
}

