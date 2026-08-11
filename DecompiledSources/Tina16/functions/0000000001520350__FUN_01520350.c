/* Ghidra address: 01520350 */
/* Ghidra symbol: FUN_01520350 */


void FUN_01520350(longlong *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  ushort uVar2;
  undefined2 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  double local_30;
  
  (**(code **)(**(longlong **)(param_1[0xfb] + 0x4f0) + 0x90))
            (*(longlong **)(param_1[0xfb] + 0x4f0));
  uVar6 = (*(code *)**(undefined8 **)param_1[0x1d9])((undefined8 *)param_1[0x1d9]);
  (**(code **)(**(longlong **)(param_1[0xfb] + 0x4f0) + 0x10))
            (*(longlong **)(param_1[0xfb] + 0x4f0),uVar6);
  uVar1 = (**(code **)(**(longlong **)(param_1[0xfb] + 0x4f0) + 0x28))
                    (*(longlong **)(param_1[0xfb] + 0x4f0));
  *(undefined1 *)((longlong)param_1 + 0xc0a) = uVar1;
  (**(code **)(**(longlong **)(param_1[0x176] + 0x4f0) + 0x90))
            (*(longlong **)(param_1[0x176] + 0x4f0));
  param_1[0x183] = 0;
  iVar4 = (**(code **)(**(longlong **)(param_1[0xfb] + 0x4f0) + 0x28))
                    (*(longlong **)(param_1[0xfb] + 0x4f0));
  if (iVar4 != 0) {
    iVar4 = (**(code **)(**(longlong **)(param_1[0xfb] + 0x4f0) + 0x28))();
    iVar8 = 0;
    if (-1 < iVar4 + -1) {
      do {
        uVar6 = (**(code **)(**(longlong **)(param_1[0xfb] + 0x4f0) + 0x30))
                          (*(longlong **)(param_1[0xfb] + 0x4f0),iVar8);
        lVar7 = FUN_004113f0(uVar6,&PTR_FUN_01106728);
        *(int *)(lVar7 + 0x94) = iVar8;
        *(longlong *)(lVar7 + 0x140) = param_1[0x183];
        iVar8 = iVar8 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    (**(code **)(*(longlong *)param_1[0xfb] + 0x268))((longlong *)param_1[0xfb],0);
    uVar6 = (**(code **)(**(longlong **)(param_1[0xfb] + 0x4f0) + 0x30))
                      (*(longlong **)(param_1[0xfb] + 0x4f0),0);
    lVar7 = FUN_004113f0(uVar6,&PTR_FUN_01106728);
    param_1[0x10e] = lVar7;
    uVar5 = (**(code **)(*(longlong *)param_1[0xfb] + 0x260))((longlong *)param_1[0xfb]);
    (**(code **)(*(longlong *)param_1[0x1d9] + 0x58))((longlong *)param_1[0x1d9],uVar5);
  }
  FUN_0153b6a0(&local_30);
  uVar2 = (**(code **)(*(longlong *)param_1[0x1d9] + 0x128))((longlong *)param_1[0x1d9]);
  local_30 = local_30 / (double)uVar2;
  (**(code **)(*(longlong *)param_1[0x1d9] + 0xf8))((longlong *)param_1[0x1d9],&local_30);
  (**(code **)(*(longlong *)param_1[0x1d9] + 0x118))((longlong *)param_1[0x1d9],local_30);
  uVar6 = (**(code **)(*(longlong *)param_1[0x1d9] + 0x110))((longlong *)param_1[0x1d9]);
  FUN_00b90440(param_1[0x195],uVar6);
  uVar3 = (**(code **)(*(longlong *)param_1[0x1d9] + 0x128))((longlong *)param_1[0x1d9]);
  FUN_00f04fa0(param_1[0x19f],uVar3);
  uVar5 = (**(code **)(*(longlong *)param_1[0x1d9] + 0xa8))((longlong *)param_1[0x1d9]);
  FUN_00f04fa0(param_1[0x19e],uVar5);
  (**(code **)(*param_1 + 0x668))(param_1);
  (**(code **)(*(longlong *)param_1[0x1ae] + 0x268))((longlong *)param_1[0x1ae],0);
  *(undefined4 *)((longlong)param_1 + 0xebc) = 0;
  FUN_0151f130(param_1,0);
  uVar6 = FUN_00b90090(param_1[0x195]);
  *(undefined8 *)(param_1[0x136] + 0x108) = uVar6;
  FUN_01506c40(param_1);
  (**(code **)(*(longlong *)param_1[0x136] + 0x18))((longlong *)param_1[0x136],(char)param_1[0x132])
  ;
  FUN_0151de90(param_1);
  FUN_01506c70(param_1);
  FUN_010f6920(param_1,1);
  FUN_01508e70(param_1,param_2);
  return;
}

