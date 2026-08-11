/* Ghidra address: 01ae9510 */
/* Ghidra symbol: FUN_01ae9510 */


undefined1 FUN_01ae9510(undefined8 param_1,int param_2,longlong param_3)

{
  char cVar1;
  undefined1 uVar2;
  
  if (param_3 == 0) {
    param_3 = FUN_01ad0c80(param_1,0);
  }
  if (param_3 == 0) {
    uVar2 = 0;
  }
  else if (param_2 == 0) {
    cVar1 = FUN_004113d0(param_3,&PTR_FUN_01aae560);
    if (cVar1 == '\0') {
      cVar1 = FUN_004113d0(param_3,&PTR_FUN_01aaff18);
      if (cVar1 == '\0') {
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_01abd060(*(undefined8 *)(param_3 + 0x80));
      }
    }
    else {
      uVar2 = FUN_01abd060(*(undefined8 *)(param_3 + 200));
    }
  }
  else if (param_2 == 1) {
    cVar1 = FUN_004113d0(param_3,&PTR_FUN_01aae560);
    if (cVar1 == '\0') {
      cVar1 = FUN_004113d0(param_3,&PTR_FUN_01aaff18);
      if (cVar1 == '\0') {
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_01abc100(*(undefined8 *)(param_3 + 0x80));
      }
    }
    else {
      uVar2 = FUN_01abc100(*(undefined8 *)(param_3 + 200));
    }
  }
  else {
    cVar1 = FUN_004113d0(param_3,&PTR_FUN_01aae560);
    if (cVar1 == '\0') {
      cVar1 = FUN_004113d0(param_3,&PTR_FUN_01aaff18);
      if (cVar1 == '\0') {
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_01abc280(*(undefined8 *)(param_3 + 0x80));
      }
    }
    else {
      uVar2 = FUN_01abc280(*(undefined8 *)(param_3 + 200));
    }
  }
  return uVar2;
}

