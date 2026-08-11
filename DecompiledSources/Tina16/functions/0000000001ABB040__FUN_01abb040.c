/* Ghidra address: 01abb040 */
/* Ghidra symbol: FUN_01abb040 */


void FUN_01abb040(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 local_2c [3];
  
  iVar2 = FUN_01d31a40(param_2);
  if (iVar2 == 0) {
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
      plVar1 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x798) + 0xd8);
      uVar3 = (**(code **)(*plVar1 + 0x30))(plVar1,0);
      *(undefined8 *)(param_1 + 0x70) = uVar3;
    }
    FUN_01d31e40(param_2,*(undefined8 *)(param_1 + 0x78));
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
    FUN_01d30f00(param_2,param_1 + 0xb8,8);
    FUN_01d30f00(param_2,param_1 + 200,8);
    FUN_01d30f00(param_2,local_2c,4);
    lVar4 = FUN_01cedea0(*(undefined8 *)(param_1 + 0x38),local_2c[0]);
    *(longlong *)(param_1 + 0xe8) = lVar4;
    if (lVar4 == 0) {
      plVar1 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x798) + 0xd8);
      lVar4 = (**(code **)(*plVar1 + 0x30))(plVar1,0);
      uVar3 = (**(code **)(**(longlong **)(lVar4 + 0x70) + 0x30))(*(longlong **)(lVar4 + 0x70),0);
      *(undefined8 *)(param_1 + 0xe8) = uVar3;
    }
    FUN_004ae7e0(*(undefined8 *)(*(longlong *)(param_1 + 0xe8) + 0xf8),param_1);
    FUN_01d30f00(param_2,local_2c,4);
    lVar4 = FUN_01cedea0(*(undefined8 *)(param_1 + 0x38),local_2c[0]);
    *(longlong *)(param_1 + 0xf0) = lVar4;
    if (lVar4 == 0) {
      plVar1 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x798) + 0xd8);
      lVar4 = (**(code **)(*plVar1 + 0x30))(plVar1,0);
      uVar3 = (**(code **)(**(longlong **)(lVar4 + 0x78) + 0x30))(*(longlong **)(lVar4 + 0x78),0);
      *(undefined8 *)(param_1 + 0xf0) = uVar3;
    }
    FUN_004ae7e0(*(undefined8 *)(*(longlong *)(param_1 + 0xf0) + 0xf8),param_1);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x70) + 0x80);
    (**(code **)(*plVar1 + 0x80))(plVar1,0,param_1);
  }
  return;
}

