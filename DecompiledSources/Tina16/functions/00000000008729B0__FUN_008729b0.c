/* Ghidra address: 008729b0 */
/* Ghidra symbol: FUN_008729b0 */


longlong FUN_008729b0(longlong param_1,undefined8 param_2,int param_3,int param_4)

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
  iVar2 = (int)param_2;
  if ((iVar2 < 0) || (iVar1 <= iVar2)) {
    local_10 = 0;
    param_2 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    param_4 = (int)local_18;
    puVar4 = PTR_DAT_02003bc8;
    local_18[0] = iVar2;
    param_1 = FUN_0044d8d0(&PTR_FUN_004334c0);
    param_3 = (int)puVar4;
    iVar1 = FUN_004134c0(param_1);
  }
  iVar2 = (int)param_2;
  if (iVar1 - iVar2 < param_4) {
    uVar3 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    iVar2 = (int)uVar3;
    puVar4 = PTR_PTR_02001578;
    param_1 = FUN_0044d710(&PTR_FUN_004334c0,uVar3);
    param_3 = (int)puVar4;
    FUN_004134c0(param_1);
  }
  if (param_3 < 1) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + iVar2;
  }
  return param_1;
}

