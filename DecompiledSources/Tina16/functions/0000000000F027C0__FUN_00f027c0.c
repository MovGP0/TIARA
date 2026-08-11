/* Ghidra address: 00f027c0 */
/* Ghidra symbol: FUN_00f027c0 */


void FUN_00f027c0(longlong param_1,undefined4 param_2,int param_3,undefined8 *param_4,byte param_5)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  bool bVar7;
  undefined8 local_58;
  undefined8 local_50 [2];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_58 = 0;
  local_50[0] = 0;
  local_40 = 0;
  local_38 = *param_4;
  uStack_30 = param_4[1];
  if ((*(ushort *)(param_1 + 0x34) & 1) == 0) {
    bVar7 = (param_5 & 4) == 0;
    if (bVar7) {
      uVar6 = 2;
    }
    else {
      thunk_FUN_04176532(&local_38,0xffffffff,0xffffffff);
      uVar6 = 1;
    }
    lVar1 = *(longlong *)(param_1 + 0x490);
    lVar4 = FUN_00f03860(*(undefined8 *)(param_1 + 0x660),param_2);
    if (bVar7) {
      uVar5 = FUN_00f03060(lVar4);
      FUN_005ff880(lVar1,uVar5);
      uVar3 = FUN_00f03040(lVar4);
      FUN_005fdab0(*(undefined8 *)(lVar1 + 0x80),uVar3);
    }
    else {
      uVar5 = FUN_00f040f0(*(undefined8 *)(lVar4 + 0x20));
      FUN_005ff880(lVar1,uVar5);
      uVar3 = FUN_00f04080(*(undefined8 *)(lVar4 + 0x20));
      FUN_005fdab0(*(undefined8 *)(lVar1 + 0x80),uVar3);
    }
    FUN_0084e320(param_1,local_50,param_2,param_3);
    uVar2 = FUN_00f03010(lVar4);
    FUN_00f00af0(*(undefined8 *)(param_1 + 0x490),&local_38,uVar6,uVar6,local_50[0],uVar2);
    if (!bVar7) {
      thunk_FUN_04176532(&local_38,1,1);
      if (param_3 < 1) {
        uVar5 = *(undefined8 *)(lVar4 + 0x20);
        FUN_00f040b0(uVar5,&local_58);
        uVar2 = FUN_00f04050(uVar5);
        FUN_00f00af0(*(undefined8 *)(param_1 + 0x490),&local_38,uVar6,uVar6,local_58,uVar2);
      }
      uVar5 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x490));
      thunk_FUN_03998bad(uVar5,&local_38,4,0xc);
      uVar5 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x490));
      thunk_FUN_03998bad(uVar5,&local_38,4,3);
    }
    FUN_0084ddf0(param_1,param_2,param_3,&local_38,param_5);
  }
  else {
    FUN_005fdab0(*(undefined8 *)(*(longlong *)(param_1 + 0x490) + 0x80),
                 *(undefined4 *)(param_1 + 200));
    (**(code **)(**(longlong **)(param_1 + 0x490) + 0xa8))
              (*(longlong **)(param_1 + 0x490),&local_38);
  }
  FUN_00414560(&local_58,2);
  FUN_00414480(&local_40);
  return;
}

