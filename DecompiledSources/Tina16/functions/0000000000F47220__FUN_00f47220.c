/* Ghidra address: 00f47220 */
/* Ghidra symbol: FUN_00f47220 */


void FUN_00f47220(longlong param_1,int param_2,int param_3,int param_4,int param_5,
                 undefined1 param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int local_res10 [2];
  int local_res18 [2];
  int local_res20 [2];
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  
  local_res10[0] = param_2;
  local_res18[0] = param_3;
  local_res20[0] = param_4;
  FUN_01b1cd00(local_res10,local_res18);
  FUN_01b1cd00(local_res20,&param_5);
  FUN_00b956d0(&local_48,local_res10[0],local_res18[0],local_res20[0],param_5);
  FUN_00b95740(&local_48,param_1 + 0x10);
  local_res10[0] = local_48;
  local_res18[0] = local_44;
  local_res20[0] = local_40;
  param_5 = local_3c;
  uVar3 = (local_40 - local_48) / 8;
  iVar1 = 0;
  if (uVar3 < 0x80000000) {
    iVar4 = uVar3 + 1;
    do {
      uVar3 = (param_5 - local_res18[0]) / 8;
      iVar2 = 0;
      if (uVar3 < 0x80000000) {
        iVar5 = uVar3 + 1;
        do {
          FUN_00f471e0(param_1,iVar1 * 8 + local_res10[0],iVar2 * 8 + local_res18[0],param_6);
          iVar2 = iVar2 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      iVar1 = iVar1 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

