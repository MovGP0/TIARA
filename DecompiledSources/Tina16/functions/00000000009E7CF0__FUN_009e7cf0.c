/* Ghidra address: 009e7cf0 */
/* Ghidra symbol: FUN_009e7cf0 */


longlong * FUN_009e7cf0(longlong *param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  short *psVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30 [2];
  
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_58 = 0;
  local_48 = 0;
  local_50 = 0;
  local_40[0] = 0;
  local_30[0] = 0;
  local_78 = param_2;
  iVar2 = (**(code **)(*param_1 + 0x28))(param_1);
  if (iVar2 == 1) {
    (**(code **)(*param_1 + 0x18))(param_1,local_40,0);
    iVar3 = FUN_00416420(local_40[0],0);
    if (iVar3 == 0) {
      uVar4 = FUN_009e9540(param_1);
      FUN_00416780(&local_48,uVar4);
      uVar4 = FUN_009e9540(param_1);
      FUN_00416780(&local_50,uVar4);
      FUN_00416ad0(&local_48,local_50);
      FUN_004168e0(local_78,local_48);
      goto code_r0x009e7ef2;
    }
  }
  FUN_00414520(local_78);
  iVar3 = 0;
  if (-1 < iVar2 + -1) {
    do {
      (**(code **)(*param_1 + 0x18))(param_1,local_30,iVar3);
      psVar6 = (short *)FUN_00415f70(local_30[0]);
      while (cVar1 = FUN_009e7c90(auStack_98,*psVar6), cVar1 == '\0') {
        psVar6 = (short *)thunk_FUN_041d655c(psVar6);
      }
      if (*psVar6 != 0) {
        uVar4 = FUN_009e9540(param_1);
        FUN_00711850(&local_58,local_30[0],uVar4);
        FUN_00414be0(local_30,local_58);
      }
      FUN_00416020(&local_60,*local_78,local_30[0]);
      FUN_004168b0(&local_68,local_60);
      uVar4 = FUN_009e94c0(param_1);
      FUN_00416780(&local_70,uVar4);
      FUN_00416ad0(&local_68,local_70);
      FUN_004168e0(local_78,local_68);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  uVar5 = 0;
  if (*local_78 != 0) {
    uVar5 = *(uint *)(*local_78 + -4) >> 1;
  }
  FUN_00416490(local_78,uVar5,1);
code_r0x009e7ef2:
  FUN_00414560(&local_70,2);
  FUN_004145c0(&local_60,2);
  FUN_00414560(&local_50,2);
  FUN_00414520(local_40);
  FUN_00414520(local_30);
  return local_78;
}

