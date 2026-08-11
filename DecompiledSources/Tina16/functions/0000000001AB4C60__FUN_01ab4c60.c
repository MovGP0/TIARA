/* Ghidra address: 01ab4c60 */
/* Ghidra symbol: FUN_01ab4c60 */


void FUN_01ab4c60(longlong param_1,undefined8 param_2,ushort param_3)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_41;
  longlong local_40;
  longlong local_38;
  uint local_2c;
  
  local_58 = 0;
  local_50 = 0;
  bVar2 = false;
  iVar3 = FUN_01d31a40(param_2);
  if (iVar3 == 0) {
    FUN_01abdc90(&PTR_FUN_01aae560,&local_38,&local_40);
    FUN_01d30f00(param_2,param_1 + 0x40,4);
    FUN_01d30f00(param_2,&local_2c,4);
    uVar4 = FUN_01cedea0(*(undefined8 *)(param_1 + 0x38),local_2c);
    FUN_01ab28d0(param_1,uVar4);
    if (*(longlong *)(param_1 + 0x70) == 0) {
      FUN_01ab28d0(param_1,*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798));
    }
    FUN_01d30f00(param_2,&local_2c,4);
    lVar5 = FUN_01cedea0(*(undefined8 *)(param_1 + 0x38),local_2c);
    *(longlong *)(param_1 + 0x78) = lVar5;
    if (lVar5 == 0) {
      bVar2 = true;
      if (local_38 == 0) {
        if (local_40 == 0) {
          *(undefined8 *)(param_1 + 0x78) = 0;
        }
        else {
          *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(local_40 + 0x78);
        }
      }
      else {
        *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(local_38 + 0x78);
      }
    }
    FUN_01d30f00(param_2,param_1 + 0x5c,1);
    FUN_01d31e40(param_2,*(undefined8 *)(param_1 + 0x60));
    FUN_01d30f00(param_2,param_1 + 0xa8,1);
    FUN_01d30f00(param_2,param_1 + 0xb8,4);
    FUN_01d30f00(param_2,param_1 + 0xbc,4);
    FUN_01d30f00(param_2,param_1 + 0xc0,4);
    FUN_01d30f00(param_2,&local_2c,4);
    uVar4 = FUN_01cef240(*(undefined8 *)(param_1 + 0x38),local_2c);
    *(undefined8 *)(param_1 + 0xd0) = uVar4;
    FUN_01d30f00(param_2,&local_2c,4);
    uVar4 = FUN_01cc5fa0(*(undefined8 *)(param_1 + 0xd0),local_2c);
    *(undefined8 *)(param_1 + 0xe0) = uVar4;
    FUN_01d30f00(param_2,&local_41,1);
    uVar4 = FUN_01abc400(local_41,*(undefined8 *)(param_1 + 0xd0));
    *(undefined8 *)(param_1 + 200) = uVar4;
    FUN_01cc8360(uVar4);
    uVar4 = (**(code **)(**(longlong **)(param_1 + 200) + 0x58))
                      (*(longlong **)(param_1 + 200),*(undefined8 *)(param_1 + 0xe0));
    *(undefined8 *)(param_1 + 0x80) = uVar4;
    uVar4 = (**(code **)(**(longlong **)(param_1 + 200) + 0x60))
                      (*(longlong **)(param_1 + 200),*(undefined8 *)(param_1 + 0xe0));
    *(undefined8 *)(param_1 + 0x88) = uVar4;
    uVar4 = (**(code **)(**(longlong **)(param_1 + 200) + 0x68))
                      (*(longlong **)(param_1 + 200),*(undefined8 *)(param_1 + 0xe0));
    *(undefined8 *)(param_1 + 0x90) = uVar4;
    uVar4 = (**(code **)(**(longlong **)(param_1 + 200) + 0x70))
                      (*(longlong **)(param_1 + 200),*(undefined8 *)(param_1 + 0xe0));
    *(undefined8 *)(param_1 + 0x98) = uVar4;
    FUN_01d30f00(param_2,&local_2c,4);
    lVar5 = FUN_01cedea0(*(undefined8 *)(param_1 + 0x38),local_2c);
    *(longlong *)(param_1 + 0xf8) = lVar5;
    if (lVar5 == 0) {
      if (local_38 == 0) {
        if (local_40 == 0) {
          *(undefined8 *)(param_1 + 0xf8) = 0;
        }
        else {
          *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(local_40 + 0xf8);
        }
      }
      else {
        *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(local_38 + 0xf8);
      }
    }
    if (*(longlong *)(param_1 + 0xf8) != 0) {
      FUN_004ae7e0(*(undefined8 *)(*(longlong *)(param_1 + 0xf8) + 0xf8),param_1);
    }
    FUN_01d30f00(param_2,&local_2c,4);
    lVar5 = FUN_01cedea0(*(undefined8 *)(param_1 + 0x38),local_2c);
    *(longlong *)(param_1 + 0x100) = lVar5;
    if (lVar5 == 0) {
      if (local_38 == 0) {
        if (local_40 == 0) {
          *(undefined8 *)(param_1 + 0x100) = 0;
        }
        else {
          *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(local_40 + 0x100);
        }
      }
      else {
        *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(local_38 + 0x100);
      }
    }
    if (*(longlong *)(param_1 + 0x100) != 0) {
      FUN_004ae7e0(*(undefined8 *)(*(longlong *)(param_1 + 0x100) + 0xf8),param_1);
    }
    if (0x10 < param_3) {
      uVar4 = FUN_004b6930(&PTR_FUN_00478280,1);
      FUN_01d32040(param_2,uVar4);
      FUN_005dd980(*(undefined8 *)(param_1 + 0xa0),uVar4);
      FUN_00410f20(uVar4);
    }
    lVar5 = *(longlong *)(param_1 + 0x78);
    if (lVar5 == 0) {
      FUN_01ab2940(param_1,&local_58);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x38) + 0x38);
      (**(code **)(*plVar1 + 0x80))(plVar1,local_58,param_1);
    }
    else {
      FUN_01ab2940(param_1,&local_50);
      plVar1 = *(longlong **)(lVar5 + 0x80);
      (**(code **)(*plVar1 + 0x80))(plVar1,local_50,param_1);
      if ((bVar2) && (*(longlong *)(param_1 + 0xf8) != 0)) {
        FUN_01ad85f0(*(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0xf8),0);
      }
      if ((bVar2) && (*(longlong *)(param_1 + 0x100) != 0)) {
        FUN_01ad85f0(*(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x100),0);
      }
    }
  }
  FUN_00414560(&local_58,2);
  return;
}

