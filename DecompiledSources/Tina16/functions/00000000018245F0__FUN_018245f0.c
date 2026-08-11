/* Ghidra address: 018245f0 */
/* Ghidra symbol: FUN_018245f0 */


undefined8 FUN_018245f0(undefined8 param_1,undefined8 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  int iVar4;
  int local_68 [2];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  longlong local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  local_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  local_40 = *param_2;
  uStack_38 = param_2[1];
  uStack_30 = param_2[2];
  FUN_0046bd60(&local_40);
  iVar1 = FUN_0046c9e0(&local_40,1);
  FUN_00419260(&local_48,&DAT_018245b8,1,(longlong)(iVar1 + 1));
  iVar4 = 0;
  if (-1 < iVar1) {
    iVar1 = iVar1 + 1;
    do {
      local_68[0] = iVar4;
      FUN_0046cb70(&local_60,&local_40,1,local_68);
      uVar2 = FUN_00462650(&local_60);
      *(undefined4 *)(local_48 + (longlong)iVar4 * 4) = uVar2;
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  lVar3 = 0;
  if (local_48 != 0) {
    lVar3 = *(longlong *)(local_48 + -8);
  }
  FUN_0046c750(param_1,local_48,lVar3 + -1,param_3);
  FUN_00419430(&local_48,&DAT_018245b8);
  FUN_00460ba0(&local_60);
  FUN_00419430(&local_48,&DAT_018245b8);
  FUN_00460ba0(&local_40);
  return param_1;
}

