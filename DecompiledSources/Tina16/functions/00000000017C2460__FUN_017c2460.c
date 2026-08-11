/* Ghidra address: 017c2460 */
/* Ghidra symbol: FUN_017c2460 */


int FUN_017c2460(undefined8 param_1,int param_2,int param_3)

{
  short extraout_AX;
  short extraout_AX_00;
  int iVar1;
  short extraout_var;
  short extraout_var_00;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  short local_40;
  short sStack_3e;
  short local_3c;
  short sStack_3a;
  
  iVar5 = 0x7ffd;
  iVar1 = FUN_017c2b70();
  iVar6 = 0;
  if (-1 < iVar1 + -2) {
    iVar1 = iVar1 + -1;
    do {
      FUN_017c2c60(param_1,iVar6);
      FUN_017c2c60(param_1,iVar6 + 1);
      if (extraout_AX == extraout_AX_00) {
        uVar3 = param_2 - extraout_AX >> 0x1f;
        iVar2 = (param_2 - extraout_AX ^ uVar3) - uVar3;
        sStack_3a = extraout_var;
        sStack_3e = extraout_var_00;
        if (extraout_var_00 < extraout_var) {
          sStack_3a = extraout_var_00;
          sStack_3e = extraout_var;
        }
        iVar4 = iVar2;
        if (param_3 < sStack_3a) {
          iVar4 = sStack_3a - param_3;
        }
        if (sStack_3e < param_3) {
          iVar4 = param_3 - sStack_3e;
        }
      }
      else {
        uVar3 = param_3 - extraout_var >> 0x1f;
        iVar2 = (param_3 - extraout_var ^ uVar3) - uVar3;
        local_3c = extraout_AX;
        local_40 = extraout_AX_00;
        if (extraout_AX_00 < extraout_AX) {
          local_3c = extraout_AX_00;
          local_40 = extraout_AX;
        }
        iVar4 = iVar2;
        if (param_2 < local_3c) {
          iVar4 = local_3c - param_2;
        }
        if (local_40 < param_2) {
          iVar4 = param_2 - local_40;
        }
      }
      if (iVar2 < iVar4) {
        iVar2 = iVar4;
      }
      if (iVar2 == 0) {
        iVar2 = -(iVar6 + 1);
      }
      if (iVar2 < iVar5) {
        iVar5 = iVar2;
      }
      if (iVar5 < 1) {
        return iVar5;
      }
      iVar6 = iVar6 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return iVar5;
}

