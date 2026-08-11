/* Ghidra address: 0053afa0 */
/* Ghidra symbol: FUN_0053afa0 */


undefined1 FUN_0053afa0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  local_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  FUN_00417580(param_3,&DAT_00527bf8);
  uVar1 = *param_1;
  plVar2 = (longlong *)FUN_00589390(uVar1);
  lVar3 = FUN_00589390(uVar1);
  if (*(longlong *)(lVar3 + 8) < *plVar2) {
    uVar1 = param_1[2];
    plVar2 = (longlong *)FUN_00589390(param_2);
    lVar3 = FUN_00589390(param_2);
    if (*(longlong *)(lVar3 + 8) < *plVar2) {
      FUN_00560880(&local_48,uVar1);
      FUN_00417c40(param_3,&local_48,&DAT_00527bf8);
    }
    else {
      FUN_005608c0(&local_68,uVar1);
      FUN_00417c40(param_3,&local_68,&DAT_00527bf8);
    }
  }
  else {
    uVar1 = param_1[2];
    plVar2 = (longlong *)FUN_00589390(param_2);
    lVar3 = FUN_00589390(param_2);
    if (*(longlong *)(lVar3 + 8) < *plVar2) {
      FUN_00560880(&local_88,uVar1);
      FUN_00417c40(param_3,&local_88,&DAT_00527bf8);
    }
    else {
      FUN_005608c0(&local_a8,uVar1);
      FUN_00417c40(param_3,&local_a8,&DAT_00527bf8);
    }
  }
  FUN_00417840(&local_a8,&DAT_00527bf8,4);
  return 1;
}

