/* Ghidra address: 01833d80 */
/* Ghidra symbol: FUN_01833d80 */


undefined8 FUN_01833d80(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  int local_70 [2];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 local_50;
  int local_4c;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
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
  local_4c = local_4c + -1;
  FUN_0046c750(&local_40,&local_50,1,0xc);
  iVar1 = FUN_01847410();
  iVar4 = 0;
  if (-1 < iVar1 + -1) {
    do {
      plVar3 = (longlong *)FUN_01847630(param_1,iVar4);
      (**(code **)(*plVar3 + 0x10))(plVar3,&local_68);
      local_70[0] = iVar4;
      FUN_0046ccc0(&local_40,&local_68,1,local_70);
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  uVar2 = FUN_01847410(param_1);
  FUN_018335a0(param_1,param_2,&local_40,uVar2,1);
  FUN_0046f180(&local_88);
  FUN_00461840(param_1 + 0x90,&local_88);
  FUN_00460ba0(&local_88);
  FUN_00460ba0(&local_68);
  FUN_00460ba0(&local_40);
  return param_2;
}

