/* Ghidra address: 00ef9280 */
/* Ghidra symbol: FUN_00ef9280 */


void FUN_00ef9280(undefined8 *param_1,int param_2,int param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_2c;
  
  local_2c = param_3 + -2;
  if (-1 < local_2c) {
    do {
      iVar3 = 0;
      if (-1 < local_2c) {
        iVar5 = local_2c + 1;
        do {
          iVar4 = param_2 + iVar3;
          uVar1 = FUN_00ef8190(*param_1,iVar4);
          uVar2 = FUN_00ef8190(*param_1,iVar4 + 1);
          if ((ushort)uVar2 < (ushort)uVar1) {
            FUN_00ef7de0(param_1,iVar4,uVar2,param_4);
            FUN_00ef7de0(param_1,iVar4 + 1,uVar1,param_4);
          }
          iVar3 = iVar3 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      local_2c = local_2c + -1;
    } while (local_2c != -1);
  }
  return;
}

