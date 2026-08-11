/* Ghidra address: 00c2ffc0 */
/* Ghidra symbol: FUN_00c2ffc0 */


void FUN_00c2ffc0(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  code *pcVar5;
  uint uVar6;
  int local_44;
  undefined8 local_40;
  undefined1 local_38 [16];
  
  local_40 = 0;
  iVar1 = FUN_00c1aa10();
  local_44 = 0;
  if (-1 < iVar1 + -1) {
    do {
      plVar3 = (longlong *)FUN_00c2fce0(param_1,local_44);
      (**(code **)(*plVar3 + 0x28))(plVar3,param_2);
      uVar4 = (**(code **)(*param_1 + 0x20))(param_1);
      uVar2 = FUN_00c1aa10(param_1);
      uVar2 = thunk_FUN_03f3ed25(local_44 + 1,100,uVar2);
      uVar6 = 0;
      FUN_004238d0(local_38,0,0,0,0);
      FUN_0041ddd0(&local_40,PTR_PTR_02004f48);
      pcVar5 = (code *)FUN_00411550(uVar4,0xfffd);
      (*pcVar5)(uVar4,param_1,1,uVar2,uVar6 & 0xffffff00,local_38,local_40);
      local_44 = local_44 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414480(&local_40);
  return;
}

