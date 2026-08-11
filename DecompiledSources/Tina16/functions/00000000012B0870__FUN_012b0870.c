/* Ghidra address: 012b0870 */
/* Ghidra symbol: FUN_012b0870 */


void FUN_012b0870(longlong *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
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
  *(int *)((longlong)param_1 + 0x9cc) = *(int *)(param_1[299] + 0x9c) * 2 + 1;
  *(undefined1 *)(param_1 + 0x132) = 0xb;
  FUN_010f5a80(param_1,param_2);
  if (*(char *)((longlong)param_1 + 0x7f9) == '\0') {
    lVar7 = FUN_012a3030(&PTR_FUN_012a1d38,1,(int)param_1[0xfd],param_1[0xfe]);
    param_1[0x1b7] = lVar7;
    *(undefined1 *)((longlong)param_1 + 0xde9) = 1;
  }
  else {
    if (*(char *)((longlong)param_1 + 0x7f9) != '\x01') goto LAB_012b118a;
    lVar7 = FUN_012a3030(&DAT_012a0d00,1,(int)param_1[0xfd],param_1[0xfe]);
    param_1[0x1b7] = lVar7;
    plVar8 = (longlong *)FUN_004113f0(lVar7,&DAT_012a0d00);
    (**(code **)(*plVar8 + 0x178))(plVar8,&local_19);
    *(undefined1 *)((longlong)param_1 + 0xde9) = 0;
  }
  (**(code **)(*(longlong *)param_1[0x1b7] + 0x48))((longlong *)param_1[0x1b7],&local_19);
  FUN_0064dd90(param_1,&local_38);
  FUN_004169a0(&local_40,param_1[0x1b7] + 0x23);
  FUN_00416cd0(&local_30,3,local_38,&DAT_012b1210,local_40);
  FUN_0064de00(param_1,local_30);
  iVar3 = FUN_00414f50(param_1[0x1b7] + 0x23,&DAT_012b1218,
                       (ulonglong)*(byte *)(param_1[0x1b7] + 0x23) + 1);
  if (iVar3 == 0) {
    *(undefined1 *)((longlong)param_1 + 0xde9) = 1;
  }
  *(undefined1 *)((longlong)param_1 + 0x7ed) = 0;
  *(undefined1 *)(param_1 + 0x1ba) = 0;
  *(undefined1 *)(param_1 + 0x1bd) = 0xf;
  param_1[0x1bc] = 0;
  param_1[0x133] = 0;
  param_1[0x135] = 0;
  param_1[0x1b4] = 0;
  param_1[0x1b5] = 0;
  *(undefined1 *)((longlong)param_1 + 0xd9c) = 0;
  *(undefined1 *)((longlong)param_1 + 0xd9d) = 0;
  FUN_0064cf60(param_1,0xbb9);
  (**(code **)(**(longlong **)(param_1[0xfb] + 0x4f0) + 0x90))
            (*(longlong **)(param_1[0xfb] + 0x4f0));
  uVar9 = (*(code *)**(undefined8 **)param_1[0x1b7])((undefined8 *)param_1[0x1b7]);
  (**(code **)(**(longlong **)(param_1[0xfb] + 0x4f0) + 0x10))
            (*(longlong **)(param_1[0xfb] + 0x4f0),uVar9);
  uVar9 = (**(code **)(*(longlong *)param_1[0x1b7] + 0x120))((longlong *)param_1[0x1b7]);
  (**(code **)(**(longlong **)(param_1[0x19d] + 0x4f0) + 0x10))
            (*(longlong **)(param_1[0x19d] + 0x4f0),uVar9);
  uVar1 = (**(code **)(**(longlong **)(param_1[0xfb] + 0x4f0) + 0x28))
                    (*(longlong **)(param_1[0xfb] + 0x4f0));
  *(undefined1 *)((longlong)param_1 + 0xd8a) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0xd8c) = 0;
  uVar4 = (**(code **)(*(longlong *)param_1[0x1b7] + 0x128))((longlong *)param_1[0x1b7]);
  (**(code **)(*(longlong *)param_1[0x19d] + 0x268))((longlong *)param_1[0x19d],uVar4);
  iVar3 = (**(code **)(*(longlong *)param_1[0x19d] + 0x260))((longlong *)param_1[0x19d]);
  if (-1 < iVar3) {
    iVar3 = (**(code **)(*(longlong *)param_1[0x19d] + 0x260))((longlong *)param_1[0x19d]);
    iVar5 = (**(code **)(**(longlong **)(param_1[0x19d] + 0x4f0) + 0x28))
                      (*(longlong **)(param_1[0x19d] + 0x4f0));
    if (iVar3 < iVar5) {
      plVar8 = (longlong *)param_1[0x19d];
      uVar4 = (**(code **)(*plVar8 + 0x260))(plVar8);
      uVar9 = (**(code **)(*(longlong *)plVar8[0x9e] + 0x30))((longlong *)plVar8[0x9e],uVar4);
      lVar7 = FUN_004113f0(uVar9,&PTR_FUN_01105a20);
      param_1[0x1bb] = lVar7;
    }
  }
  *(undefined1 *)((longlong)param_1 + 0xd9e) = 0;
  (**(code **)(*(longlong *)param_1[0x1b7] + 0x70))
            ((longlong *)param_1[0x1b7],(longlong)param_1 + 0xd89,param_1 + 0x1b1);
  (**(code **)(*(longlong *)param_1[0x1b7] + 0xf0))
            ((longlong *)param_1[0x1b7],(longlong)param_1 + 0xd92,(longlong)param_1 + 0xd91);
  if (*(byte *)((longlong)param_1 + 0xd92) != 0) {
    if (*(longlong *)(param_1[0x118] + 0x408) == 0) {
      uVar1 = FUN_0040c770((double)*(byte *)((longlong)param_1 + 0xd92) / 2.0);
      *(undefined1 *)((longlong)param_1 + 0xd93) = uVar1;
      (**(code **)(*(longlong *)param_1[0x1b7] + 0xf8))
                ((longlong *)param_1[0x1b7],(longlong)param_1 + 0xd93,&local_28,1);
    }
    else {
      FUN_0153b5c0(&local_28,0);
      local_28 = local_28 / (double)*(byte *)((longlong)param_1 + 0xd91);
      (**(code **)(*(longlong *)param_1[0x1b7] + 0xf8))
                ((longlong *)param_1[0x1b7],(longlong)param_1 + 0xd93,&local_28,0);
    }
    (**(code **)(*(longlong *)param_1[0x1b7] + 0x100))
              ((longlong *)param_1[0x1b7],*(undefined1 *)((longlong)param_1 + 0xd93));
    FUN_00b90440(param_1[0x1a5],local_28);
  }
  uVar6 = (**(code **)(*(longlong *)param_1[0x1b7] + 0x130))((longlong *)param_1[0x1b7]);
  (**(code **)(*(longlong *)param_1[0x17f] + 0x128))
            ((longlong *)param_1[0x17f],
             CONCAT71((int7)(((ulonglong)uVar6 & 0xffffffffffffff01) >> 8),
                      (char)((ulonglong)uVar6 & 0xffffffffffffff01) == '\x01'));
  (**(code **)(*(longlong *)param_1[0x180] + 0x128))
            ((longlong *)param_1[0x180],
             CONCAT71((int7)(((ulonglong)uVar6 & 0xffffffffffffff02) >> 8),
                      (char)((ulonglong)uVar6 & 0xffffffffffffff02) == '\x02'));
  (**(code **)(*(longlong *)param_1[0x17e] + 0x128))
            ((longlong *)param_1[0x17e],((byte)uVar6 & 4) == 4);
  uVar9 = (**(code **)(*(longlong *)param_1[0x1b7] + 0xb8))((longlong *)param_1[0x1b7]);
  (**(code **)(**(longlong **)(param_1[0x170] + 0x4f0) + 0x10))
            (*(longlong **)(param_1[0x170] + 0x4f0),uVar9);
  uVar4 = (**(code **)(*(longlong *)param_1[0x1b7] + 0xc0))((longlong *)param_1[0x1b7]);
  (**(code **)(*(longlong *)param_1[0x170] + 0x268))((longlong *)param_1[0x170],uVar4);
  uVar4 = (**(code **)(*(longlong *)param_1[0x170] + 0x260))((longlong *)param_1[0x170]);
  (**(code **)(*(longlong *)param_1[0x1b7] + 200))((longlong *)param_1[0x1b7],uVar4);
  FUN_012ae910(param_1,6,1,0);
  (**(code **)(*(longlong *)param_1[0x1b7] + 0xe8))((longlong *)param_1[0x1b7],0);
  *(undefined1 *)(param_1 + 0x1b2) = 0;
  uVar9 = (**(code **)(*(longlong *)param_1[0x1b7] + 0xa0))((longlong *)param_1[0x1b7]);
  (**(code **)(**(longlong **)(param_1[0x173] + 0x4f0) + 0x10))
            (*(longlong **)(param_1[0x173] + 0x4f0),uVar9);
  uVar4 = (**(code **)(*(longlong *)param_1[0x1b7] + 0xa8))((longlong *)param_1[0x1b7]);
  (**(code **)(*(longlong *)param_1[0x173] + 0x268))((longlong *)param_1[0x173],uVar4);
  FUN_010e2390(param_1,param_1);
  uVar4 = (**(code **)(*(longlong *)param_1[0xfb] + 0x260))((longlong *)param_1[0xfb]);
  (**(code **)(*(longlong *)param_1[0x1b7] + 0x58))((longlong *)param_1[0x1b7],uVar4);
  cVar2 = (**(code **)(*(longlong *)param_1[0x1b7] + 0x138))((longlong *)param_1[0x1b7]);
  *(char *)(param_1[0x10e] + 0x38) = cVar2;
  FUN_0082a6c0(param_1[0x17f],cVar2 == '\x01');
  FUN_0082a6c0(param_1[0x180],cVar2 == '\x02');
  FUN_0082a6c0(param_1[0x17e],cVar2 == '\x04');
  lVar7 = FUN_004113f0(param_1[0x10e],&PTR_FUN_01105a20);
  FUN_00b90440(param_1[0x1a7],*(undefined8 *)(lVar7 + 0x110));
  FUN_00b90440(param_1[0x1a8],0);
  *(undefined1 *)(param_1 + 0x132) = 0xb;
  FUN_0082a6c0(param_1[0x1ac],*(char *)((longlong)param_1 + 0xde9) == '\0');
  FUN_012aec90(param_1);
  (**(code **)(**(longlong **)(param_1[0x136] + 0x128) + 0x10))
            (*(longlong **)(param_1[0x136] + 0x128),*(undefined8 *)(param_1[0x1b7] + 8));
  FUN_00b90440(param_1[0x1a2],0);
  uVar9 = FUN_00b90090(param_1[0x1a2]);
  (**(code **)(*(longlong *)param_1[0x1b7] + 0x108))((longlong *)param_1[0x1b7],uVar9);
  FUN_012ae700(param_1,6,0);
  (**(code **)(*(longlong *)param_1[0x136] + 0x18))((longlong *)param_1[0x136],(char)param_1[0x132])
  ;
  FUN_010f67e0(param_1,1,1);
  if (*(char *)((longlong)param_1 + 0xd89) != '\0') {
    (**(code **)(*(longlong *)param_1[0x1b7] + 0x80))
              ((longlong *)param_1[0x1b7],*(undefined1 *)(param_1[0x10e] + 0x2a));
    (**(code **)(*(longlong *)param_1[0x1b7] + 0x78))
              ((longlong *)param_1[0x1b7],param_1[0x10e] + 0x2a,&local_28,1);
    FUN_00b90440(param_1[0x1a6],local_28);
  }
LAB_012b118a:
  FUN_00414480(&local_40);
  FUN_00414560(&local_38,2);
  return;
}

