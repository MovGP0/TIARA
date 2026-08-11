/* Ghidra address: 007426a0 */
/* Ghidra symbol: FUN_007426a0 */


void FUN_007426a0(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  
  plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x70) + 0x310);
  FUN_005fd4e0(plVar5[0xf],*(undefined4 *)(param_1 + 0x4c));
  uVar1 = *(undefined4 *)((longlong)param_2 + 0xc);
  uVar2 = *(undefined4 *)param_2;
  uVar3 = *(undefined4 *)((longlong)param_2 + 4);
  local_78 = *param_2;
  uVar4 = *(undefined4 *)(param_2 + 1);
  uVar6 = param_2[1];
  local_80 = CONCAT44(uVar1,uVar2);
  local_70 = CONCAT44(uVar3,uVar4);
  local_50 = uVar4;
  uStack_4c = uVar3;
  local_48 = uVar2;
  uStack_44 = uVar3;
  local_40 = uVar2;
  uStack_3c = uVar1;
  (**(code **)(*plVar5 + 0xe0))(plVar5,&local_80,2);
  FUN_005fd4e0(plVar5[0xf],*(undefined4 *)(param_1 + 0x48));
  local_80 = CONCAT44(uVar3,uVar4);
  local_70 = CONCAT44(uVar1,uVar2);
  local_78 = uVar6;
  local_68 = uVar2;
  uStack_64 = uVar1;
  local_60 = uVar4;
  uStack_5c = uVar1;
  local_58 = uVar4;
  uStack_54 = uVar3;
  (**(code **)(*plVar5 + 0xe0))(plVar5,&local_80,2);
  return;
}

