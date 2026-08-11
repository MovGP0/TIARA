/* Ghidra address: 00d3c490 */
/* Ghidra symbol: FUN_00d3c490 */


int FUN_00d3c490(longlong param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_var;
  int iVar3;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_64 [8];
  int local_5c;
  int local_58;
  int local_54;
  int local_48;
  int local_44;
  int local_38 [4];
  
  FUN_00d3c440(param_1,local_64);
  iVar3 = *param_2;
  iVar1 = *(int *)(param_1 + 0x8c);
  FUN_00787fc0(*(undefined8 *)(param_1 + 0x18),&local_48);
  FUN_00d3c8b0(param_1,local_38);
  iVar3 = (iVar3 - iVar1) - local_48;
  iVar1 = FUN_00d3c830(param_1);
  FUN_00429ca0(local_38,-local_48,-local_44);
  FUN_00d3c3b0(param_1);
  FUN_004238d0(&local_78,iVar3,0,iVar3 + iVar1,extraout_var);
  *(undefined8 *)(param_1 + 0x9c) = local_78;
  *(undefined8 *)(param_1 + 0xa4) = uStack_70;
  if (local_58 - local_5c < 1) {
    iVar3 = iVar3 - local_38[0];
  }
  else {
    iVar2 = FUN_004230a0(local_38);
    iVar3 = thunk_FUN_03f3ed25(iVar3 - local_38[0],((local_58 - local_5c) - local_54) + 1,
                               iVar2 - iVar1);
  }
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  iVar1 = (local_58 - local_54) + 1;
  if (iVar1 <= iVar3) {
    iVar3 = iVar1;
  }
  return iVar3;
}

