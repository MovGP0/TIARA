/* Ghidra address: 00f1c5c0 */
/* Ghidra symbol: FUN_00f1c5c0 */


void FUN_00f1c5c0(longlong *param_1,longlong param_2,longlong param_3,int *param_4,
                 undefined4 param_5,int param_6,int param_7,longlong *param_8,undefined8 param_9,
                 undefined8 param_10,longlong param_11,char param_12)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30[0] = 0;
  if (*param_8 == 0) goto LAB_00f1d022;
  plVar4 = (longlong *)FUN_01ce8ac0(*param_8,param_3);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0xc0))(plVar4,param_9,param_10);
    if (param_12 != '\0') {
      (**(code **)(*(longlong *)*param_8 + 0x70))((longlong *)*param_8,param_9);
    }
    goto LAB_00f1d022;
  }
  cVar1 = *(char *)(*param_8 + 0x58);
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      if (param_3 != 0) {
        plVar4 = (longlong *)FUN_01ab6b60(&PTR_FUN_01aaff18,1);
        FUN_01ab6ed0(plVar4,param_11);
        plVar4[0xe] = *param_8;
        *param_4 = (*param_4 + 1) % 0xb;
        FUN_005fd4e0(plVar4[0xf],*(undefined4 *)(PTR_DAT_02003c00 + (longlong)*param_4 * 4));
        plVar4[0x10] = (longlong)param_1;
        FUN_01cc8360();
        plVar4[0x11] = param_2;
        FUN_01ade6a0(param_11,param_2);
        plVar4[0x13] = param_3;
        lVar6 = (**(code **)(*param_1 + 0x58))(param_1,param_3);
        plVar4[0x17] = lVar6;
        lVar6 = (**(code **)(*param_1 + 0x60))(param_1,param_3);
        plVar4[0x18] = lVar6;
        iVar2 = (**(code **)(**(longlong **)(*param_8 + 0x70) + 0x28))
                          (*(longlong **)(*param_8 + 0x70));
        if (param_6 < iVar2) {
          uVar7 = (**(code **)(**(longlong **)(*param_8 + 0x70) + 0x30))
                            (*(longlong **)(*param_8 + 0x70),param_6);
          lVar6 = FUN_004113f0(uVar7,&DAT_01ccbf00);
          plVar4[0x1d] = lVar6;
        }
        else {
          uVar7 = (**(code **)(**(longlong **)(*param_8 + 0x70) + 0x30))
                            (*(longlong **)(*param_8 + 0x70),0);
          lVar6 = FUN_004113f0(uVar7,&DAT_01ccbf00);
          plVar4[0x1d] = lVar6;
        }
        lVar6 = FUN_01ccd700(&DAT_01ccbf00,1);
        *(longlong *)(lVar6 + 0x60) = param_11;
        *(longlong *)(lVar6 + 0x68) = *param_8;
        *(undefined1 *)(lVar6 + 0xf0) = 3;
        FUN_01cd6740(lVar6,1);
        iVar2 = (**(code **)(**(longlong **)(*param_8 + 0x78) + 0x28))
                          (*(longlong **)(*param_8 + 0x78));
        if (iVar2 + -1 < param_7) {
          (**(code **)(**(longlong **)(*param_8 + 0x78) + 0x80))
                    (*(longlong **)(*param_8 + 0x78),&DAT_00f1d068,lVar6);
        }
        else {
          (**(code **)(**(longlong **)(*param_8 + 0x78) + 0xd0))
                    (*(longlong **)(*param_8 + 0x78),param_7,&DAT_00f1d068,lVar6);
        }
        plVar4[0x1e] = lVar6;
        uVar3 = FUN_005fd4d0(plVar4[0xf]);
        FUN_005fc860(*(undefined8 *)(lVar6 + 0x98),uVar3);
        FUN_01cc0ae0(param_3,&local_48);
        FUN_00414ad0(plVar4[0x1e] + 0xd8,local_48);
        FUN_01ce7b20(plVar4[0x1e] + 0xd8);
        FUN_004ae7e0(*(undefined8 *)(plVar4[0x1d] + 0xf8),plVar4);
        FUN_004ae7e0(*(undefined8 *)(plVar4[0x1e] + 0xf8),plVar4);
        FUN_01ab6de0(plVar4,&local_50);
        (**(code **)(**(longlong **)(*param_8 + 0x80) + 0x80))
                  (*(longlong **)(*param_8 + 0x80),local_50,plVar4);
        (**(code **)(*plVar4 + 0xc0))(plVar4,param_9,param_10);
        if (param_12 != '\0') {
          (**(code **)(*plVar4 + 0x70))(plVar4,param_9);
        }
        lVar5 = FUN_01cd9760(&PTR_FUN_01cd9128,1);
        *(longlong *)(lVar5 + 0x78) = *param_8;
        uVar7 = (**(code **)(**(longlong **)(*param_8 + 0x70) + 0x30))
                          (*(longlong **)(*param_8 + 0x70),0);
        FUN_01cd9880(lVar5,uVar7);
        FUN_01cd98a0(lVar5,lVar6);
        (**(code **)(**(longlong **)(*param_8 + 0x88) + 0x80))
                  (*(longlong **)(*param_8 + 0x88),L"Grid",lVar5);
      }
      goto LAB_00f1d022;
    }
    if (1 < (byte)(cVar1 - 5U)) {
      if ((cVar1 == '\a') && (param_3 != 0)) {
        lVar6 = FUN_00f12e70(&LAB_00f12330,1);
        *param_4 = (*param_4 + 1) % 0xb;
        FUN_005fd4e0(*(undefined8 *)(lVar6 + 0x60),
                     *(undefined4 *)(PTR_DAT_02003c00 + (longlong)*param_4 * 4));
        *(longlong *)(lVar6 + 0x78) = param_11;
        FUN_01cc0ae0(param_3,&local_40);
        FUN_00414ad0(lVar6 + 0xe8,local_40);
        cVar1 = *(char *)(param_3 + 0x3a);
        if (cVar1 == '\x01') {
          *(undefined1 *)(lVar6 + 0x9d) = 0;
        }
        else if (cVar1 == '\x02') {
          *(undefined1 *)(lVar6 + 0x9d) = 1;
        }
        else if (cVar1 == '\x03') {
          *(undefined1 *)(lVar6 + 0x9d) = 3;
        }
        else if (cVar1 == '\x04') {
          *(undefined1 *)(lVar6 + 0x9d) = 2;
        }
        else {
          *(undefined1 *)(lVar6 + 0x9d) = 4;
        }
        *(undefined8 *)(lVar6 + 0xa8) = 0;
        *(undefined8 *)(lVar6 + 0xb0) = 0;
        uVar7 = (**(code **)(*param_1 + 0x58))(param_1,param_3);
        *(undefined8 *)(lVar6 + 0xb8) = uVar7;
        uVar7 = (**(code **)(*param_1 + 0x68))(param_1,param_3);
        *(undefined8 *)(lVar6 + 0xc0) = uVar7;
        uVar7 = (**(code **)(**(longlong **)(*param_8 + 0x70) + 0x30))
                          (*(longlong **)(*param_8 + 0x70),0);
        uVar7 = FUN_004113f0(uVar7,&DAT_01ccbf00);
        *(undefined8 *)(lVar6 + 0xd8) = uVar7;
        uVar7 = (**(code **)(**(longlong **)(*param_8 + 0x78) + 0x30))
                          (*(longlong **)(*param_8 + 0x78),0);
        uVar7 = FUN_004113f0(uVar7,&DAT_01ccbf00);
        *(undefined8 *)(lVar6 + 0xe0) = uVar7;
        (**(code **)(**(longlong **)(param_11 + 0xe0) + 0x80))
                  (*(longlong **)(param_11 + 0xe0),L"Vector",lVar6);
      }
      goto LAB_00f1d022;
    }
  }
  if (param_3 == 0) goto LAB_00f1d022;
  plVar4 = (longlong *)FUN_01ab2610(&PTR_FUN_01aae560,1);
  FUN_01ab28d0(plVar4,param_11);
  plVar4[0xf] = *param_8;
  *param_4 = (*param_4 + 1) % 0xb;
  FUN_005fd4e0(plVar4[0xc],*(undefined4 *)(PTR_DAT_02003c00 + (longlong)*param_4 * 4));
  FUN_005fd6d0(plVar4[0xc],param_5);
  plVar4[0x19] = (longlong)param_1;
  FUN_01cc8360();
  plVar4[0x1a] = param_2;
  FUN_01ade6a0(param_11,param_2);
  plVar4[0x1c] = param_3;
  lVar6 = (**(code **)(*param_1 + 0x58))(param_1,param_3);
  plVar4[0x10] = lVar6;
  lVar6 = (**(code **)(*param_1 + 0x60))(param_1,param_3);
  plVar4[0x11] = lVar6;
  lVar6 = (**(code **)(*param_1 + 0x68))(param_1,param_3);
  plVar4[0x12] = lVar6;
  lVar6 = (**(code **)(*param_1 + 0x70))(param_1,param_3);
  plVar4[0x13] = lVar6;
  iVar2 = (**(code **)(**(longlong **)(*param_8 + 0x70) + 0x28))(*(longlong **)(*param_8 + 0x70));
  if (param_6 < iVar2) {
    uVar7 = (**(code **)(**(longlong **)(*param_8 + 0x70) + 0x30))
                      (*(longlong **)(*param_8 + 0x70),param_6);
    lVar6 = FUN_004113f0(uVar7,&DAT_01ccbf00);
    plVar4[0x1f] = lVar6;
  }
  else {
    uVar7 = (**(code **)(**(longlong **)(*param_8 + 0x70) + 0x30))
                      (*(longlong **)(*param_8 + 0x70),0);
    lVar6 = FUN_004113f0(uVar7,&DAT_01ccbf00);
    plVar4[0x1f] = lVar6;
  }
  if (param_7 < 0) {
    cVar1 = FUN_01ce33d0(*param_8);
    if (cVar1 != '\x01') goto LAB_00f1c9f9;
    lVar6 = FUN_01ccd700(&DAT_01ccbf00,1);
    *(longlong *)(lVar6 + 0x60) = param_11;
    *(longlong *)(lVar6 + 0x68) = *param_8;
    *(undefined1 *)(lVar6 + 0xf0) = 1;
    FUN_01cd6740(lVar6,1);
    iVar2 = (**(code **)(**(longlong **)(*param_8 + 0x78) + 0x28))(*(longlong **)(*param_8 + 0x78));
    if (iVar2 + -1 < param_7) {
      (**(code **)(**(longlong **)(*param_8 + 0x78) + 0x80))
                (*(longlong **)(*param_8 + 0x78),&DAT_00f1d068,lVar6);
    }
    else {
      uVar3 = FUN_00b905e0(0,param_7);
      (**(code **)(**(longlong **)(*param_8 + 0x78) + 0xd0))
                (*(longlong **)(*param_8 + 0x78),uVar3,&DAT_00f1d068,lVar6);
    }
    plVar4[0x20] = lVar6;
    uVar3 = FUN_005fd4d0(plVar4[0xc]);
    FUN_005fc860(*(undefined8 *)(lVar6 + 0x98),uVar3);
    FUN_01cc0ae0(param_3,local_30);
    FUN_00414ad0(plVar4[0x20] + 0xd8,local_30[0]);
    FUN_01ce7b20(plVar4[0x20] + 0xd8);
    lVar5 = FUN_01cd9760(&PTR_FUN_01cd9128,1);
    *(longlong *)(lVar5 + 0x78) = *param_8;
    uVar7 = (**(code **)(**(longlong **)(*param_8 + 0x70) + 0x30))
                      (*(longlong **)(*param_8 + 0x70),0);
    FUN_01cd9880(lVar5,uVar7);
    FUN_01cd98a0(lVar5,lVar6);
    (**(code **)(**(longlong **)(*param_8 + 0x88) + 0x80))
              (*(longlong **)(*param_8 + 0x88),L"Grid",lVar5);
  }
  else {
LAB_00f1c9f9:
    iVar2 = (**(code **)(**(longlong **)(*param_8 + 0x78) + 0x28))(*(longlong **)(*param_8 + 0x78));
    if (param_7 < iVar2) {
      uVar3 = FUN_00b905e0(0,param_7);
      uVar7 = (**(code **)(**(longlong **)(*param_8 + 0x78) + 0x30))
                        (*(longlong **)(*param_8 + 0x78),uVar3);
      lVar6 = FUN_004113f0(uVar7,&DAT_01ccbf00);
      plVar4[0x20] = lVar6;
    }
    else {
      uVar7 = (**(code **)(**(longlong **)(*param_8 + 0x78) + 0x30))
                        (*(longlong **)(*param_8 + 0x78),0);
      lVar6 = FUN_004113f0(uVar7,&DAT_01ccbf00);
      plVar4[0x20] = lVar6;
    }
  }
  FUN_004ae7e0(*(undefined8 *)(plVar4[0x1f] + 0xf8),plVar4);
  FUN_004ae7e0(*(undefined8 *)(plVar4[0x20] + 0xf8),plVar4);
  FUN_01ab2940(plVar4,&local_38);
  (**(code **)(**(longlong **)(*param_8 + 0x80) + 0x80))
            (*(longlong **)(*param_8 + 0x80),local_38,plVar4);
  (**(code **)(*plVar4 + 0xc0))(plVar4,param_9,param_10);
  if (param_12 != '\0') {
    (**(code **)(*plVar4 + 0x70))(plVar4,param_9);
  }
LAB_00f1d022:
  FUN_00414560(&local_50,5);
  return;
}

