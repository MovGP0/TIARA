/* Ghidra address: 0183a7a0 */
/* Ghidra symbol: FUN_0183a7a0 */


void FUN_0183a7a0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  byte bVar7;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 local_30;
  
  local_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  local_30 = 0;
  bVar7 = 0;
  iVar1 = FUN_0181e3e0();
  iVar6 = 0;
  if (-1 < iVar1 + -1) {
    do {
      uVar3 = FUN_0181e3c0(param_2,iVar6);
      FUN_01837010(*(undefined8 *)(param_1 + 0x60),uVar3);
      lVar4 = FUN_0181e3c0(param_2,iVar6);
      iVar2 = FUN_0043e420(*(undefined8 *)(lVar4 + 0x18),L"varparam");
      if (iVar2 == 0) {
        bVar7 = 1;
      }
      else {
        lVar4 = FUN_0181e3c0(param_2,iVar6);
        iVar2 = FUN_0043e420(*(undefined8 *)(lVar4 + 0x18),L"ident");
        if (iVar2 == 0) {
          uVar3 = FUN_0181e3c0(param_2,iVar6);
          FUN_0181e5f0(uVar3,&local_30,L"text");
          FUN_01837080(*(undefined8 *)(param_1 + 0x60),
                       *(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x90),local_30);
          plVar5 = (longlong *)
                   FUN_01837b00(*(undefined8 *)(param_1 + 0x60),param_2,
                                *(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x90),local_30,0,1,
                                *(byte *)(param_1 + 0x3f) | bVar7);
          (**(code **)(*plVar5 + 0x10))(plVar5,&local_50);
          FUN_00461840(plVar5 + 0x11,&local_50);
          FUN_01847420(*(undefined8 *)(param_1 + 0x70),plVar5);
          FUN_0184caa0(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x90),local_30,plVar5);
          bVar7 = 0;
        }
      }
      iVar6 = iVar6 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00460ba0(&local_50);
  FUN_00414480(&local_30);
  return;
}

