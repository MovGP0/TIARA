/* Ghidra address: 00de0250 */
/* Ghidra symbol: FUN_00de0250 */


void FUN_00de0250(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined1 *local_60;
  int local_4c;
  longlong *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  local_60 = auStack_88;
  local_68 = 0;
  local_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  local_48 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_00ddf1f0(param_1,param_2,local_48);
  iVar1 = (**(code **)(*local_48 + 0x28))();
  local_4c = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(*local_48 + 0x18))(local_48,&local_68,local_4c);
      iVar2 = FUN_0043e6d0(param_3,local_68);
      if (iVar2 == 0) {
        uVar3 = (**(code **)(*local_48 + 0x30))(local_48,local_4c);
        uVar4 = FUN_00460ba0(&local_40);
        uVar3 = (**(code **)(**(longlong **)(param_1 + 0x4d0) + 0x30))
                          (*(longlong **)(param_1 + 0x4d0),param_2,uVar3,uVar4);
        FUN_006245b0(uVar3);
        FUN_00de0420(param_1,param_2,&local_40);
        FUN_00de03d0(0,local_60);
        goto LAB_00de03aa;
      }
      local_4c = local_4c + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00410f20(local_48);
  FUN_00de0540(param_1,param_2,param_3);
LAB_00de03aa:
  FUN_00414480(&local_68);
  FUN_00460ba0(&local_40);
  return;
}

