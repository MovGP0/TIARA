/* Ghidra address: 00f20e10 */
/* Ghidra symbol: FUN_00f20e10 */


longlong FUN_00f20e10(longlong param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                     undefined1 param_5,undefined1 param_6)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  lVar3 = FUN_00f211b0(param_1,local_res10[0]);
  if (lVar3 == 0) {
    uVar4 = FUN_00f20920(&DAT_00f1f2d0,1,local_res10[0],param_3,param_6,param_4);
    FUN_004ae7e0(*(undefined8 *)(param_1 + 8),uVar4);
  }
  else {
    lVar1 = *(longlong *)(lVar3 + 8);
    *(undefined1 *)(lVar1 + 0x10) = param_3;
    *(undefined1 *)(lVar1 + 0x13) = param_6;
    (**(code **)(**(longlong **)(lVar1 + 0x18) + 0x90))(*(longlong **)(lVar1 + 0x18));
    plVar2 = *(longlong **)(*(longlong *)(lVar3 + 8) + 0x18);
    (**(code **)(*plVar2 + 0x88))(plVar2,param_4);
  }
  uVar4 = FUN_019a45d0();
  lVar3 = FUN_019ae650(uVar4,local_res10[0]);
  if (lVar3 == 0) {
    lVar3 = FUN_00f1fe30(&PTR_FUN_00f1e9c8,1,local_res10[0],param_3,param_6,param_4);
    *(undefined1 *)(lVar3 + 0x28) = param_5;
    *(undefined1 *)(lVar3 + 0x13) = param_6;
    uVar4 = FUN_019a45d0();
    FUN_019ae7a0(uVar4,lVar3);
  }
  else {
    uVar4 = FUN_019a45d0();
    FUN_019ae7d0(uVar4,lVar3,param_3,0,param_6,param_4,0);
  }
  FUN_00414480(local_res10);
  return lVar3;
}

