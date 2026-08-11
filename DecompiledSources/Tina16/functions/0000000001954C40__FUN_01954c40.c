/* Ghidra address: 01954c40 */
/* Ghidra symbol: FUN_01954c40 */


void FUN_01954c40(longlong *param_1,longlong *param_2,double param_3,double param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int local_58;
  int local_54;
  int local_4c;
  
  (**(code **)(*param_1 + 0xd8))(param_1,0x403c000000000000);
  (**(code **)(*param_1 + 0xe0))(param_1,0x403c000000000000);
  uVar1 = FUN_0040c770((double)param_1[0x13] * param_3);
  uVar2 = FUN_0040c770((double)param_1[0x14] * param_4);
  uVar3 = FUN_0040c770(((double)param_1[0x13] + (double)param_1[0x15]) * param_3);
  uVar4 = FUN_0040c770(((double)param_1[0x14] + (double)param_1[0x16]) * param_4);
  FUN_00498350(&local_58,uVar1,uVar2,uVar3,uVar4);
  FUN_005fdab0(param_2[0x10],0xff00000f);
  (**(code **)(*param_2 + 0xa8))(param_2,&local_58);
  uVar7 = FUN_005ffa40(param_2);
  thunk_FUN_03998bad(uVar7,&local_58,5,0xf);
  FUN_01881a00();
  iVar5 = FUN_004b2060();
  iVar10 = 0;
  iVar6 = -1;
  if (-1 < iVar5 + -1) {
    do {
      uVar7 = FUN_01881a00();
      lVar8 = FUN_01881250(uVar7,iVar10);
      lVar9 = FUN_00410ad0(param_1);
      if (*(longlong *)(lVar8 + 0x18) == lVar9) {
        iVar6 = *(int *)(lVar8 + 0x28);
        break;
      }
      iVar10 = iVar10 + 1;
      iVar5 = iVar5 + -1;
      iVar6 = -1;
    } while (iVar5 != 0);
  }
  if (iVar6 != -1) {
    uVar7 = FUN_0180bfb0();
    uVar7 = FUN_0180a250(uVar7);
    uVar1 = FUN_0040c770((double)local_58 + param_3 * 6.0);
    uVar2 = FUN_0040c770((double)local_54 + param_4 * 6.0);
    FUN_007d6c70(uVar7,param_2,uVar1,uVar2,iVar6,1);
  }
  FUN_005fcd80(param_2[0xe],L"Tahoma");
  FUN_005fce30(param_2[0xe],8);
  FUN_005fc860(param_2[0xe],0);
  FUN_005fce70(param_2[0xe],0);
  lVar8 = param_2[0xe];
  iVar6 = FUN_005fcc70(lVar8);
  uVar1 = FUN_0040c770((double)iVar6 * param_3);
  FUN_005fcc80(lVar8,uVar1);
  iVar6 = FUN_005fdff0(param_2,param_1[2]);
  FUN_005fdab0(param_2[0x10],0xff000005);
  lVar8 = FUN_0040c770((double)iVar6 - param_3 * 28.0);
  uVar1 = FUN_0040c770((double)local_4c + param_4 * 4.0);
  (**(code **)(*param_2 + 0x120))(param_2,local_58 - (int)(lVar8 / 2),uVar1,param_1[2]);
  return;
}

