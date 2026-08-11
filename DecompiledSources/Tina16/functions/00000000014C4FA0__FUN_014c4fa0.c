/* Ghidra address: 014c4fa0 */
/* Ghidra symbol: FUN_014c4fa0 */


void FUN_014c4fa0(longlong *param_1,int *param_2,longlong param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong local_res18 [2];
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  
  local_40 = 0;
  local_res18[0] = param_3;
  FUN_00414630(param_3);
  if (*param_1 == 0) {
    lVar4 = FUN_00409570(16000);
    *param_1 = lVar4;
  }
  iVar2 = *param_2;
  *param_2 = *param_2 + 1;
  iVar3 = 0;
  if (local_res18[0] != 0) {
    iVar3 = *(int *)(local_res18[0] + -4);
  }
  local_38 = FUN_00409570((longlong)(iVar3 + 1));
  FUN_004425e0(local_38,local_res18[0]);
  local_2c = param_5;
  puVar1 = (undefined8 *)(*param_1 + (longlong)iVar2 * 0x10);
  *puVar1 = local_38;
  puVar1[1] = CONCAT44(param_5,param_4);
  local_30 = param_4;
  FUN_004144d0(&local_40);
  FUN_004144d0(local_res18);
  return;
}

