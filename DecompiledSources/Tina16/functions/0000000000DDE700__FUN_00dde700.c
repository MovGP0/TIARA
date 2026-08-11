/* Ghidra address: 00dde700 */
/* Ghidra symbol: FUN_00dde700 */


void FUN_00dde700(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_60;
  undefined1 *local_58;
  undefined1 local_40 [16];
  undefined1 *local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = auStack_88;
  FUN_00ddd3d0(param_1);
  local_28 = thunk_FUN_04128719();
  local_20 = FUN_007f94c0(0);
  uVar3 = FUN_0065b4a0(param_1);
  FUN_0064d000(param_1,local_40);
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1 + 0x570;
  }
  local_68 = 0;
  local_58 = local_40;
  local_60 = uVar3;
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x4b0) + 0x58))
                    (*(longlong **)(param_1 + 0x4b0),param_2,0,lVar4);
  FUN_006245b0(uVar1);
  FUN_007f95c0(local_20);
  thunk_FUN_04161dbd(local_28);
  thunk_FUN_03c244fb(local_28);
  if (*(longlong *)(param_1 + 0x4b8) != 0) {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x4b8) + 0x20))(*(longlong **)(param_1 + 0x4b8));
    if (iVar2 != 1) {
      FUN_00dde530(param_1);
    }
  }
  return;
}

