/* Ghidra address: 01b67a10 */
/* Ghidra symbol: FUN_01b67a10 */


void FUN_01b67a10(longlong *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  byte local_51;
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
  *(undefined1 *)((longlong)param_1 + 0x7fa) = 0x10;
  (**(code **)(*param_1 + 0x450))(param_1);
  *(undefined4 *)((longlong)param_1 + 0x9cc) = 0x18;
  *(undefined1 *)(param_1 + 0x132) = 0xf;
  *(undefined1 *)((longlong)param_1 + 0xdb4) = 1;
  FUN_010f5a80(param_1,param_2);
  if (*(char *)((longlong)param_1 + 0x7f9) == '\0') {
    lVar5 = FUN_01b5e190(&PTR_FUN_01b5c4f8,1,(int)param_1[0xfd],param_1[0xfe]);
    param_1[0x1b4] = lVar5;
  }
  else {
    if (*(char *)((longlong)param_1 + 0x7f9) != '\x01') goto LAB_01b6817b;
    local_51 = 0;
    lVar5 = FUN_010e1b10(param_1);
    if ((lVar5 != 0) && (lVar5 = FUN_010e1b10(param_1), *(char *)(lVar5 + 0xa9) != '\0')) {
      local_51 = 1;
    }
    FUN_010e32a0(param_1[2]);
    lVar5 = FUN_01b5d040(&PTR_FUN_01b5b960,1,(int)param_1[0xfd],param_1[0xfe]);
    param_1[0x1b4] = lVar5;
    plVar6 = (longlong *)FUN_004113f0(lVar5,&PTR_FUN_01b5b960);
    (**(code **)(*plVar6 + 0x120))(plVar6,local_19);
  }
  (**(code **)(*(longlong *)param_1[0x1b4] + 0x48))((longlong *)param_1[0x1b4],local_19);
  FUN_0064dd90(param_1,&local_48);
  FUN_004169a0(&local_50,param_1[0x1b4] + 0x23);
  FUN_00416cd0(local_40,3,local_48,&LAB_01b681f0,local_50);
  FUN_0064de00(param_1,local_40[0]);
  local_29 = '\x01';
  (**(code **)(*(longlong *)param_1[0x1b4] + 0x118))((longlong *)param_1[0x1b4],&local_29);
  (**(code **)(*(longlong *)param_1[0x1a0] + 0x128))((longlong *)param_1[0x1a0],local_29);
  local_29 = '\0';
  (**(code **)(*(longlong *)param_1[0x1b4] + 0x118))((longlong *)param_1[0x1b4],&local_29);
  (**(code **)(*(longlong *)param_1[0x1a1] + 0x128))((longlong *)param_1[0x1a1],local_29 == '\0');
  (**(code **)(*(longlong *)param_1[0x1b4] + 0x118))
            ((longlong *)param_1[0x1b4],(longlong)param_1 + 0xdb4);
  *(undefined2 *)((longlong)param_1 + 0xd7a) = 0;
  *(undefined1 *)(param_1 + 0x1af) = 0;
  *(undefined2 *)(param_1 + 0x1b6) = 0;
  FUN_0064cf60(param_1,0x1965);
  uVar7 = FUN_01b68200(param_1);
  *(undefined1 *)(param_1[0x10e] + 0x11) = 1;
  FUN_0082a6c0(param_1[0xfa],CONCAT71((int7)((ulonglong)uVar7 >> 8),1) & 0xffffffff);
  *(undefined1 *)((longlong)param_1 + 0xdb2) = 4;
  *(undefined1 *)((longlong)param_1 + 0xdb3) = 1;
  if (*(char *)(param_1[0x10e] + 0x30) != '\0') {
    (**(code **)(*(longlong *)param_1[0x1b4] + 0x58))((longlong *)param_1[0x1b4],0);
    (**(code **)(*(longlong *)param_1[0x1b4] + 0xa8))
              ((longlong *)param_1[0x1b4],*(undefined1 *)(param_1[0x10e] + 0x2a));
    (**(code **)(*(longlong *)param_1[0x1b4] + 0x98))
              ((longlong *)param_1[0x1b4],param_1[0x10e] + 0x2a,&local_28,1);
    FUN_00b90440(param_1[0x18b],local_28);
  }
  if (*(char *)(param_1[0x1b5] + 0x30) != '\0') {
    (**(code **)(*(longlong *)param_1[0x1b4] + 0x58))((longlong *)param_1[0x1b4],1);
    uVar1 = *(undefined1 *)(param_1[0x1b5] + 0x2a);
    *(undefined1 *)(param_1 + 0x1b3) = uVar1;
    (**(code **)(*(longlong *)param_1[0x1b4] + 0xa8))((longlong *)param_1[0x1b4],uVar1);
    (**(code **)(*(longlong *)param_1[0x1b4] + 0x98))
              ((longlong *)param_1[0x1b4],param_1 + 0x1b3,&local_28,1);
    FUN_00b90440(param_1[0x193],local_28);
    param_1[0x1b1] = local_28;
    (**(code **)(*(longlong *)param_1[0x1b4] + 0x58))((longlong *)param_1[0x1b4],0);
  }
  FUN_01b673e0(param_1,param_1);
  (**(code **)(**(longlong **)(param_1[0x19e] + 0x4f0) + 0x90))
            (*(longlong **)(param_1[0x19e] + 0x4f0));
  uVar7 = (**(code **)(*(longlong *)param_1[0x1b4] + 0xe0))((longlong *)param_1[0x1b4]);
  (**(code **)(**(longlong **)(param_1[0x19e] + 0x4f0) + 0x10))
            (*(longlong **)(param_1[0x19e] + 0x4f0),uVar7);
  iVar3 = (**(code **)(**(longlong **)(param_1[0x19e] + 0x4f0) + 0x28))
                    (*(longlong **)(param_1[0x19e] + 0x4f0));
  if (iVar3 == 0) {
    (**(code **)(**(longlong **)(param_1[0x19e] + 0x4f0) + 0x78))
              (*(longlong **)(param_1[0x19e] + 0x4f0),0);
    (**(code **)(*(longlong *)param_1[0x19e] + 0x268))((longlong *)param_1[0x19e],0);
  }
  else {
    uVar4 = (**(code **)(*(longlong *)param_1[0x1b4] + 0xe8))((longlong *)param_1[0x1b4]);
    (**(code **)(*(longlong *)param_1[0x19e] + 0x268))((longlong *)param_1[0x19e],uVar4);
  }
  (**(code **)(*(longlong *)param_1[0x1b4] + 0xf8))
            ((longlong *)param_1[0x1b4],(longlong)param_1 + 0xd6f);
  if (*(char *)((longlong)param_1 + 0xd6f) != '\0') {
    (**(code **)(*(longlong *)param_1[0x1b4] + 0x100))((longlong *)param_1[0x1b4]);
    local_28 = 0x3ff0000000000000;
    (**(code **)(*(longlong *)param_1[0x1b4] + 0x108))
              ((longlong *)param_1[0x1b4],(longlong)param_1 + 0xd6e,&local_28,0);
    (**(code **)(*(longlong *)param_1[0x1b4] + 0x110))
              ((longlong *)param_1[0x1b4],*(undefined1 *)((longlong)param_1 + 0xd6e));
    FUN_00b90440(param_1[0x19a],local_28);
    param_1[0x1ae] = local_28;
  }
  param_1[0x1b2] = 0;
  FUN_01b677e0(param_1,param_1 + 0x1b2,param_1[0x1b1],6);
  FUN_00b90440(param_1[0x197],param_1[0x1b2]);
  lVar5 = FUN_004113f0(param_1[0x10e],&PTR_FUN_011061a0);
  FUN_00b90440(param_1[0x18d],*(undefined8 *)(lVar5 + 0x150));
  *(undefined1 *)((longlong)param_1 + 0x7ed) = 0;
  param_1[0x133] = 0;
  param_1[0x135] = 0;
  param_1[0x1b0] = 0;
  *(undefined1 *)(param_1 + 0x132) = 0xf;
  FUN_01b656b0();
  (**(code **)(**(longlong **)(param_1[0x136] + 0x128) + 0x10))
            (*(longlong **)(param_1[0x136] + 0x128),*(undefined8 *)(param_1[0x1b4] + 8));
  (**(code **)(*(longlong *)param_1[0x136] + 0x18))((longlong *)param_1[0x136],(char)param_1[0x132])
  ;
  FUN_01b66800(param_1,param_1);
  FUN_01b69150(param_1,param_1);
  if (((local_51 & *(char *)((longlong)param_1 + 0x7f9) == '\x01') != 0) &&
     (cVar2 = FUN_010e1a60(param_1), cVar2 != '\0')) {
    uVar7 = FUN_010e1b10(param_1);
    FUN_008059a0(uVar7);
    uVar7 = FUN_010e1b10(param_1);
    iVar3 = FUN_007fd800(param_1);
    FUN_00806b40(uVar7,iVar3 + *(int *)((longlong)param_1 + 0x9c));
  }
LAB_01b6817b:
  FUN_00414480(&local_50);
  FUN_00414560(&local_48,2);
  return;
}

