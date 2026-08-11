/* Ghidra address: 01833b80 */
/* Ghidra symbol: FUN_01833b80 */


void FUN_01833b80(longlong param_1,undefined8 param_2)

{
  short sVar1;
  int iVar2;
  longlong *plVar3;
  undefined2 uVar4;
  int iVar5;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  int local_70 [2];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  local_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  local_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  local_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  local_50 = 0;
  local_4c = FUN_01847410(param_1);
  FUN_0046c750(&local_40,&local_50,1,0xc);
  iVar2 = FUN_01847410();
  iVar5 = 0;
  if (-1 < iVar2 + -1) {
    do {
      plVar3 = (longlong *)FUN_01847630(param_1,iVar5);
      (**(code **)(*plVar3 + 0x10))(plVar3,&local_68);
      local_70[0] = iVar5;
      FUN_0046ccc0(&local_40,&local_68,1,local_70);
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  local_70[0] = FUN_01847410(param_1);
  FUN_0046ccc0(&local_40,param_2,1,local_70);
  uVar4 = 4;
  sVar1 = FUN_0046c220(param_2);
  if (sVar1 == 9) {
    uVar4 = 8;
  }
  iVar2 = FUN_01847410(param_1);
  FUN_018335a0(param_1,&local_88,&local_40,iVar2 + 1,uVar4);
  FUN_0046f180(&local_a0);
  FUN_00461840(param_1 + 0x90,&local_a0);
  FUN_00417840(&local_a0,&DAT_004013d8,2);
  FUN_00460ba0(&local_68);
  FUN_00460ba0(&local_40);
  return;
}

