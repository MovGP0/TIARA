/* Ghidra address: 01d12720 */
/* Ghidra symbol: FUN_01d12720 */


int FUN_01d12720(longlong param_1,ulonglong param_2,ulonglong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  ushort uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  bool bVar11;
  ulonglong local_res18 [2];
  int local_6c;
  int local_68;
  int local_64;
  undefined8 local_60 [2];
  ulonglong local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  int local_2c;
  
  local_60[0] = 0;
  local_50 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_res18[0] = param_3;
  if (*(char *)(param_1 + 0x98) == '\0') {
    local_68 = FUN_01d12610(param_1,param_2,param_3);
  }
  else {
    local_6c = 0;
    local_64 = 0;
    uVar7 = param_2;
    iVar6 = 0;
    if (*(char *)(param_1 + 0x88) == '\0') {
LAB_01d1346b:
      do {
        iVar5 = FUN_01d11780(local_res18[0]);
        if (iVar5 <= iVar6) goto code_r0x01d1347f;
        uVar3 = *(short *)(local_res18[0] + (longlong)iVar6 * 2) - 0x58;
        if (uVar3 < 8) {
          uVar9 = (int)CONCAT71((int7)(uVar7 >> 8),1) << ((byte)uVar3 & 0x1f);
          uVar7 = (ulonglong)uVar9;
          bVar11 = (uVar9 & 0x10) != 0;
        }
        else {
          bVar11 = false;
        }
        if (bVar11) {
          iVar5 = FUN_01d11780(local_res18[0]);
          if ((iVar6 + 2 <= iVar5) &&
             (*(short *)(local_res18[0] + (longlong)(iVar6 + 2) * 2) == 0x28)) {
            iVar10 = iVar6 + 1;
            iVar5 = FUN_01d11780(local_res18[0]);
            if (iVar10 < iVar5) {
              uVar3 = *(ushort *)(local_res18[0] + (longlong)iVar10 * 2);
              if (uVar3 < 0x65) {
                if (uVar3 == 100) {
                  FUN_01d11790(&local_38,local_res18,local_64,(iVar10 - local_64) + -1);
                  uVar7 = local_res18[0];
                  FUN_01d12360(param_1,local_res18[0],iVar6 + 2,&local_38,&local_2c);
                  local_64 = iVar6 + 2 + local_2c + 2;
                  iVar6 = local_64;
                  goto LAB_01d1346b;
                }
                if (uVar3 < 0x54) {
                  if (uVar3 == 0x53) {
                    FUN_01d11790(&local_38,local_res18,local_64,(iVar10 - local_64) + -1);
                    iVar5 = FUN_01d12610(param_1,param_2,local_38);
                    FUN_01d12460(param_1,local_res18[0],iVar6 + 2,&local_40,&local_48,&local_2c);
                    iVar6 = iVar6 + 2 + local_2c;
                    uVar9 = FUN_005fce00(*(undefined8 *)(param_2 + 0x70));
                    uVar7 = (ulonglong)uVar9;
                    uVar2 = *(undefined8 *)(param_2 + 0x70);
                    FUN_004167d0(local_60,local_48);
                    uVar4 = FUN_0043fc00(local_60[0]);
                    FUN_005fce30(uVar2,uVar4);
                    iVar10 = FUN_01d12720(param_1,param_2,local_40);
                    local_6c = local_6c + iVar5 + iVar10;
                    FUN_005fce30(*(undefined8 *)(param_2 + 0x70),uVar7);
                    local_64 = iVar6;
                    goto LAB_01d1346b;
                  }
                  if (uVar3 == 0x42) {
                    FUN_01d11790(&local_38,local_res18,local_64,(iVar10 - local_64) + -1);
                    iVar5 = FUN_01d12610(param_1,param_2,local_38);
                    FUN_01d12360(param_1,local_res18[0],iVar6 + 2,&local_38,&local_2c);
                    iVar6 = iVar6 + 2 + local_2c + 2;
                    uVar9 = FUN_005fce60(*(undefined8 *)(param_2 + 0x70));
                    uVar7 = (ulonglong)uVar9;
                    uVar2 = *(undefined8 *)(param_2 + 0x70);
                    uVar9 = FUN_005fce60(uVar2);
                    FUN_005fce70(uVar2,uVar9 | 1);
                    iVar10 = FUN_01d12720(param_1,param_2,local_38);
                    local_6c = local_6c + iVar5 + iVar10;
                    FUN_005fce70(*(undefined8 *)(param_2 + 0x70),uVar7);
                    local_64 = iVar6;
                    goto LAB_01d1346b;
                  }
                  if (uVar3 == 0x43) {
                    FUN_01d11790(&local_38,local_res18,local_64,(iVar10 - local_64) + -1);
                    iVar5 = FUN_01d12610(param_1,param_2,local_38);
                    FUN_01d12460(param_1,local_res18[0],iVar6 + 2,&local_40,&local_48,&local_2c);
                    iVar6 = iVar6 + 2 + local_2c;
                    uVar7 = param_2;
                    iVar10 = FUN_01d12610(param_1,param_2,local_40);
                    local_6c = local_6c + iVar5 + iVar10;
                    local_64 = iVar6;
                    goto LAB_01d1346b;
                  }
                  if (uVar3 == 0x49) {
                    FUN_01d11790(&local_38,local_res18,local_64,(iVar10 - local_64) + -1);
                    iVar5 = FUN_01d12610(param_1,param_2,local_38);
                    FUN_01d12360(param_1,local_res18[0],iVar6 + 2,&local_38,&local_2c);
                    iVar6 = iVar6 + 2 + local_2c + 2;
                    uVar9 = FUN_005fce60(*(undefined8 *)(param_2 + 0x70));
                    uVar7 = (ulonglong)uVar9;
                    uVar2 = *(undefined8 *)(param_2 + 0x70);
                    uVar9 = FUN_005fce60(uVar2);
                    FUN_005fce70(uVar2,uVar9 | 2);
                    iVar10 = FUN_01d12720(param_1,param_2,local_38);
                    local_6c = local_6c + iVar5 + iVar10;
                    FUN_005fce70(*(undefined8 *)(param_2 + 0x70),uVar7);
                    local_64 = iVar6;
                    goto LAB_01d1346b;
                  }
                }
                else {
                  if (uVar3 == 0x55) {
                    FUN_01d11790(&local_38,local_res18,local_64,(iVar10 - local_64) + -1);
                    iVar5 = FUN_01d12610(param_1,param_2,local_38);
                    FUN_01d12360(param_1,local_res18[0],iVar6 + 2,&local_38,&local_2c);
                    local_64 = iVar6 + 2 + local_2c + 2;
                    uVar9 = FUN_005fce60(*(undefined8 *)(param_2 + 0x70));
                    uVar7 = (ulonglong)uVar9;
                    uVar2 = *(undefined8 *)(param_2 + 0x70);
                    uVar9 = FUN_005fce60(uVar2);
                    FUN_005fce70(uVar2,uVar9 | 4);
                    iVar6 = FUN_01d12720(param_1,param_2,local_38);
                    local_6c = local_6c + iVar5 + iVar6;
                    FUN_005fce70(*(undefined8 *)(param_2 + 0x70),uVar7);
                    iVar6 = local_64;
                    goto LAB_01d1346b;
                  }
                  if (uVar3 == 0x5c) {
                    FUN_01d11790(&local_38,local_res18,local_64,(iVar10 - local_64) + -1);
                    uVar7 = param_2;
                    iVar6 = FUN_01d12610(param_1,param_2,local_38);
                    local_6c = local_6c + iVar6;
                    iVar6 = iVar10;
                    local_64 = iVar10;
                    goto LAB_01d1346b;
                  }
                  if (uVar3 == 0x61) {
                    FUN_01d11790(&local_38,local_res18,local_64,(iVar10 - local_64) + -1);
                    iVar5 = FUN_01d12610(param_1,param_2,local_38);
                    FUN_01d12460(param_1,local_res18[0],iVar6 + 2,&local_40,&local_48,&local_2c);
                    iVar6 = iVar6 + 2 + local_2c;
                    uVar2 = *(undefined8 *)(param_2 + 0x70);
                    uVar9 = FUN_005fce60(uVar2);
                    FUN_005fce70(uVar2,uVar9 | 4);
                    iVar10 = FUN_01d12610(param_1,param_2,local_40);
                    uVar2 = *(undefined8 *)(param_2 + 0x70);
                    uVar7 = FUN_005fce60(uVar2);
                    uVar7 = uVar7 & 0xfffffffb;
                    FUN_005fce70(uVar2,uVar7);
                    local_6c = local_6c + iVar5 + iVar10;
                    local_64 = iVar6;
                    goto LAB_01d1346b;
                  }
                }
              }
              else if (uVar3 < 0x6d) {
                if (uVar3 == 0x6c) {
                  FUN_01d11790(&local_38,local_res18,local_64,(iVar10 - local_64) + -1);
                  iVar5 = FUN_01d12610(param_1,param_2,local_38);
                  FUN_01d12360(param_1,local_res18[0],iVar6 + 2,&local_38,&local_2c);
                  local_64 = iVar6 + 2 + local_2c + 2;
                  FUN_005fccd0(*(undefined8 *)(param_2 + 0x70),&local_50);
                  FUN_005fcd80(*(undefined8 *)(param_2 + 0x70),*(undefined8 *)(param_1 + 0x90));
                  lVar1 = *(longlong *)(param_2 + 0x70);
                  lVar8 = FUN_0040c770((double)(*(int *)(*(longlong *)(lVar1 + 0x18) + 0x28) * 4));
                  if (lVar8 < 0) {
                    lVar8 = -lVar8;
                  }
                  local_6c = local_6c + iVar5 + (int)lVar8;
                  uVar7 = local_50;
                  FUN_005fcd80(lVar1,local_50);
                  iVar6 = local_64;
                  goto LAB_01d1346b;
                }
                if (uVar3 == 0x65) {
                  FUN_01d11790(&local_38,local_res18,local_64,(iVar10 - local_64) + -1);
                  iVar5 = FUN_01d12610(param_1,param_2,local_38);
                  FUN_01d12460(param_1,local_res18[0],iVar6 + 2,&local_40,&local_48,&local_2c);
                  local_64 = iVar6 + 2 + local_2c;
                  iVar6 = FUN_01d12720(param_1,param_2,local_40);
                  uVar9 = FUN_005fce00(*(undefined8 *)(param_2 + 0x70));
                  uVar4 = FUN_0040c840(*(double *)(param_1 + 0x18) * (double)(int)uVar9);
                  FUN_005fce30(*(undefined8 *)(param_2 + 0x70),uVar4);
                  iVar10 = FUN_01d12720(param_1,param_2,local_48);
                  uVar7 = (ulonglong)uVar9;
                  FUN_005fce30(*(undefined8 *)(param_2 + 0x70),uVar7);
                  local_6c = local_6c + iVar5 + iVar6 + iVar10;
                  iVar6 = local_64;
                  goto LAB_01d1346b;
                }
                if (uVar3 == 0x66) {
                  FUN_01d11790(&local_38,local_res18,local_64,(iVar10 - local_64) + -1);
                  iVar5 = FUN_01d12610(param_1,param_2,local_38);
                  FUN_01d12460(param_1,local_res18[0],iVar6 + 2,&local_40,&local_48,&local_2c);
                  local_64 = iVar6 + 2 + local_2c;
                  uVar4 = FUN_01d12720(param_1,param_2,local_40);
                  uVar9 = FUN_01d12720(param_1,param_2,local_48);
                  uVar7 = (ulonglong)uVar9;
                  iVar6 = FUN_01d120a0(uVar4,uVar7);
                  local_6c = local_6c + iVar5 + iVar6;
                  iVar6 = local_64;
                  goto LAB_01d1346b;
                }
                if (uVar3 == 0x69) {
                  FUN_01d11790(&local_38,local_res18,local_64,(iVar10 - local_64) + -1);
                  iVar5 = FUN_01d12610(param_1,param_2,local_38);
                  FUN_01d12460(param_1,local_res18[0],iVar6 + 2,&local_40,&local_48,&local_2c);
                  local_64 = iVar6 + 2 + local_2c;
                  iVar6 = FUN_01d12720(param_1,param_2,local_40);
                  uVar9 = FUN_005fce00(*(undefined8 *)(param_2 + 0x70));
                  uVar4 = FUN_0040c840(*(double *)(param_1 + 0x20) * (double)(int)uVar9);
                  FUN_005fce30(*(undefined8 *)(param_2 + 0x70),uVar4);
                  iVar10 = FUN_01d12720(param_1,param_2,local_48);
                  uVar7 = (ulonglong)uVar9;
                  FUN_005fce30(*(undefined8 *)(param_2 + 0x70),uVar7);
                  local_6c = local_6c + iVar5 + iVar6 + iVar10;
                  iVar6 = local_64;
                  goto LAB_01d1346b;
                }
              }
              else {
                if (uVar3 == 0x6f) {
                  FUN_01d11790(&local_38,local_res18,local_64,(iVar10 - local_64) + -1);
                  iVar5 = FUN_01d12610(param_1,param_2,local_38);
                  FUN_01d12460(param_1,local_res18[0],iVar6 + 2,&local_40,&local_48,&local_2c);
                  local_64 = iVar6 + 2 + local_2c;
                  uVar4 = FUN_01d12720(param_1,param_2,local_40);
                  uVar9 = FUN_01d12720(param_1,param_2,local_48);
                  uVar7 = (ulonglong)uVar9;
                  iVar6 = FUN_01d120a0(uVar4,uVar7);
                  local_6c = local_6c + iVar5 + iVar6;
                  iVar6 = local_64;
                  goto LAB_01d1346b;
                }
                if (uVar3 == 0x73) {
                  FUN_01d11790(&local_38,local_res18,local_64,(iVar10 - local_64) + -1);
                  iVar5 = FUN_01d12610(param_1,param_2,local_38);
                  FUN_01d12360(param_1,local_res18[0],iVar6 + 2,&local_38,&local_2c);
                  local_64 = iVar6 + 2 + local_2c + 2;
                  FUN_005fccd0(*(undefined8 *)(param_2 + 0x70),&local_50);
                  FUN_005fcd80(*(undefined8 *)(param_2 + 0x70),*(undefined8 *)(param_1 + 0x90));
                  iVar6 = FUN_01d12720(param_1,param_2,local_38);
                  local_6c = local_6c + iVar5 + iVar6;
                  uVar7 = local_50;
                  FUN_005fcd80(*(undefined8 *)(param_2 + 0x70),local_50);
                  iVar6 = local_64;
                  goto LAB_01d1346b;
                }
              }
              FUN_01d11790(&local_38,local_res18,local_64,iVar10 - local_64);
              uVar7 = param_2;
              iVar6 = FUN_01d12610(param_1,param_2,local_38);
              local_6c = local_6c + iVar6;
              iVar6 = iVar10;
              local_64 = iVar10;
              goto LAB_01d1346b;
            }
            FUN_01d120b0(param_1);
            iVar6 = iVar10;
            goto LAB_01d1346b;
          }
        }
        iVar6 = iVar6 + 1;
      } while( true );
    }
    local_68 = FUN_01d13560(param_1,param_2,param_3);
  }
LAB_01d13502:
  FUN_00414480(local_60);
  FUN_00414480(&local_50);
  return local_68;
code_r0x01d1347f:
  iVar5 = FUN_01d11780(local_res18[0]);
  if (local_64 <= iVar5 + -1) {
    FUN_01d11790(&local_38,local_res18,local_64,iVar6 - local_64);
    iVar6 = FUN_01d12610(param_1,param_2,local_38);
    local_6c = local_6c + iVar6;
  }
  local_68 = local_6c;
  FUN_00442c30(local_38);
  FUN_00442c30(local_40);
  FUN_00442c30(local_48);
  FUN_00442c30(0);
  goto LAB_01d13502;
}

