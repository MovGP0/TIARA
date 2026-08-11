/* Ghidra address: 01b590b0 */
/* Ghidra symbol: FUN_01b590b0 */


void FUN_01b590b0(longlong *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  char local_29;
  longlong local_28;
  undefined1 local_19 [9];
  
  local_40[0] = 0;
  local_48 = 0;
  local_50 = 0;
  (**(code **)(*param_1 + 0x2e8))(param_1,L"bmOsc");
  *(undefined1 *)(param_1 + 0xff) = 1;
  *(undefined1 *)((longlong)param_1 + 0x7fa) = 7;
  (**(code **)(*param_1 + 0x450))(param_1);
  *(undefined4 *)((longlong)param_1 + 0x9cc) = 0x18;
  *(undefined1 *)(param_1 + 0x132) = 0xc;
  *(undefined1 *)((longlong)param_1 + 0xd6c) = 1;
  FUN_010f5a80(param_1,param_2);
  if (*(char *)((longlong)param_1 + 0x7f9) == '\0') {
    lVar4 = FUN_01b5e190(&PTR_FUN_01b5c4f8,1,(int)param_1[0xfd],param_1[0xfe]);
    param_1[0x1ab] = lVar4;
  }
  else {
    if (*(char *)((longlong)param_1 + 0x7f9) != '\x01') goto LAB_01b59983;
    lVar4 = FUN_01b5d040(&PTR_FUN_01b5b960,1,(int)param_1[0xfd],param_1[0xfe]);
    param_1[0x1ab] = lVar4;
    plVar5 = (longlong *)FUN_004113f0(lVar4,&PTR_FUN_01b5b960);
    (**(code **)(*plVar5 + 0x120))(plVar5,local_19);
  }
  (**(code **)(*(longlong *)param_1[0x1ab] + 0x48))((longlong *)param_1[0x1ab],local_19);
  FUN_0064dd90(param_1,&local_48);
  FUN_004169a0(&local_50,param_1[0x1ab] + 0x23);
  FUN_00416cd0(local_40,3,local_48,&DAT_01b59a00,local_50);
  FUN_0064de00(param_1,local_40[0]);
  local_29 = '\x01';
  (**(code **)(*(longlong *)param_1[0x1ab] + 0x118))((longlong *)param_1[0x1ab],&local_29);
  (**(code **)(*(longlong *)param_1[0x1a2] + 0x128))((longlong *)param_1[0x1a2],local_29);
  local_29 = '\0';
  (**(code **)(*(longlong *)param_1[0x1ab] + 0x118))((longlong *)param_1[0x1ab],&local_29);
  (**(code **)(*(longlong *)param_1[0x1a1] + 0x128))((longlong *)param_1[0x1a1],local_29 == '\0');
  (**(code **)(*(longlong *)param_1[0x1ab] + 0x118))
            ((longlong *)param_1[0x1ab],(longlong)param_1 + 0xd6c);
  *(undefined2 *)((longlong)param_1 + 0xd2a) = 0;
  *(undefined1 *)(param_1 + 0x1a5) = 0;
  *(undefined2 *)(param_1 + 0x1ad) = 0;
  FUN_0064cf60(param_1,0x1965);
  (**(code **)(**(longlong **)(param_1[0xfb] + 0x4f0) + 0x90))
            (*(longlong **)(param_1[0xfb] + 0x4f0));
  uVar6 = (*(code *)**(undefined8 **)param_1[0x1ab])((undefined8 *)param_1[0x1ab]);
  (**(code **)(**(longlong **)(param_1[0xfb] + 0x4f0) + 0x10))
            (*(longlong **)(param_1[0xfb] + 0x4f0),uVar6);
  uVar1 = (**(code **)(**(longlong **)(param_1[0xfb] + 0x4f0) + 0x28))
                    (*(longlong **)(param_1[0xfb] + 0x4f0));
  *(undefined1 *)((longlong)param_1 + 0xd19) = uVar1;
  iVar2 = (**(code **)(**(longlong **)(param_1[0xfb] + 0x4f0) + 0x28))
                    (*(longlong **)(param_1[0xfb] + 0x4f0));
  if (iVar2 == 0) {
    lVar4 = FUN_01107790(&PTR_FUN_011061a0,1);
    param_1[0x10e] = lVar4;
    (**(code **)(**(longlong **)(param_1[0xfb] + 0x4f0) + 0x80))
              (*(longlong **)(param_1[0xfb] + 0x4f0),0,lVar4);
    (**(code **)(*(longlong *)param_1[0xfb] + 0x268))((longlong *)param_1[0xfb],0);
  }
  else {
    (**(code **)(*(longlong *)param_1[0xfb] + 0x268))((longlong *)param_1[0xfb],0);
    uVar6 = (**(code **)(**(longlong **)(param_1[0xfb] + 0x4f0) + 0x30))
                      (*(longlong **)(param_1[0xfb] + 0x4f0),0);
    lVar4 = FUN_004113f0(uVar6,&PTR_FUN_011061a0);
    param_1[0x10e] = lVar4;
    uVar3 = (**(code **)(*(longlong *)param_1[0xfb] + 0x260))((longlong *)param_1[0xfb]);
    (**(code **)(*(longlong *)param_1[0x1ab] + 0x58))((longlong *)param_1[0x1ab],uVar3);
  }
  (**(code **)(**(longlong **)(param_1[0x197] + 0x4f0) + 0x90))
            (*(longlong **)(param_1[0x197] + 0x4f0));
  uVar6 = (**(code **)(*(longlong *)param_1[0x1ab] + 0x70))((longlong *)param_1[0x1ab]);
  (**(code **)(**(longlong **)(param_1[0x197] + 0x4f0) + 0x10))
            (*(longlong **)(param_1[0x197] + 0x4f0),uVar6);
  iVar2 = (**(code **)(**(longlong **)(param_1[0x197] + 0x4f0) + 0x28))
                    (*(longlong **)(param_1[0x197] + 0x4f0));
  if (iVar2 == 0) {
    lVar4 = FUN_01107790(&PTR_FUN_011061a0,1);
    param_1[0x1ac] = lVar4;
    (**(code **)(**(longlong **)(param_1[0x197] + 0x4f0) + 0x80))
              (*(longlong **)(param_1[0x197] + 0x4f0),0,param_1[0x10e]);
    uVar6 = (**(code **)(*(longlong *)param_1[0x197] + 0x268))((longlong *)param_1[0x197],0);
  }
  else {
    (**(code **)(*(longlong *)param_1[0x197] + 0x268))((longlong *)param_1[0x197],0);
    uVar6 = (**(code **)(**(longlong **)(param_1[0x197] + 0x4f0) + 0x30))
                      (*(longlong **)(param_1[0x197] + 0x4f0),0);
    lVar4 = FUN_004113f0(uVar6,&PTR_FUN_011061a0);
    param_1[0x1ac] = lVar4;
    uVar3 = (**(code **)(*(longlong *)param_1[0x197] + 0x260))((longlong *)param_1[0x197]);
    uVar6 = (**(code **)(*(longlong *)param_1[0x1ab] + 0xb0))((longlong *)param_1[0x1ab],uVar3);
  }
  *(undefined1 *)(param_1[0x10e] + 0x11) = 1;
  FUN_0082a6c0(param_1[0xfa],CONCAT71((int7)((ulonglong)uVar6 >> 8),1) & 0xffffffff);
  *(undefined1 *)((longlong)param_1 + 0xd6a) = 4;
  *(undefined1 *)((longlong)param_1 + 0xd6b) = 1;
  (**(code **)(*(longlong *)param_1[0x1ab] + 0x78))((longlong *)param_1[0x1ab],param_1 + 0x1a3);
  if ((char)param_1[0x1a3] != '\0') {
    (**(code **)(*(longlong *)param_1[0x1ab] + 0xa8))
              ((longlong *)param_1[0x1ab],*(undefined1 *)(param_1[0x10e] + 0x2a));
    (**(code **)(*(longlong *)param_1[0x1ab] + 0x88))
              ((longlong *)param_1[0x1ab],param_1[0x10e] + 0x2a,&local_28,1);
    FUN_00b90440(param_1[0x18c],local_28);
    uVar3 = FUN_0040c770((double)*(byte *)(param_1 + 0x1a3) / 2.0);
    *(char *)(param_1 + 0x1aa) = (char)uVar3;
    (**(code **)(*(longlong *)param_1[0x1ab] + 0xa0))((longlong *)param_1[0x1ab],uVar3);
    (**(code **)(*(longlong *)param_1[0x1ab] + 0x88))
              ((longlong *)param_1[0x1ab],param_1 + 0x1aa,&local_28,1);
    FUN_00b90440(param_1[0x194],local_28);
    param_1[0x1a7] = local_28;
  }
  (**(code **)(**(longlong **)(param_1[0x19f] + 0x4f0) + 0x90))
            (*(longlong **)(param_1[0x19f] + 0x4f0));
  uVar6 = (**(code **)(*(longlong *)param_1[0x1ab] + 0xe0))((longlong *)param_1[0x1ab]);
  (**(code **)(**(longlong **)(param_1[0x19f] + 0x4f0) + 0x10))
            (*(longlong **)(param_1[0x19f] + 0x4f0),uVar6);
  iVar2 = (**(code **)(**(longlong **)(param_1[0x19f] + 0x4f0) + 0x28))
                    (*(longlong **)(param_1[0x19f] + 0x4f0));
  if (iVar2 == 0) {
    (**(code **)(**(longlong **)(param_1[0x19f] + 0x4f0) + 0x78))
              (*(longlong **)(param_1[0x19f] + 0x4f0),0);
    (**(code **)(*(longlong *)param_1[0x19f] + 0x268))((longlong *)param_1[0x19f],0);
  }
  else {
    uVar3 = (**(code **)(*(longlong *)param_1[0x1ab] + 0xe8))((longlong *)param_1[0x1ab]);
    (**(code **)(*(longlong *)param_1[0x19f] + 0x268))((longlong *)param_1[0x19f],uVar3);
  }
  (**(code **)(*(longlong *)param_1[0x1ab] + 0xf8))
            ((longlong *)param_1[0x1ab],(longlong)param_1 + 0xd1b);
  if (*(char *)((longlong)param_1 + 0xd1b) != '\0') {
    local_28 = (**(code **)(*(longlong *)param_1[0x1ab] + 0x100))((longlong *)param_1[0x1ab]);
    (**(code **)(*(longlong *)param_1[0x1ab] + 0x108))
              ((longlong *)param_1[0x1ab],(longlong)param_1 + 0xd1a,&local_28,0);
    (**(code **)(*(longlong *)param_1[0x1ab] + 0x110))
              ((longlong *)param_1[0x1ab],*(undefined1 *)((longlong)param_1 + 0xd1a));
    FUN_00b90440(param_1[0x19b],local_28);
    param_1[0x1a4] = local_28;
  }
  param_1[0x1a9] = 0;
  FUN_01b58f20(param_1,param_1 + 0x1a9,param_1[0x1a7],6);
  FUN_00b90440(param_1[0x198],param_1[0x1a9]);
  lVar4 = FUN_004113f0(param_1[0x10e],&PTR_FUN_011061a0);
  FUN_00b90440(param_1[0x18e],*(undefined8 *)(lVar4 + 0x150));
  *(undefined1 *)((longlong)param_1 + 0x7ed) = 0;
  param_1[0x133] = 0;
  param_1[0x135] = 0;
  param_1[0x1a6] = 0;
  *(undefined1 *)(param_1 + 0x132) = 0xc;
  FUN_01b582e0();
  (**(code **)(*(longlong *)param_1[0x136] + 0x18))((longlong *)param_1[0x136],(char)param_1[0x132])
  ;
LAB_01b59983:
  FUN_00414480(&local_50);
  FUN_00414560(&local_48,2);
  return;
}

