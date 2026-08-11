/* Ghidra address: 00bd4560 */
/* Ghidra symbol: FUN_00bd4560 */


void FUN_00bd4560(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (param_2 == 0) {
    uVar4 = FUN_0044d490(&PTR_FUN_00bd2c00,1,L"SetBaseFont: \'Value\' must be specified.");
    FUN_004134c0(uVar4);
  }
  else {
    FUN_00bd4800(param_1);
    (**(code **)*param_1)(param_1);
    lVar3 = FUN_00609e10(param_1[4]);
    (**(code **)(**(longlong **)(lVar3 + 0x70) + 0x10))(*(longlong **)(lVar3 + 0x70),param_2);
    lVar3 = FUN_00609e10(param_1[4]);
    FUN_005fce70(*(undefined8 *)(lVar3 + 0x70),0);
    plVar1 = (longlong *)param_1[3];
    (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
    (**(code **)(*plVar1 + 0x40))(plVar1,(char)param_1[5]);
    uVar2 = (**(code **)(*plVar1 + 0x20))(plVar1);
    *(undefined4 *)((longlong)param_1 + 0x2c) = uVar2;
    uVar2 = (**(code **)(*plVar1 + 0x28))(plVar1);
    *(undefined4 *)(param_1 + 6) = uVar2;
    (**(code **)(*param_1 + 0x60))(param_1,*(undefined1 *)(*(longlong *)(param_2 + 0x18) + 0x31));
  }
  return;
}

