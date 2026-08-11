/* Ghidra address: 0112dc70 */
/* Ghidra symbol: FUN_0112dc70 */


void FUN_0112dc70(undefined8 *param_1,undefined8 *param_2,char *param_3,char *param_4)

{
  int iVar1;
  uint uVar2;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  *(undefined8 *)param_3 = *param_1;
  *(undefined8 *)(param_3 + 8) = param_1[1];
  *(undefined8 *)(param_3 + 0x10) = param_1[2];
  *(undefined8 *)(param_3 + 0x18) = param_1[3];
  *(undefined2 *)(param_3 + 0x20) = *(undefined2 *)(param_1 + 4);
  *(undefined8 *)param_4 = *param_2;
  *(undefined8 *)(param_4 + 8) = param_2[1];
  *(undefined8 *)(param_4 + 0x10) = param_2[2];
  *(undefined8 *)(param_4 + 0x18) = param_2[3];
  *(undefined2 *)(param_4 + 0x20) = *(undefined2 *)(param_2 + 4);
  if ((*param_3 != *param_4) || ((param_3[1] & 0x3fU) != (param_4[1] & 0x3fU))) {
    FUN_0112d9d0(param_3,&local_2c,&local_30);
    FUN_0112d9d0(param_4,&local_34,&local_38);
    if (local_34 < local_2c) {
      local_34 = local_2c;
    }
    if (local_34 == 0) {
      local_34 = 1;
    }
    if (local_38 < local_30) {
      local_38 = local_30;
    }
    iVar1 = 0x40 - local_34;
    if (local_38 <= 0x40 - local_34) {
      iVar1 = local_38;
    }
    uVar2 = local_34 + iVar1;
    if (((int)uVar2 < 0x40) && ((uVar2 & 1) != 0)) {
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 1;
    }
    FUN_0112ebb0(param_3,param_3,uVar2,iVar1);
    FUN_0112ebb0(param_4,param_4,uVar2,iVar1);
  }
  return;
}

