/* Ghidra address: 0184c6f0 */
/* Ghidra symbol: FUN_0184c6f0 */


undefined8 FUN_0184c6f0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  int local_50 [2];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 local_30;
  int local_2c;
  
  local_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  local_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  local_2c = FUN_01847410(param_1);
  local_2c = local_2c + -1;
  FUN_0046c750(param_2,&local_30,1,0xc);
  iVar1 = FUN_01847410();
  iVar4 = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar2 = FUN_0184c6d0(param_1,iVar4);
      if (lVar2 == 0) {
        FUN_0046f180(&local_48);
        local_50[0] = iVar4;
        FUN_0046ccc0(param_2,&local_48,1,local_50);
      }
      else {
        plVar3 = (longlong *)FUN_0184c6d0(param_1,iVar4);
        (**(code **)(*plVar3 + 0x10))(plVar3,&local_68);
        local_50[0] = iVar4;
        FUN_0046ccc0(param_2,&local_68,1,local_50);
      }
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00460ba0(&local_68);
  FUN_00460ba0(&local_48);
  return param_2;
}

