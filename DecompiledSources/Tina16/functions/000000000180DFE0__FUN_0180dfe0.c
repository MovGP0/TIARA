/* Ghidra address: 0180dfe0 */
/* Ghidra symbol: FUN_0180dfe0 */


void FUN_0180dfe0(longlong param_1,longlong *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined1 local_40;
  undefined1 local_30 [16];
  undefined1 *local_20;
  
  local_20 = auStack_68;
  (**(code **)(*param_2 + 0x88))(param_2,*(undefined4 *)(param_1 + 0x94));
  (**(code **)(*param_2 + 0x70))(param_2,*(undefined4 *)(param_1 + 0x90));
  uVar2 = FUN_00609e10(param_2);
  FUN_005fdf10(uVar2);
  lVar3 = FUN_00609e10(param_2);
  FUN_005fdab0(*(undefined8 *)(lVar3 + 0x80),param_4);
  plVar4 = (longlong *)FUN_00609e10(param_2);
  uVar1 = (**(code **)(*param_2 + 0x60))(param_2);
  local_48 = (**(code **)(*param_2 + 0x48))(param_2);
  FUN_004238d0(local_30,0,0,uVar1);
  (**(code **)(*plVar4 + 0xa8))(plVar4,local_30);
  uVar2 = FUN_00609e10(param_2);
  FUN_005fe090(uVar2);
  uVar2 = FUN_00609e10(param_2);
  local_40 = 1;
  local_48 = param_3;
  FUN_007d6c70(param_1,uVar2,0,0);
  return;
}

