/* Ghidra address: 015103c0 */
/* Ghidra symbol: FUN_015103c0 */


void FUN_015103c0(longlong *param_1)

{
  longlong *plVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  double dVar7;
  
  (**(code **)(**(longlong **)(param_1[0xfb] + 0x4f0) + 0x90))
            (*(longlong **)(param_1[0xfb] + 0x4f0));
  uVar5 = (*(code *)**(undefined8 **)param_1[0x1dc])((undefined8 *)param_1[0x1dc]);
  (**(code **)(**(longlong **)(param_1[0xfb] + 0x4f0) + 0x10))
            (*(longlong **)(param_1[0xfb] + 0x4f0),uVar5);
  iVar3 = (**(code **)(**(longlong **)(param_1[0xfb] + 0x4f0) + 0x28))
                    (*(longlong **)(param_1[0xfb] + 0x4f0));
  if (iVar3 != 0) {
    uVar4 = (**(code **)(*(longlong *)param_1[0x1dc] + 0x60))((longlong *)param_1[0x1dc]);
    (**(code **)(*(longlong *)param_1[0xfb] + 0x268))((longlong *)param_1[0xfb],uVar4);
    uVar5 = (**(code **)(**(longlong **)(param_1[0xfb] + 0x4f0) + 0x30))
                      (*(longlong **)(param_1[0xfb] + 0x4f0),0);
    lVar6 = FUN_004113f0(uVar5,&PTR_FUN_01106728);
    param_1[0x10e] = lVar6;
    uVar4 = (**(code **)(*(longlong *)param_1[0xfb] + 0x260))((longlong *)param_1[0xfb]);
    (**(code **)(*(longlong *)param_1[0x1dc] + 0x58))((longlong *)param_1[0x1dc],uVar4);
  }
  if (PTR_DAT_02004010[0x7c6] != '\0') {
    (**(code **)(*(longlong *)param_1[0x1dc] + 0x128))((longlong *)param_1[0x1dc]);
  }
  param_1[0x18a] = 0;
  dVar7 = (double)(**(code **)(*(longlong *)param_1[0x1dc] + 0xc0))((longlong *)param_1[0x1dc]);
  iVar3 = (**(code **)(*(longlong *)param_1[0x1dc] + 0xe8))((longlong *)param_1[0x1dc]);
  param_1[0x18b] = (longlong)(dVar7 * (double)iVar3);
  FUN_00b90440(param_1[0x172],param_1[0x18a]);
  uVar5 = (**(code **)(*(longlong *)param_1[0x1dc] + 0xc0))((longlong *)param_1[0x1dc]);
  FUN_00b90440(param_1[0x19b],uVar5);
  uVar4 = (**(code **)(*(longlong *)param_1[0x1dc] + 0xe8))((longlong *)param_1[0x1dc]);
  FUN_00f04fa0(param_1[0x1bf],uVar4);
  lVar6 = param_1[0x1db];
  *(longlong *)(lVar6 + 0x10) = param_1[0x18a];
  *(undefined2 *)(lVar6 + 8) = 0;
  *(longlong *)(lVar6 + 0x18) = param_1[0x18b];
  uVar2 = (**(code **)(*(longlong *)param_1[0x1dc] + 0xe8))((longlong *)param_1[0x1dc]);
  *(undefined2 *)(lVar6 + 10) = uVar2;
  (**(code **)(*param_1 + 0x668))(param_1);
  FUN_01513140(param_1);
  plVar1 = (longlong *)param_1[0x136];
  plVar1[0xf] = param_1[0x18a];
  plVar1[0x10] = param_1[0x18b];
  lVar6 = (**(code **)(*(longlong *)param_1[0x1dc] + 0xc0))((longlong *)param_1[0x1dc]);
  plVar1[0x21] = lVar6;
  (**(code **)(*plVar1 + 0x18))(plVar1,(char)param_1[0x132]);
  FUN_01506c70(param_1);
  FUN_010f67e0(param_1,1,1);
  return;
}

