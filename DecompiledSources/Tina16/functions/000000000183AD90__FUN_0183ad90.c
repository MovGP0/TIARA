/* Ghidra address: 0183ad90 */
/* Ghidra symbol: FUN_0183ad90 */


void FUN_0183ad90(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 unaff_RSI;
  undefined8 local_50 [2];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  ulonglong uVar9;
  
  local_50[0] = 0;
  local_30[0] = 0;
  local_38 = 0;
  local_40 = 0;
  FUN_00414480(&local_38);
  FUN_00414480(&local_40);
  uVar9 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),7);
  uVar8 = (undefined4)uVar9;
  iVar1 = FUN_0181e3e0();
  iVar7 = 0;
  if (-1 < iVar1 + -1) {
    do {
      uVar4 = FUN_0181e3c0(param_2,iVar7);
      FUN_01837010(param_1,uVar4);
      lVar5 = FUN_0181e3c0(param_2,iVar7);
      FUN_0043e1a0(local_30,*(undefined8 *)(lVar5 + 0x18));
      iVar2 = FUN_00416db0(local_30[0],L"type");
      if (iVar2 == 0) {
        uVar4 = FUN_0181e3c0(param_2,iVar7);
        FUN_0181e5f0(uVar4,&local_40,L"text");
        uVar3 = FUN_01837460(param_1,local_40);
        uVar9 = (ulonglong)uVar3;
      }
      else {
        iVar2 = FUN_00416db0(local_30[0],L"name");
        if (iVar2 == 0) {
          uVar4 = FUN_0181e3c0(param_2,iVar7);
          FUN_0181e5f0(uVar4,&local_38,L"text");
          FUN_01837080(param_1,param_3,local_38);
        }
      }
      uVar8 = (undefined4)uVar9;
      iVar7 = iVar7 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  iVar1 = FUN_0043e420(local_40,L"void");
  lVar5 = FUN_01847b70(&PTR_FUN_01843fa0,1,local_38,uVar8,local_40,param_3,iVar1 != 0);
  FUN_01836fd0(param_1,local_50,param_2);
  FUN_00414ad0(lVar5 + 0x38,local_50[0]);
  FUN_00414ad0(lVar5 + 0x40,*(undefined8 *)(param_1 + 0x50));
  FUN_0184caa0(param_3,local_38,lVar5);
  iVar1 = FUN_0181e3e0();
  iVar7 = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar6 = FUN_0181e3c0(param_2,iVar7);
      FUN_0043e1a0(local_30,*(undefined8 *)(lVar6 + 0x18));
      iVar2 = FUN_00416db0(local_30[0],L"parameters");
      if (iVar2 == 0) {
        uVar4 = FUN_0181e3c0(param_2,iVar7);
        FUN_0183a9d0(param_1,uVar4,lVar5);
      }
      iVar7 = iVar7 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414480(local_50);
  FUN_00414560(&local_40,3);
  return;
}

