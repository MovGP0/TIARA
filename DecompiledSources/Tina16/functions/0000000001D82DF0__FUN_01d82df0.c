/* Ghidra address: 01d82df0 */
/* Ghidra symbol: FUN_01d82df0 */


void FUN_01d82df0(longlong *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  double local_28;
  undefined1 local_19;
  
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  (**(code **)(*param_1 + 0x2e8))(param_1,L"bmOsc");
  *(undefined1 *)(param_1 + 0xff) = 1;
  *(undefined1 *)((longlong)param_1 + 0x7fa) = 2;
  (**(code **)(*param_1 + 0x450))(param_1);
  FUN_010e1dd0(param_1,param_2);
  if (*(char *)((longlong)param_1 + 0x7f9) == '\0') {
    lVar6 = FUN_012a3030(&PTR_FUN_012a1d38,1,(int)param_1[0xfd],param_1[0xfe]);
    param_1[0x151] = lVar6;
    *(undefined1 *)((longlong)param_1 + 0xab9) = 1;
  }
  else {
    if (*(char *)((longlong)param_1 + 0x7f9) != '\x01') goto LAB_01d836c4;
    lVar6 = FUN_012a3030(&DAT_012a0d00,1,(int)param_1[0xfd],param_1[0xfe]);
    param_1[0x151] = lVar6;
    plVar7 = (longlong *)FUN_004113f0(lVar6,&DAT_012a0d00);
    (**(code **)(*plVar7 + 0x178))(plVar7,&local_19);
    *(undefined1 *)((longlong)param_1 + 0xab9) = 0;
  }
  (**(code **)(*(longlong *)param_1[0x151] + 0x48))((longlong *)param_1[0x151],&local_19);
  FUN_0064dd90(param_1,&local_38);
  FUN_004169a0(&local_40,param_1[0x151] + 0x23);
  FUN_00416cd0(&local_30,3,local_38,&LAB_01d83740,local_40);
  FUN_0064de00(param_1,local_30);
  *(undefined1 *)((longlong)param_1 + 0x7ed) = 0;
  *(undefined1 *)(param_1 + 0x154) = 0;
  *(undefined1 *)(param_1 + 0x157) = 0xf;
  param_1[0x156] = 0;
  param_1[0x159] = 0;
  param_1[0x158] = 0;
  param_1[0x15b] = 0;
  param_1[0x14e] = 0;
  param_1[0x159] = 0;
  param_1[0x15a] = 0;
  param_1[0x14f] = 0;
  *(undefined1 *)((longlong)param_1 + 0xa6c) = 0;
  *(undefined1 *)((longlong)param_1 + 0xa6d) = 0;
  FUN_0064cf60(param_1,0xbb9);
  (**(code **)(**(longlong **)(param_1[0x123] + 0x4f0) + 0x90))
            (*(longlong **)(param_1[0x123] + 0x4f0));
  uVar8 = (*(code *)**(undefined8 **)param_1[0x151])((undefined8 *)param_1[0x151]);
  (**(code **)(**(longlong **)(param_1[0x123] + 0x4f0) + 0x10))
            (*(longlong **)(param_1[0x123] + 0x4f0),uVar8);
  uVar8 = (**(code **)(*(longlong *)param_1[0x151] + 0x120))((longlong *)param_1[0x151]);
  (**(code **)(**(longlong **)(param_1[0x13b] + 0x4f0) + 0x10))
            (*(longlong **)(param_1[0x13b] + 0x4f0),uVar8);
  uVar1 = (**(code **)(**(longlong **)(param_1[0x123] + 0x4f0) + 0x28))
                    (*(longlong **)(param_1[0x123] + 0x4f0));
  *(undefined1 *)((longlong)param_1 + 0xa5a) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0xa5c) = 0;
  iVar3 = (**(code **)(**(longlong **)(param_1[0x123] + 0x4f0) + 0x28))
                    (*(longlong **)(param_1[0x123] + 0x4f0));
  if (iVar3 == 0) {
    lVar6 = FUN_01107340(&PTR_FUN_01105a20,1);
    param_1[0x15c] = lVar6;
    (**(code **)(**(longlong **)(param_1[0x123] + 0x4f0) + 0x80))
              (*(longlong **)(param_1[0x123] + 0x4f0),0,lVar6);
    (**(code **)(*(longlong *)param_1[0x123] + 0x268))((longlong *)param_1[0x123],0);
  }
  else {
    (**(code **)(*(longlong *)param_1[0x123] + 0x268))((longlong *)param_1[0x123],0);
    uVar8 = (**(code **)(**(longlong **)(param_1[0x123] + 0x4f0) + 0x30))
                      (*(longlong **)(param_1[0x123] + 0x4f0),0);
    lVar6 = FUN_004113f0(uVar8,&PTR_FUN_01105a20);
    param_1[0x15c] = lVar6;
    uVar8 = (**(code **)(*(longlong *)param_1[0x123] + 0x260))((longlong *)param_1[0x123]);
    (**(code **)(*(longlong *)param_1[0x151] + 0x58))
              ((longlong *)param_1[0x151],
               CONCAT71((int7)((ulonglong)uVar8 >> 8),
                        (char)uVar8 - *(char *)((longlong)param_1 + 0xa5c)) & 0xffffffff);
  }
  uVar4 = (**(code **)(*(longlong *)param_1[0x151] + 0x128))((longlong *)param_1[0x151]);
  (**(code **)(*(longlong *)param_1[0x13b] + 0x268))((longlong *)param_1[0x13b],uVar4);
  plVar7 = (longlong *)param_1[0x13b];
  uVar4 = (**(code **)(*plVar7 + 0x260))(plVar7);
  uVar8 = (**(code **)(*(longlong *)plVar7[0x9e] + 0x30))((longlong *)plVar7[0x9e],uVar4);
  lVar6 = FUN_004113f0(uVar8,&PTR_FUN_01105a20);
  param_1[0x155] = lVar6;
  *(undefined1 *)((longlong)param_1 + 0xa6e) = 0;
  *(undefined1 *)(param_1[0x15c] + 0x11) = 1;
  FUN_0082a6c0(param_1[0x132],CONCAT71((int7)((ulonglong)lVar6 >> 8),1) & 0xffffffff);
  (**(code **)(*(longlong *)param_1[0x151] + 0x70))
            ((longlong *)param_1[0x151],(longlong)param_1 + 0xa59,param_1 + 0x14b);
  if (*(char *)((longlong)param_1 + 0xa59) != '\0') {
    (**(code **)(*(longlong *)param_1[0x151] + 0x80))
              ((longlong *)param_1[0x151],*(undefined1 *)(param_1[0x15c] + 0x2a));
    (**(code **)(*(longlong *)param_1[0x151] + 0x78))
              ((longlong *)param_1[0x151],param_1[0x15c] + 0x2a,&local_28,1);
    FUN_00b90440(param_1[0x144],local_28);
  }
  (**(code **)(*(longlong *)param_1[0x151] + 0xf0))
            ((longlong *)param_1[0x151],(longlong)param_1 + 0xa62,(longlong)param_1 + 0xa61);
  if (*(char *)((longlong)param_1 + 0xa62) != '\0') {
    FUN_0153b5c0(&local_28,0);
    local_28 = local_28 / (double)*(byte *)((longlong)param_1 + 0xa61);
    (**(code **)(*(longlong *)param_1[0x151] + 0xf8))
              ((longlong *)param_1[0x151],(longlong)param_1 + 0xa63,&local_28,0);
    (**(code **)(*(longlong *)param_1[0x151] + 0x100))
              ((longlong *)param_1[0x151],*(undefined1 *)((longlong)param_1 + 0xa63));
    FUN_00b90440(param_1[0x143],local_28);
  }
  uVar5 = (**(code **)(*(longlong *)param_1[0x151] + 0x130))((longlong *)param_1[0x151]);
  (**(code **)(*(longlong *)param_1[0x130] + 0x128))
            ((longlong *)param_1[0x130],
             CONCAT71((int7)(((ulonglong)uVar5 & 0xffffffffffffff01) >> 8),
                      (char)((ulonglong)uVar5 & 0xffffffffffffff01) == '\x01'));
  (**(code **)(*(longlong *)param_1[0x131] + 0x128))
            ((longlong *)param_1[0x131],
             CONCAT71((int7)(((ulonglong)uVar5 & 0xffffffffffffff02) >> 8),
                      (char)((ulonglong)uVar5 & 0xffffffffffffff02) == '\x02'));
  (**(code **)(*(longlong *)param_1[0x12f] + 0x128))
            ((longlong *)param_1[0x12f],((byte)uVar5 & 4) == 4);
  cVar2 = (**(code **)(*(longlong *)param_1[0x151] + 0x138))((longlong *)param_1[0x151]);
  *(char *)(param_1[0x15c] + 0x38) = cVar2;
  FUN_0082a6c0(param_1[0x130],cVar2 == '\x01');
  FUN_0082a6c0(param_1[0x131],cVar2 == '\x02');
  FUN_0082a6c0(param_1[0x12f],cVar2 == '\x04');
  uVar8 = (**(code **)(*(longlong *)param_1[0x151] + 0xb8))((longlong *)param_1[0x151]);
  (**(code **)(**(longlong **)(param_1[0x121] + 0x4f0) + 0x10))
            (*(longlong **)(param_1[0x121] + 0x4f0),uVar8);
  uVar4 = (**(code **)(*(longlong *)param_1[0x151] + 0xc0))((longlong *)param_1[0x151]);
  (**(code **)(*(longlong *)param_1[0x121] + 0x268))((longlong *)param_1[0x121],uVar4);
  uVar4 = (**(code **)(*(longlong *)param_1[0x121] + 0x260))((longlong *)param_1[0x121]);
  (**(code **)(*(longlong *)param_1[0x151] + 200))((longlong *)param_1[0x151],uVar4);
  FUN_01d80da0(param_1,6,1,0);
  (**(code **)(*(longlong *)param_1[0x151] + 0xe8))((longlong *)param_1[0x151],0);
  *(undefined1 *)(param_1 + 0x14c) = 0;
  uVar8 = (**(code **)(*(longlong *)param_1[0x151] + 0xa0))((longlong *)param_1[0x151]);
  (**(code **)(**(longlong **)(param_1[0x124] + 0x4f0) + 0x10))
            (*(longlong **)(param_1[0x124] + 0x4f0),uVar8);
  uVar4 = (**(code **)(*(longlong *)param_1[0x151] + 0xa8))((longlong *)param_1[0x151]);
  (**(code **)(*(longlong *)param_1[0x124] + 0x268))((longlong *)param_1[0x124],uVar4);
  FUN_00b90440(param_1[0x145],*(undefined8 *)(param_1[0x15c] + 0x110));
  FUN_00b90440(param_1[0x146],0);
  FUN_00b90440(param_1[0x140],0);
  uVar8 = FUN_00b90090(param_1[0x140]);
  (**(code **)(*(longlong *)param_1[0x151] + 0x108))((longlong *)param_1[0x151],uVar8);
  FUN_01d80d40(param_1,6,0);
  *(undefined4 *)(param_1 + 0x15f) = 0x280;
  lVar6 = FUN_00409570(0x2800);
  param_1[0x15d] = lVar6;
  lVar6 = FUN_00409570((longlong)((int)param_1[0x15f] << 4));
  param_1[0x15e] = lVar6;
  *(undefined1 *)((longlong)param_1 + 0xafc) = 0;
  FUN_007ff680(param_1,2);
LAB_01d836c4:
  FUN_00414480(&local_40);
  FUN_00414560(&local_38,2);
  return;
}

