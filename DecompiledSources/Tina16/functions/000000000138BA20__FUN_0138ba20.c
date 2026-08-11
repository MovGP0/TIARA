/* Ghidra address: 0138ba20 */
/* Ghidra symbol: FUN_0138ba20 */


void FUN_0138ba20(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_1 + 0x7ed) != '\0') {
    FUN_010e4410(param_1,param_1);
    FUN_010e4300(param_1,6,1000,0);
    (**(code **)(**(longlong **)(param_1 + 0xe88) + 0x180))(*(longlong **)(param_1 + 0xe88));
    cVar1 = FUN_010e1a60(param_1);
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x7fa) != '\b') {
        if (*(char *)(param_1 + 0x7fa) != '\x04') goto LAB_0138bac8;
        cVar1 = (**(code **)(**(longlong **)(param_1 + 0xe88) + 0x148))
                          (*(longlong **)(param_1 + 0xe88));
        if (cVar1 != '\0') goto LAB_0138bac8;
      }
      uVar2 = FUN_010e1b10(param_1);
      uVar2 = FUN_004113f0(uVar2,&PTR_FUN_01133e90);
      uVar3 = FUN_0065b870(uVar2);
      FUN_011390a0(uVar2,uVar3);
    }
  }
LAB_0138bac8:
  *(undefined1 *)(param_1 + 0x7ec) = 1;
  return;
}

