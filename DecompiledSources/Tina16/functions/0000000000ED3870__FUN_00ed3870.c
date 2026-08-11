/* Ghidra address: 00ed3870 */
/* Ghidra symbol: FUN_00ed3870 */


void FUN_00ed3870(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 local_38 [24];
  
  if (*(int *)(param_1 + 0x910) < 0) {
    FUN_00603cf0(*(undefined8 *)(*(longlong *)(param_1 + 0x7f0) + 0x318),0);
    lVar4 = FUN_00741ea0(*(undefined8 *)(param_1 + 0x7f0));
    FUN_005fdab0(*(undefined8 *)(lVar4 + 0x80),*(undefined4 *)(*(longlong *)(param_1 + 0x7e8) + 200)
                );
    plVar3 = (longlong *)FUN_00741ea0(*(undefined8 *)(param_1 + 0x7f0));
    (**(code **)(**(longlong **)(param_1 + 0x7f0) + 0xe0))(*(longlong **)(param_1 + 0x7f0),local_38)
    ;
    (**(code **)(*plVar3 + 0xa8))(plVar3,local_38);
    lVar4 = FUN_00741ea0(*(undefined8 *)(param_1 + 0x7f0));
    FUN_005fd4e0(*(undefined8 *)(lVar4 + 0x78),0xff);
    plVar3 = (longlong *)FUN_00741ea0(*(undefined8 *)(param_1 + 0x7f0));
    (**(code **)(*plVar3 + 200))(plVar3,0,0);
    plVar3 = (longlong *)FUN_00741ea0(*(undefined8 *)(param_1 + 0x7f0));
    (**(code **)(*plVar3 + 0xc0))
              (plVar3,*(undefined4 *)(*(longlong *)(param_1 + 0x7f0) + 0x98),
               *(undefined4 *)(*(longlong *)(param_1 + 0x7f0) + 0x9c));
    plVar3 = (longlong *)FUN_00741ea0(*(undefined8 *)(param_1 + 0x7f0));
    (**(code **)(*plVar3 + 200))(plVar3,0,*(undefined4 *)(*(longlong *)(param_1 + 0x7f0) + 0x9c));
    plVar3 = (longlong *)FUN_00741ea0(*(undefined8 *)(param_1 + 0x7f0));
    (**(code **)(*plVar3 + 0xc0))(plVar3,*(undefined4 *)(*(longlong *)(param_1 + 0x7f0) + 0x98),0);
  }
  else {
    uVar2 = FUN_00608c80(&PTR_FUN_005f92e8,1);
    FUN_0060bbf0(uVar2,6);
    FUN_007d5cb0(*(undefined8 *)(param_1 + 0x7e0),*(undefined4 *)(param_1 + 0x910),uVar2);
    plVar3 = (longlong *)FUN_00609e10(uVar2);
    uVar1 = (**(code **)(*plVar3 + 0x30))(plVar3,0,0);
    FUN_0060be30(uVar2,uVar1);
    FUN_00603cf0(*(undefined8 *)(*(longlong *)(param_1 + 0x7f0) + 0x318),uVar2);
    FUN_00741fe0(*(undefined8 *)(param_1 + 0x7f0),1);
    FUN_00742060(*(undefined8 *)(param_1 + 0x7f0),1);
    FUN_00410f20(uVar2);
  }
  return;
}

