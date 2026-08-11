/* Ghidra address: 00872850 */
/* Ghidra symbol: FUN_00872850 */


longlong FUN_00872850(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined *puVar4;
  int local_18 [2];
  undefined1 local_10;
  
  iVar1 = 0;
  if (param_1 != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + -8);
  }
  local_18[0] = (int)param_2;
  if ((local_18[0] < 0) || (iVar1 <= local_18[0])) {
    local_10 = 0;
    param_2 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    puVar4 = PTR_PTR_02004590;
    param_1 = FUN_0044d8d0(&PTR_FUN_004334c0,param_2,PTR_PTR_02004590,local_18,0);
    param_3 = (int)puVar4;
    iVar1 = FUN_004134c0(param_1);
  }
  if (param_3 < 0) {
    local_10 = 0;
    param_2 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    puVar4 = PTR_PTR_02003088;
    local_18[0] = param_3;
    param_1 = FUN_0044d8d0(&PTR_FUN_004334c0,param_2,PTR_PTR_02003088,local_18,0);
    param_3 = (int)puVar4;
    iVar1 = FUN_004134c0(param_1);
  }
  iVar2 = (int)param_2;
  if (iVar1 - iVar2 < param_3) {
    local_10 = 0;
    uVar3 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    iVar2 = (int)uVar3;
    puVar4 = PTR_PTR_02003088;
    local_18[0] = param_3;
    param_1 = FUN_0044d8d0(&PTR_FUN_004334c0,uVar3,PTR_PTR_02003088,local_18,0);
    param_3 = (int)puVar4;
    FUN_004134c0(param_1);
  }
  if (param_3 < 1) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + (longlong)iVar2 * 2;
  }
  return param_1;
}

