/* Ghidra address: 00f1b8c0 */
/* Ghidra symbol: FUN_00f1b8c0 */


void FUN_00f1b8c0(char param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                 undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                 undefined8 param_9,undefined1 param_10,undefined1 param_11,undefined4 param_12,
                 undefined8 param_13,undefined8 param_14,undefined4 param_15,int param_16,
                 longlong *param_17,undefined8 param_18)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00414610(param_9);
  if (*param_17 == 0) {
    lVar3 = FUN_01cdf400(&DAT_01cdd500,1);
    uVar4 = param_18;
    *param_17 = lVar3;
    *(char *)(*param_17 + 0x58) = param_1;
    *(undefined8 *)(*param_17 + 0x50) = param_18;
    if (param_1 == '\0') {
      *(undefined1 *)(*param_17 + 0x59) = 0;
      lVar3 = FUN_01ccd700(&DAT_01ccbf00,1);
      *(undefined8 *)(lVar3 + 0x60) = uVar4;
      *(longlong *)(lVar3 + 0x68) = *param_17;
      *(undefined1 *)(lVar3 + 0xf0) = 0;
      *(undefined1 *)(lVar3 + 0x70) = param_3;
      FUN_01cd64a0(lVar3,local_res10[0]);
      *(undefined1 *)(lVar3 + 0x80) = param_4;
      *(undefined4 *)(lVar3 + 0x90) = param_5;
      *(undefined8 *)(lVar3 + 0xb8) = param_6;
      *(undefined8 *)(lVar3 + 0xc0) = param_7;
      *(undefined8 *)(lVar3 + 200) = *(undefined8 *)(lVar3 + 0xb8);
      *(undefined8 *)(lVar3 + 0xd0) = *(undefined8 *)(lVar3 + 0xc0);
      uVar1 = FUN_01ccdde0(lVar3);
      uVar2 = FUN_01ccde00(lVar3);
      FUN_01cd43b0(lVar3,uVar1,uVar2);
      *(undefined8 *)(lVar3 + 200) = param_6;
      *(undefined8 *)(lVar3 + 200) = param_6;
      (**(code **)(**(longlong **)(*param_17 + 0x70) + 0x80))
                (*(longlong **)(*param_17 + 0x70),&DAT_00f1c594,lVar3);
      iVar8 = param_16;
      if (0 < param_16) {
        do {
          lVar3 = FUN_01ccd700(&DAT_01ccbf00,1);
          *(undefined8 *)(lVar3 + 0x60) = param_18;
          *(longlong *)(lVar3 + 0x68) = *param_17;
          *(undefined1 *)(lVar3 + 0xf0) = 1;
          *(undefined1 *)(lVar3 + 0x70) = param_10;
          FUN_01cd64a0(lVar3,param_9);
          *(undefined1 *)(lVar3 + 0x80) = param_11;
          *(undefined4 *)(lVar3 + 0x90) = param_12;
          *(undefined8 *)(lVar3 + 0xb8) = param_13;
          *(undefined8 *)(lVar3 + 0xc0) = param_14;
          *(undefined8 *)(lVar3 + 200) = *(undefined8 *)(lVar3 + 0xb8);
          *(undefined8 *)(lVar3 + 0xd0) = *(undefined8 *)(lVar3 + 0xc0);
          uVar1 = FUN_01ccddc0(lVar3);
          uVar2 = FUN_01ccddd0(lVar3);
          FUN_01cd43b0(lVar3,uVar1,uVar2);
          *(undefined8 *)(lVar3 + 200) = param_13;
          *(undefined8 *)(lVar3 + 0xd0) = param_14;
          (**(code **)(**(longlong **)(*param_17 + 0x78) + 0x80))
                    (*(longlong **)(*param_17 + 0x78),&DAT_00f1c5a4,lVar3);
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      uVar4 = FUN_01cd9760(&PTR_FUN_01cd9128,1);
      (**(code **)(**(longlong **)(*param_17 + 0x88) + 0x80))
                (*(longlong **)(*param_17 + 0x88),L"Grid",uVar4);
      lVar3 = (**(code **)(**(longlong **)(*param_17 + 0x88) + 0x30))
                        (*(longlong **)(*param_17 + 0x88),0);
      *(longlong *)(lVar3 + 0x78) = *param_17;
      uVar4 = (**(code **)(**(longlong **)(*param_17 + 0x88) + 0x30))
                        (*(longlong **)(*param_17 + 0x88),0);
      uVar5 = (**(code **)(**(longlong **)(*param_17 + 0x70) + 0x30))
                        (*(longlong **)(*param_17 + 0x70),0);
      uVar5 = FUN_004113f0(uVar5,&DAT_01ccbf00);
      FUN_01cd9880(uVar4,uVar5);
      uVar4 = (**(code **)(**(longlong **)(*param_17 + 0x88) + 0x30))
                        (*(longlong **)(*param_17 + 0x88),0);
      uVar5 = (**(code **)(**(longlong **)(*param_17 + 0x78) + 0x30))
                        (*(longlong **)(*param_17 + 0x78),0);
      uVar5 = FUN_004113f0(uVar5,&DAT_01ccbf00);
      FUN_01cd98a0(uVar4,uVar5);
    }
    else if (param_1 == '\x01') {
      *(undefined1 *)(*param_17 + 0x59) = 1;
      lVar3 = FUN_01ccd700(&DAT_01ccbf00,1);
      *(undefined8 *)(lVar3 + 0x60) = uVar4;
      *(longlong *)(lVar3 + 0x68) = *param_17;
      *(undefined1 *)(lVar3 + 0xf0) = 0;
      *(undefined1 *)(lVar3 + 0x70) = param_3;
      FUN_01cd64a0(lVar3,local_res10[0]);
      *(undefined1 *)(lVar3 + 0x80) = param_4;
      *(undefined4 *)(lVar3 + 0x90) = param_5;
      *(undefined8 *)(lVar3 + 0xb8) = param_6;
      *(undefined8 *)(lVar3 + 0xc0) = param_7;
      *(undefined8 *)(lVar3 + 200) = *(undefined8 *)(lVar3 + 0xb8);
      *(undefined8 *)(lVar3 + 0xd0) = *(undefined8 *)(lVar3 + 0xc0);
      uVar1 = FUN_01ccdde0(lVar3);
      uVar2 = FUN_01ccde00(lVar3);
      FUN_01cd43b0(lVar3,uVar1,uVar2);
      *(undefined8 *)(lVar3 + 200) = param_6;
      *(undefined8 *)(lVar3 + 0xd0) = param_7;
      (**(code **)(**(longlong **)(*param_17 + 0x70) + 0x80))
                (*(longlong **)(*param_17 + 0x70),&DAT_00f1c594,lVar3);
      iVar8 = param_16;
      if (0 < param_16) {
        do {
          lVar3 = FUN_01ccd700(&DAT_01ccbf00,1);
          *(undefined8 *)(lVar3 + 0x60) = param_18;
          *(longlong *)(lVar3 + 0x68) = *param_17;
          *(undefined1 *)(lVar3 + 0xf0) = 3;
          FUN_01cd6740(lVar3,1);
          FUN_01cd64a0(lVar3,param_9);
          (**(code **)(**(longlong **)(*param_17 + 0x78) + 0x80))
                    (*(longlong **)(*param_17 + 0x78),&DAT_00f1c5a4,lVar3);
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      iVar8 = (**(code **)(**(longlong **)(*param_17 + 0x78) + 0x28))
                        (*(longlong **)(*param_17 + 0x78));
      iVar6 = 1;
      if (0 < iVar8) {
        do {
          uVar4 = FUN_01cd9760(&PTR_FUN_01cd9128,1);
          (**(code **)(**(longlong **)(*param_17 + 0x88) + 0x80))
                    (*(longlong **)(*param_17 + 0x88),L"Grid",uVar4);
          iVar7 = iVar6 + -1;
          lVar3 = (**(code **)(**(longlong **)(*param_17 + 0x88) + 0x30))
                            (*(longlong **)(*param_17 + 0x88),iVar7);
          *(longlong *)(lVar3 + 0x78) = *param_17;
          uVar4 = (**(code **)(**(longlong **)(*param_17 + 0x88) + 0x30))
                            (*(longlong **)(*param_17 + 0x88),iVar7);
          uVar5 = (**(code **)(**(longlong **)(*param_17 + 0x70) + 0x30))
                            (*(longlong **)(*param_17 + 0x70),0);
          FUN_01cd9880(uVar4,uVar5);
          uVar4 = (**(code **)(**(longlong **)(*param_17 + 0x88) + 0x30))
                            (*(longlong **)(*param_17 + 0x88),iVar7);
          uVar5 = (**(code **)(**(longlong **)(*param_17 + 0x78) + 0x30))
                            (*(longlong **)(*param_17 + 0x78),iVar7);
          FUN_01cd98a0(uVar4,uVar5);
          iVar6 = iVar6 + 1;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
    }
    else if (param_1 == '\x05') {
      *(undefined1 *)(*param_17 + 0x59) = 0;
      *(undefined1 *)(*param_17 + 0x68) = 1;
      lVar3 = FUN_01ccd700(&DAT_01ccbf00,1);
      *(undefined8 *)(lVar3 + 0x60) = uVar4;
      *(longlong *)(lVar3 + 0x68) = *param_17;
      *(undefined1 *)(lVar3 + 0xf0) = 4;
      *(undefined1 *)(lVar3 + 0x70) = 3;
      FUN_005fce70(*(undefined8 *)(lVar3 + 0xa0),3);
      FUN_01cd64a0(lVar3,local_res10[0]);
      *(undefined1 *)(lVar3 + 0x80) = param_4;
      *(undefined4 *)(lVar3 + 0x90) = param_5;
      *(undefined8 *)(lVar3 + 0xb8) = param_6;
      *(undefined8 *)(lVar3 + 0xc0) = param_7;
      *(undefined8 *)(lVar3 + 200) = *(undefined8 *)(lVar3 + 0xb8);
      *(undefined8 *)(lVar3 + 0xd0) = *(undefined8 *)(lVar3 + 0xc0);
      (**(code **)(**(longlong **)(*param_17 + 0x70) + 0x80))
                (*(longlong **)(*param_17 + 0x70),&DAT_00f1c594,lVar3);
      iVar8 = param_16;
      if (0 < param_16) {
        do {
          lVar3 = FUN_01ccd700(&DAT_01ccbf00,1);
          *(undefined8 *)(lVar3 + 0x60) = param_18;
          *(longlong *)(lVar3 + 0x68) = *param_17;
          *(undefined1 *)(lVar3 + 0xf0) = 5;
          *(undefined1 *)(lVar3 + 0x70) = 3;
          FUN_01cd64a0(lVar3,param_9);
          *(undefined1 *)(lVar3 + 0x80) = param_11;
          *(undefined4 *)(lVar3 + 0x90) = param_12;
          *(undefined8 *)(lVar3 + 0xb8) = param_13;
          *(undefined8 *)(lVar3 + 0xc0) = param_14;
          *(undefined8 *)(lVar3 + 200) = *(undefined8 *)(lVar3 + 0xb8);
          *(undefined8 *)(lVar3 + 0xd0) = *(undefined8 *)(lVar3 + 0xc0);
          (**(code **)(**(longlong **)(*param_17 + 0x78) + 0x80))
                    (*(longlong **)(*param_17 + 0x78),&DAT_00f1c5a4,lVar3);
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      uVar4 = FUN_01cd9760(&PTR_FUN_01cd9128,1);
      (**(code **)(**(longlong **)(*param_17 + 0x88) + 0x80))
                (*(longlong **)(*param_17 + 0x88),L"Grid",uVar4);
      lVar3 = (**(code **)(**(longlong **)(*param_17 + 0x88) + 0x30))
                        (*(longlong **)(*param_17 + 0x88),0);
      *(longlong *)(lVar3 + 0x78) = *param_17;
      uVar4 = (**(code **)(**(longlong **)(*param_17 + 0x88) + 0x30))
                        (*(longlong **)(*param_17 + 0x88),0);
      uVar5 = (**(code **)(**(longlong **)(*param_17 + 0x70) + 0x30))
                        (*(longlong **)(*param_17 + 0x70),0);
      uVar5 = FUN_004113f0(uVar5,&DAT_01ccbf00);
      FUN_01cd9880(uVar4,uVar5);
      uVar4 = (**(code **)(**(longlong **)(*param_17 + 0x88) + 0x30))
                        (*(longlong **)(*param_17 + 0x88),0);
      uVar5 = (**(code **)(**(longlong **)(*param_17 + 0x78) + 0x30))
                        (*(longlong **)(*param_17 + 0x78),0);
      uVar5 = FUN_004113f0(uVar5,&DAT_01ccbf00);
      FUN_01cd98a0(uVar4,uVar5);
    }
    else if (param_1 == '\x06') {
      *(undefined1 *)(*param_17 + 0x59) = 0;
      *(undefined1 *)(*param_17 + 0x68) = 1;
      lVar3 = FUN_01ccd700(&DAT_01ccbf00,1);
      *(undefined8 *)(lVar3 + 0x60) = uVar4;
      *(longlong *)(lVar3 + 0x68) = *param_17;
      *(undefined1 *)(lVar3 + 0xf0) = 6;
      *(undefined1 *)(lVar3 + 0x70) = 0;
      FUN_005fce70(*(undefined8 *)(lVar3 + 0xa0),3);
      FUN_01cd64a0(lVar3,local_res10[0]);
      *(undefined1 *)(lVar3 + 0x80) = param_4;
      *(undefined4 *)(lVar3 + 0x90) = param_5;
      *(undefined8 *)(lVar3 + 0xb8) = param_6;
      *(undefined8 *)(lVar3 + 0xc0) = param_7;
      *(undefined8 *)(lVar3 + 200) = *(undefined8 *)(lVar3 + 0xb8);
      *(undefined8 *)(lVar3 + 0xd0) = *(undefined8 *)(lVar3 + 0xc0);
      FUN_01cd6740(lVar3,param_8);
      (**(code **)(**(longlong **)(*param_17 + 0x70) + 0x80))
                (*(longlong **)(*param_17 + 0x70),&DAT_00f1c594,lVar3);
      iVar8 = param_16;
      if (0 < param_16) {
        do {
          lVar3 = FUN_01ccd700(&DAT_01ccbf00,1);
          *(undefined8 *)(lVar3 + 0x60) = param_18;
          *(longlong *)(lVar3 + 0x68) = *param_17;
          *(undefined1 *)(lVar3 + 0xf0) = 7;
          *(undefined1 *)(lVar3 + 0x70) = 0;
          FUN_01cd64a0(lVar3,param_9);
          *(undefined1 *)(lVar3 + 0x80) = param_11;
          *(undefined4 *)(lVar3 + 0x90) = param_12;
          *(undefined8 *)(lVar3 + 0xb8) = param_13;
          *(undefined8 *)(lVar3 + 0xc0) = param_14;
          *(undefined8 *)(lVar3 + 200) = *(undefined8 *)(lVar3 + 0xb8);
          *(undefined8 *)(lVar3 + 0xd0) = *(undefined8 *)(lVar3 + 0xc0);
          FUN_01cd6740(lVar3,param_15);
          (**(code **)(**(longlong **)(*param_17 + 0x78) + 0x80))
                    (*(longlong **)(*param_17 + 0x78),&DAT_00f1c5a4,lVar3);
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      uVar4 = FUN_01cd9760(&PTR_FUN_01cd9128,1);
      (**(code **)(**(longlong **)(*param_17 + 0x88) + 0x80))
                (*(longlong **)(*param_17 + 0x88),L"Grid",uVar4);
      lVar3 = (**(code **)(**(longlong **)(*param_17 + 0x88) + 0x30))
                        (*(longlong **)(*param_17 + 0x88),0);
      *(longlong *)(lVar3 + 0x78) = *param_17;
      uVar4 = (**(code **)(**(longlong **)(*param_17 + 0x88) + 0x30))
                        (*(longlong **)(*param_17 + 0x88),0);
      uVar5 = (**(code **)(**(longlong **)(*param_17 + 0x70) + 0x30))
                        (*(longlong **)(*param_17 + 0x70),0);
      uVar5 = FUN_004113f0(uVar5,&DAT_01ccbf00);
      FUN_01cd9880(uVar4,uVar5);
      uVar4 = (**(code **)(**(longlong **)(*param_17 + 0x88) + 0x30))
                        (*(longlong **)(*param_17 + 0x88),0);
      uVar5 = (**(code **)(**(longlong **)(*param_17 + 0x78) + 0x30))
                        (*(longlong **)(*param_17 + 0x78),0);
      uVar5 = FUN_004113f0(uVar5,&DAT_01ccbf00);
      FUN_01cd98a0(uVar4,uVar5);
    }
  }
  FUN_00414480(local_res10);
  FUN_00414480(&param_9);
  return;
}

