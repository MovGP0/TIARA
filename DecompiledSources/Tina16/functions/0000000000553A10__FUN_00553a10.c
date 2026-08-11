/* Ghidra address: 00553a10 */
/* Ghidra symbol: FUN_00553a10 */


longlong * FUN_00553a10(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 local_30 [2];
  longlong local_20;
  
  local_30[0] = 0;
  local_20 = param_1[6];
  if (local_20 == 0) {
    (**(code **)(*param_1 + 0x48))(param_1,local_30);
    local_20 = param_1[6];
  }
  uVar1 = FUN_0053c4f0(&local_20);
  uVar1 = uVar1 & 0xffff;
  FUN_00419260(param_2,&DAT_0052f648,1,uVar1);
  iVar3 = 0;
  if (-1 < (int)(uVar1 - 1)) {
    do {
      uVar2 = FUN_00545f10(param_1[3],&PTR_FUN_00552c50,param_1,&local_20);
      uVar2 = FUN_004113f0(uVar2,&PTR_FUN_0052b748);
      *(undefined8 *)(*param_2 + (longlong)iVar3 * 8) = uVar2;
      iVar3 = iVar3 + 1;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  FUN_00419430(local_30,&DAT_0052f6a0);
  return param_2;
}

