/* Ghidra address: 01c10c60 */
/* Ghidra symbol: FUN_01c10c60 */


void FUN_01c10c60(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  int local_38;
  int local_34;
  
  cVar2 = FUN_00664d50(*(undefined8 *)PTR_DAT_020054d8);
  if (cVar2 == '\0') {
    lVar1 = param_1[0x62];
    if ((param_1[100] != 0) && (cVar2 = FUN_01bfaa20(param_1[100]), cVar2 != '\0')) {
      (**(code **)(*param_1 + 0xe0))(param_1,&local_38);
      FUN_005fdab0(*(undefined8 *)(lVar1 + 0x80),0xff0000);
      uVar6 = FUN_005ffa40(lVar1);
      uVar3 = FUN_004230a0(&local_38);
      thunk_FUN_04161b78(uVar6,local_38,local_34,uVar3,2,0x5a0049);
      uVar6 = FUN_005ffa40(lVar1);
      iVar4 = FUN_004230a0(&local_38);
      uVar3 = FUN_004230c0(&local_38);
      thunk_FUN_04161b78(uVar6,local_38 + iVar4 + -4,local_34 + 2,2,uVar3,0x5a0049);
      uVar6 = FUN_005ffa40(lVar1);
      iVar4 = FUN_004230c0(&local_38);
      iVar5 = FUN_004230a0(&local_38);
      thunk_FUN_04161b78(uVar6,local_38 + 3,local_34 + iVar4 + -2,iVar5 + -7,2,0x5a0049);
      uVar6 = FUN_005ffa40(lVar1);
      uVar3 = FUN_004230c0(&local_38);
      thunk_FUN_04161b78(uVar6,local_38 + 1,local_34 + 2,2,uVar3,0x5a0049);
      return;
    }
    FUN_01c06990(param_1,param_2);
  }
  return;
}

