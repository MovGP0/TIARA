/* Ghidra address: 009749d0 */
/* Ghidra symbol: FUN_009749d0 */


void FUN_009749d0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  cVar2 = FUN_004113d0(param_2,&PTR_FUN_0091b3a8);
  if (cVar2 != '\0') {
    uVar3 = FUN_004113f0(param_2,&PTR_FUN_0091b3a8);
    (**(code **)(*param_1 + 0xa0))(param_1,uVar3);
    return;
  }
  cVar2 = FUN_004113d0(param_2,&PTR_FUN_0091b1a0);
  if (cVar2 == '\0') {
    if (param_2 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = param_2 + 0x80;
    }
    FUN_00974540(param_1,*(undefined8 *)(param_2 + 0x38),lVar4);
    cVar2 = FUN_004113d0(param_2,&PTR_FUN_0091dac8);
    if (cVar2 == '\0') {
      cVar2 = FUN_004113d0(param_2,&PTR_FUN_0091c178);
      if (cVar2 == '\0') {
        cVar2 = FUN_004113d0(param_2,&PTR_FUN_0091af90);
        if (((cVar2 != '\0') || (cVar2 = FUN_004113d0(param_2,&PTR_FUN_0091d288), cVar2 != '\0')) ||
           (cVar2 = FUN_004113d0(param_2,&PTR_FUN_0091d740), cVar2 != '\0')) {
          (**(code **)(*param_1 + 0xc0))(param_1);
        }
        plVar1 = (longlong *)param_1[0x11];
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x90))(plVar1,param_2);
        }
        return;
      }
      plVar1 = (longlong *)param_1[0x11];
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x90))(plVar1,param_2);
      }
      if (param_2 == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = param_2 + 0x80;
      }
      (**(code **)(*param_1 + 0xb0))(param_1,*(undefined8 *)(param_2 + 0x38),lVar4);
      return;
    }
    uVar3 = FUN_004113f0(param_2,&PTR_FUN_0091dac8);
    (**(code **)(*param_1 + 0xa8))(param_1,uVar3);
    return;
  }
  (**(code **)(*param_1 + 0xc0))(param_1);
  plVar1 = (longlong *)param_1[0x11];
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  (**(code **)(*plVar1 + 0x90))(plVar1,param_2);
  return;
}

