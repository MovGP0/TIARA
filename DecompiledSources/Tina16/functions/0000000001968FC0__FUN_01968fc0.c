/* Ghidra address: 01968fc0 */
/* Ghidra symbol: FUN_01968fc0 */


void FUN_01968fc0(longlong *param_1,longlong *param_2,double param_3,double param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  int local_4c;
  longlong *local_30;
  
  local_30 = (longlong *)0x0;
  FUN_01967ea0(param_1,param_2,param_3,param_4,param_5,param_6);
  if (*(char *)((longlong)param_1 + 0x1cc) == '\0') {
    FUN_005fcd80(param_2[0xe],L"Tahoma");
    uVar1 = FUN_0040c770(param_4 * 8.0);
    FUN_005fce30(param_2[0xe],uVar1);
    lVar7 = param_2[0xe];
    uVar1 = FUN_005fcc70(lVar7);
    uVar1 = thunk_FUN_03f3ed25(uVar1,DAT_01fb7de8,*(undefined4 *)(param_2[0xe] + 0x2c));
    FUN_005fcc80(lVar7,uVar1);
    FUN_005fc860(param_2[0xe],0);
    FUN_005fce70(param_2[0xe],0);
    iVar2 = FUN_0040c770(((double)param_1[0x14] - (double)param_1[0x3f]) * param_4);
    if ((double)param_1[0x3f] != 0.0) {
      if ((param_1[0x4b] == 0) || (lVar7 = (**(code **)(*param_1 + 0x118))(param_1), lVar7 == 0)) {
        if ((int)param_1[0x4f] == 0) {
          FUN_00414480(&local_30);
        }
        else {
          FUN_0043f750(&local_30,(int)param_1[0x4f]);
        }
      }
      else {
        uVar8 = (**(code **)(*param_1 + 0x118))(param_1);
        FUN_01970f30(uVar8,&local_30,param_1[0x4b]);
      }
      iVar3 = FUN_005fdff0(param_2,local_30);
      uVar1 = (undefined4)((ulonglong)param_5 >> 0x20);
      if (0.7 < param_3) {
        uVar8 = FUN_0180bfb0();
        uVar8 = FUN_01809e30(uVar8);
        uVar9 = FUN_0180bfb0();
        lVar7 = FUN_01809e30(uVar9);
        uVar4 = FUN_0040c770((((double)param_1[0x15] * param_3 - (double)iVar3) -
                             (double)*(int *)(lVar7 + 0x94)) - 4.0);
        uVar5 = FUN_0040c770((double)iVar2 + param_4 * 2.0);
        param_5 = CONCAT44(uVar1,0x35);
        FUN_007d6c70(uVar8,param_2,uVar4,uVar5,param_5,1);
      }
      if (local_30 != (longlong *)0x0) {
        uVar1 = FUN_0040c770(((double)param_1[0x15] * param_3 - (double)iVar3) - 3.0);
        (**(code **)(*param_2 + 0x120))(param_2,uVar1,iVar2 + 3,local_30);
      }
    }
    if (1 < (int)param_1[0x4a]) {
      FUN_005fd670(param_2[0xf],2);
      FUN_005fd4e0(param_2[0xf],0);
      FUN_005fdcb0(param_2[0x10],1);
      iVar2 = (int)param_1[0x4a];
      local_4c = 1;
      if (0 < iVar2) {
        do {
          uVar10 = (undefined4)((ulonglong)param_5 >> 0x20);
          uVar1 = FUN_0040c770((double)(local_4c + -1) *
                               ((double)param_1[0x49] + (double)param_1[0x48]) * param_3);
          uVar4 = FUN_0040c770((double)param_1[0x14] * param_4);
          uVar5 = FUN_0040c770(((double)(local_4c + -1) *
                                ((double)param_1[0x49] + (double)param_1[0x48]) +
                               (double)param_1[0x49]) * param_3);
          uVar6 = FUN_0040c770(((double)param_1[0x14] + (double)param_1[0x16]) * param_4);
          param_5 = CONCAT44(uVar10,uVar6);
          (**(code **)(*param_2 + 0xf8))(param_2,uVar1,uVar4,uVar5,param_5);
          local_4c = local_4c + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
    }
  }
  FUN_00414480(&local_30);
  return;
}

