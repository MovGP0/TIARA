/* Ghidra address: 00c26980 */
/* Ghidra symbol: FUN_00c26980 */


void FUN_00c26980(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  code *pcVar9;
  uint uVar10;
  undefined1 auStack_10118 [32];
  uint uStack_100f8;
  undefined1 *puStack_100f0;
  undefined8 uStack_100e8;
  uint uStack_100d8;
  int iStack_100d4;
  undefined8 uStack_100d0;
  undefined8 uStack_100c8;
  undefined1 auStack_100c0 [16];
  undefined8 uStack_100b0;
  undefined8 uStack_100a8;
  undefined1 *puStack_100a0;
  int iStack_10084;
  undefined4 uStack_10080;
  int iStack_1007c;
  int iStack_10078;
  int iStack_10074;
  undefined4 uStack_10070;
  int iStack_1006c;
  undefined1 *puStack_10068;
  int iStack_1005c;
  int iStack_10050;
  int iStack_1004c;
  byte bStack_10045;
  int iStack_10044;
  longlong lStack_10040;
  int iStack_10038;
  undefined1 uStack_10031;
  undefined1 *puStack_10030;
  undefined1 local_8028 [28680];
  undefined1 auStack_1020 [4096];
  ulonglong uVar8;
  
  uVar8 = 0xf08;
  do {
    uVar7 = uVar8 - 0x1000;
    auStack_1020[uVar8] = (char)uVar7;
    uVar8 = uVar7;
  } while (0xfffffffffffeff08 < uVar7);
  puStack_100a0 = auStack_10118;
  uStack_100d0 = 0;
  uStack_100c8 = 0;
  uStack_100b0 = 0;
  uStack_100a8 = 0;
  iVar4 = (**(code **)(*param_2 + 0x18))(param_2,&bStack_10045,1);
  if (iVar4 == 1) {
    if (bStack_10045 < 0xd) {
      FUN_00c28a90(param_1);
      FUN_00c28a40(param_1);
      iStack_10044 = bStack_10045 + 1;
      iStack_10038 = 1 << (bStack_10045 & 0x1f);
      iStack_1005c = iStack_10038 + 1;
      iStack_1004c = iStack_10038 * 2;
      iStack_10050 = iStack_10038 + 2;
      uStack_10031 = 1;
      puStack_10030 = local_8028;
      lStack_10040 = FUN_00c26150(&DAT_00c25ea0,1,param_2);
      plVar1 = *(longlong **)(param_1 + 8);
      *(longlong **)(lStack_10040 + 0x10) = plVar1;
      *(undefined8 *)(lStack_10040 + 8) = *(undefined8 *)(*plVar1 + 0xf0);
      iStack_10084 = 10000;
      cVar3 = FUN_00c29da0(param_1);
      if (cVar3 == '\0') {
        puStack_10068 = *(undefined1 **)(param_1 + 0x30);
        iVar4 = (uint)*(ushort *)(param_1 + 0x4f) * (uint)*(ushort *)(param_1 + 0x4d);
        iStack_100d4 = iVar4 + -1;
        iStack_10074 = 0;
        uVar10 = uStack_100d8;
        if (-1 < iStack_100d4) {
          do {
            iStack_100d4 = iVar4;
            iStack_1006c = FUN_00c26940(auStack_10118);
            uVar10 = uStack_100d8;
            if (iStack_1006c < 0) break;
            *puStack_10068 = (undefined1)iStack_1006c;
            puStack_10068 = puStack_10068 + 1;
            iStack_10084 = iStack_10084 + -1;
            if (iStack_10084 < 0) {
              uVar5 = FUN_004b6da0(param_2);
              uVar6 = (**(code **)*param_2)(param_2);
              thunk_FUN_03f3ed25(uVar5,100,uVar6);
              uStack_100f8 = 0;
              FUN_004238d0(auStack_100c0,0,0,0);
              FUN_0041ddd0(&uStack_100d0,PTR_PTR_02002b90);
              uVar2 = *(undefined8 *)(param_1 + 8);
              pcVar9 = (code *)FUN_00411550(uVar2,0xfffd);
              uStack_100f8 = uStack_100f8 & 0xffffff00;
              puStack_100f0 = auStack_100c0;
              uStack_100e8 = uStack_100d0;
              (*pcVar9)(uVar2,param_1,1);
              iStack_10084 = 10000;
            }
            iStack_100d4 = iStack_100d4 + -1;
            uVar10 = uStack_100d8;
            iVar4 = iStack_100d4;
          } while (iStack_100d4 != 0);
        }
      }
      else {
        iStack_10074 = 0;
        iStack_10078 = 0;
        iStack_1007c = 8;
        uStack_100d8 = (uint)*(ushort *)(param_1 + 0x4f);
        uStack_10080 = 0;
        uVar10 = uStack_100d8 - 1;
        if (-1 < (int)(uStack_100d8 - 1)) {
          do {
            uVar10 = (uint)*(ushort *)(param_1 + 0x4d);
            puStack_10068 =
                 (undefined1 *)
                 (*(longlong *)(param_1 + 0x30) + (longlong)(int)(uVar10 * iStack_10074));
            uStack_10070 = 0;
            if (-1 < (int)(uVar10 - 1)) {
              do {
                iStack_1006c = FUN_00c26940(auStack_10118);
                if (iStack_1006c < 0) {
                  FUN_00c26f00(0,puStack_100a0);
                  goto LAB_00c26ed7;
                }
                *puStack_10068 = (undefined1)iStack_1006c;
                puStack_10068 = puStack_10068 + 1;
                uVar10 = uVar10 - 1;
              } while (uVar10 != 0);
            }
            iStack_10074 = iStack_10074 + iStack_1007c;
            if ((int)(uint)*(ushort *)(param_1 + 0x4f) <= iStack_10074) {
              do {
                if (0 < iStack_10078) {
                  iStack_1007c = iStack_1007c / 2;
                }
                iStack_10078 = iStack_10078 + 1;
                iStack_10074 = iStack_1007c / 2;
              } while ((int)(uint)*(ushort *)(param_1 + 0x4f) <= iStack_10074);
            }
            iStack_10084 = iStack_10084 - (uint)*(ushort *)(param_1 + 0x4d);
            if (iStack_10084 < 1) {
              uVar5 = FUN_004b6da0(param_2);
              uVar6 = (**(code **)*param_2)(param_2);
              thunk_FUN_03f3ed25(uVar5,100,uVar6);
              uStack_100f8 = 0;
              FUN_004238d0(auStack_100c0,0,0,0);
              FUN_0041ddd0(&uStack_100c8,PTR_PTR_02002b90);
              uVar2 = *(undefined8 *)(param_1 + 8);
              pcVar9 = (code *)FUN_00411550(uVar2,0xfffd);
              uStack_100f8 = uStack_100f8 & 0xffffff00;
              puStack_100f0 = auStack_100c0;
              uStack_100e8 = uStack_100c8;
              (*pcVar9)(uVar2,param_1,1);
              iStack_10084 = 10000;
            }
            uStack_100d8 = uStack_100d8 - 1;
            uVar10 = uStack_100d8;
          } while (uStack_100d8 != 0);
        }
      }
      uStack_100d8 = uVar10;
      FUN_00c26530(lStack_10040);
      FUN_00410f20(lStack_10040);
    }
    else {
      FUN_0041ddd0(&uStack_100b0,PTR_PTR_020050a0);
      FUN_00c1a780(param_1,1,uStack_100b0);
    }
  }
  else {
    FUN_0041ddd0(&uStack_100a8,PTR_PTR_02005bb8);
    FUN_00c1a780(param_1,1,uStack_100a8);
  }
LAB_00c26ed7:
  FUN_00414560(&uStack_100d0,2);
  FUN_00414560(&uStack_100b0,2);
  return;
}

