/* Ghidra address: 00459d70 */
/* Ghidra symbol: FUN_00459d70 */


void FUN_00459d70(longlong *param_1,longlong param_2,uint param_3,ulonglong param_4,longlong param_5
                 ,uint param_6,uint param_7)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  undefined *puVar7;
  bool bVar8;
  uint local_38 [2];
  undefined1 local_30;
  
  if (~param_7 < 8) {
    bVar8 = ((int)CONCAT71((int7)(param_4 >> 8),1) << ((byte)~param_7 & 0x1f) & 3U) != 0;
  }
  else {
    bVar8 = false;
  }
  if (bVar8) {
    local_38[0] = param_7;
    local_30 = 0;
    param_2 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    puVar7 = PTR_PTR_020032d8;
    uVar3 = FUN_0044d8d0(&PTR_FUN_0043a1a0,param_2,PTR_PTR_020032d8,local_38,0);
    param_3 = (uint)puVar7;
    FUN_004134c0(uVar3);
  }
  iVar6 = param_3 - param_7;
  uVar5 = (uint)param_4;
  if ((param_5 == 0) && (uVar5 != 0)) {
    param_2 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    puVar7 = PTR_PTR_020025f0;
    uVar3 = FUN_0044d710(&PTR_FUN_0043a1a0);
    param_3 = (uint)puVar7;
    FUN_004134c0(uVar3);
  }
  if (iVar6 < 0) {
    local_30 = 0;
    param_2 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    local_38[0] = param_3;
    uVar3 = FUN_0044d8d0(&PTR_FUN_0043a1a0,param_2,PTR_PTR_020046a0,local_38,0);
    FUN_004134c0(uVar3);
  }
  if ((int)uVar5 < 0) {
    local_30 = 0;
    param_2 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    local_38[0] = uVar5;
    uVar3 = FUN_0044d8d0(&PTR_FUN_0043a1a0,param_2,PTR_PTR_020031c0,local_38,0);
    FUN_004134c0(uVar3);
  }
  iVar1 = 0;
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + -4);
  }
  if (iVar1 - iVar6 < (int)uVar5) {
    local_30 = 0;
    param_2 = 1;
    local_38[0] = uVar5;
    uVar3 = FUN_0044d8d0(&PTR_FUN_0043a1a0,1,PTR_PTR_020031c0,local_38,0);
    FUN_004134c0(uVar3);
  }
  iVar1 = 0;
  if (param_5 != 0) {
    iVar1 = (int)*(undefined8 *)(param_5 + -8);
  }
  if (((int)param_6 < 0) || (iVar1 < (int)param_6)) {
    local_38[0] = param_6;
    local_30 = 0;
    param_2 = 1;
    uVar3 = FUN_0044d8d0(&PTR_FUN_0043a1a0,1,PTR_PTR_02003ce8,local_38,0);
    iVar1 = FUN_004134c0(uVar3);
  }
  lVar4 = FUN_00416740(param_2);
  iVar2 = (**(code **)*param_1)(param_1,lVar4 + (longlong)iVar6 * 2,param_4 & 0xffffffff);
  if ((int)(iVar1 - param_6) < iVar2) {
    uVar3 = FUN_0044d710(&PTR_FUN_0043a1a0,1,PTR_PTR_020016f0);
    FUN_004134c0(uVar3);
  }
  (**(code **)(*param_1 + 8))
            (param_1,lVar4 + (longlong)iVar6 * 2,param_4 & 0xffffffff,param_5 + (int)param_6,
             iVar1 - param_6);
  return;
}

