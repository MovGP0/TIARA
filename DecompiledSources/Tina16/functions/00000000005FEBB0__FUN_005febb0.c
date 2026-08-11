/* Ghidra address: 005febb0 */
/* Ghidra symbol: FUN_005febb0 */


void FUN_005febb0(longlong *param_1,int param_2,int param_3,longlong *param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 local_38 [16];
  
  if (param_4 != (longlong *)0x0) {
    cVar1 = (**(code **)(*param_4 + 0x40))(param_4);
    if (cVar1 == '\0') {
      (**(code **)(*param_1 + 0x50))(param_1);
      (**(code **)(*param_1 + 0x58))(param_1,1);
      uVar2 = FUN_005fbf20(*(undefined4 *)(*(longlong *)(param_1[0x10] + 0x18) + 0x28));
      thunk_FUN_03e3a7dc(param_1[0xc],uVar2);
      uVar2 = FUN_005fbf20(*(undefined4 *)(param_1[0xe] + 0x28));
      thunk_FUN_0412a071(param_1[0xc],uVar2);
      iVar3 = (**(code **)(*param_4 + 0x60))(param_4);
      iVar4 = (**(code **)(*param_4 + 0x48))(param_4);
      FUN_004238d0(local_38,param_2,param_3,param_2 + iVar3,param_3 + iVar4);
      (**(code **)(*param_4 + 0x28))(param_4,param_1,local_38);
      (**(code **)(*param_1 + 0x48))(param_1);
    }
  }
  return;
}

