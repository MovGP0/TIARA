/* Ghidra address: 0183ab20 */
/* Ghidra symbol: FUN_0183ab20 */


void FUN_0183ab20(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_40 = 0;
  local_30[0] = 0;
  local_38 = 0;
  uVar3 = FUN_0181e3c0(param_2,0);
  FUN_01837010(param_1,uVar3);
  uVar3 = FUN_0181e3c0(param_2,0);
  FUN_0181e5f0(uVar3,&local_38,L"text");
  FUN_01837080(param_1,param_3,local_38);
  lVar4 = FUN_01847b70(&PTR_FUN_01843fa0,1,local_38,10,0,param_3,0);
  FUN_01836fd0(param_1,&local_40,param_2);
  FUN_00414ad0(lVar4 + 0x38,local_40);
  FUN_00414ad0(lVar4 + 0x40,*(undefined8 *)(param_1 + 0x50));
  FUN_0184caa0(param_3,local_38,lVar4);
  iVar1 = FUN_0181e3e0();
  iVar6 = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar5 = FUN_0181e3c0(param_2,iVar6);
      FUN_0043e1a0(local_30,*(undefined8 *)(lVar5 + 0x18));
      iVar2 = FUN_00416db0(local_30[0],L"parameters");
      if (iVar2 == 0) {
        uVar3 = FUN_0181e3c0(param_2,iVar6);
        FUN_0183a9d0(param_1,uVar3,lVar4);
      }
      iVar6 = iVar6 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414560(&local_40,3);
  return;
}

