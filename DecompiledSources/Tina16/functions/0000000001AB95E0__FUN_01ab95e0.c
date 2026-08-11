/* Ghidra address: 01ab95e0 */
/* Ghidra symbol: FUN_01ab95e0 */


void FUN_01ab95e0(longlong param_1,undefined8 param_2,ushort param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong local_58;
  longlong local_50 [2];
  longlong local_40;
  longlong local_38;
  uint local_2c [3];
  
  local_58 = 0;
  local_50[0] = 0;
  iVar2 = FUN_01d31a40(param_2);
  if (iVar2 == 0) {
    FUN_01abdc90(&PTR_FUN_01aaff18,&local_38,&local_40);
    FUN_01d30f00(param_2,param_1 + 0x40,4);
    FUN_01d30f00(param_2,local_2c,4);
    uVar3 = FUN_01cedea0(*(undefined8 *)(param_1 + 0x38),local_2c[0]);
    FUN_01ab6ed0(param_1,uVar3);
    if (*(longlong *)(param_1 + 0x60) == 0) {
      FUN_01ab6ed0(param_1,*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798));
    }
    FUN_01d30f00(param_2,local_2c,4);
    lVar4 = FUN_01cedea0(*(undefined8 *)(param_1 + 0x38),local_2c[0]);
    *(longlong *)(param_1 + 0x70) = lVar4;
    if (lVar4 == 0) {
      if (local_38 == 0) {
        if (local_40 == 0) {
          *(undefined8 *)(param_1 + 0x70) = 0;
        }
        else {
          *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(local_40 + 0x70);
        }
      }
      else {
        *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(local_38 + 0x70);
      }
    }
    FUN_01d31e40(param_2,*(undefined8 *)(param_1 + 0x78));
    FUN_01d30f00(param_2,local_2c,4);
    uVar3 = FUN_01cef240(*(undefined8 *)(param_1 + 0x38),local_2c[0]);
    *(undefined8 *)(param_1 + 0x88) = uVar3;
    FUN_01d30f00(param_2,local_2c,4);
    if (*(longlong *)(param_1 + 0x88) != 0) {
      uVar3 = FUN_01cc5fa0(*(longlong *)(param_1 + 0x88),local_2c[0]);
      *(undefined8 *)(param_1 + 0x98) = uVar3;
    }
    uVar3 = FUN_01cc9f30(&PTR_FUN_01cbae98,1,*(undefined8 *)(param_1 + 0x88));
    *(undefined8 *)(param_1 + 0x80) = uVar3;
    FUN_01cc8360(uVar3);
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x58))
                      (*(longlong **)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x98));
    *(undefined8 *)(param_1 + 0xb8) = uVar3;
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x60))
                      (*(longlong **)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x98));
    *(undefined8 *)(param_1 + 0xc0) = uVar3;
    FUN_01d30f00(param_2,local_2c,4);
    lVar4 = FUN_01cedea0(*(undefined8 *)(param_1 + 0x38),local_2c[0]);
    *(longlong *)(param_1 + 0xe8) = lVar4;
    if (lVar4 == 0) {
      if (local_38 == 0) {
        if (local_40 == 0) {
          *(undefined8 *)(param_1 + 0xe8) = 0;
        }
        else {
          *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(local_40 + 0xe8);
        }
      }
      else {
        *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(local_38 + 0xe8);
      }
    }
    if (*(longlong *)(param_1 + 0xe8) != 0) {
      FUN_004ae7e0(*(undefined8 *)(*(longlong *)(param_1 + 0xe8) + 0xf8),param_1);
    }
    FUN_01d30f00(param_2,local_2c,4);
    lVar4 = FUN_01cedea0(*(undefined8 *)(param_1 + 0x38),local_2c[0]);
    *(longlong *)(param_1 + 0xf0) = lVar4;
    if (lVar4 == 0) {
      if (local_38 == 0) {
        if (local_40 == 0) {
          *(undefined8 *)(param_1 + 0xf0) = 0;
        }
        else {
          *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(local_40 + 0xf0);
        }
      }
      else {
        *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(local_38 + 0xf0);
      }
    }
    if (*(longlong *)(param_1 + 0xf0) != 0) {
      FUN_004ae7e0(*(undefined8 *)(*(longlong *)(param_1 + 0xf0) + 0xf8),param_1);
    }
    lVar4 = *(longlong *)(param_1 + 0x70);
    if (lVar4 == 0) {
      FUN_01ab6de0(param_1,&local_58);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x38) + 0x38);
      (**(code **)(*plVar1 + 0x80))(plVar1,local_58,param_1);
    }
    else {
      FUN_01ab6de0(param_1,local_50);
      plVar1 = *(longlong **)(lVar4 + 0x80);
      (**(code **)(*plVar1 + 0x80))(plVar1,local_50[0],param_1);
    }
    if (0x10 < param_3) {
      FUN_01d30f00(param_2,param_1 + 0xd8,1);
      FUN_01d312f0(param_2,param_1 + 0xe0);
    }
    if (0x20 < param_3) {
      uVar3 = FUN_004b6930(&PTR_FUN_00478280,1);
      FUN_01d32040(param_2,uVar3);
      FUN_005dd980(*(undefined8 *)(param_1 + 0x68),uVar3);
      FUN_00410f20(uVar3);
    }
  }
  FUN_00414560(&local_58,2);
  return;
}

