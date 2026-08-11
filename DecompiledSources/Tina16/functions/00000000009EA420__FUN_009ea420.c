/* Ghidra address: 009ea420 */
/* Ghidra symbol: FUN_009ea420 */


void FUN_009ea420(undefined8 param_1,uint param_2,uint param_3,code *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint local_2c;
  
  local_2c = param_2;
  do {
    uVar4 = local_2c + param_3 >> 1;
    uVar2 = local_2c;
    uVar3 = param_3;
    do {
      while (iVar1 = (*param_4)(param_1,uVar2,uVar4), iVar1 < 0) {
        uVar2 = uVar2 + 1;
      }
      while (iVar1 = (*param_4)(param_1,uVar3,uVar4), 0 < iVar1) {
        uVar3 = uVar3 - 1;
      }
      if ((int)uVar2 <= (int)uVar3) {
        FUN_009e9f90(param_1,uVar2,uVar3);
        uVar5 = uVar3;
        if ((uVar4 != uVar2) && (uVar5 = uVar4, uVar4 == uVar3)) {
          uVar5 = uVar2;
        }
        uVar2 = uVar2 + 1;
        uVar3 = uVar3 - 1;
        uVar4 = uVar5;
      }
    } while ((int)uVar2 <= (int)uVar3);
    if ((int)local_2c < (int)uVar3) {
      FUN_009ea420(param_1,local_2c,uVar3,param_4);
    }
    local_2c = uVar2;
  } while ((int)uVar2 < (int)param_3);
  return;
}

