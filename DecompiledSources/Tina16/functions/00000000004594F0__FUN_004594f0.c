/* Ghidra address: 004594f0 */
/* Ghidra symbol: FUN_004594f0 */


void FUN_004594f0(undefined8 *param_1,longlong param_2,uint param_3,ulonglong param_4,uint param_5)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  bool bVar7;
  uint local_38 [2];
  undefined1 local_30;
  
  if (~param_5 < 8) {
    bVar7 = ((int)CONCAT71((int7)(param_4 >> 8),1) << ((byte)~param_5 & 0x1f) & 3U) != 0;
  }
  else {
    bVar7 = false;
  }
  if (bVar7) {
    local_38[0] = param_5;
    local_30 = 0;
    param_2 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    puVar6 = PTR_PTR_020032d8;
    uVar2 = FUN_0044d8d0(&PTR_FUN_0043a1a0,param_2,PTR_PTR_020032d8,local_38,0);
    param_3 = (uint)puVar6;
    FUN_004134c0(uVar2);
  }
  iVar5 = param_3 - param_5;
  if (iVar5 < 0) {
    local_30 = 0;
    param_2 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    puVar6 = PTR_PTR_020046a0;
    local_38[0] = param_3;
    uVar2 = FUN_0044d8d0(&PTR_FUN_0043a1a0,param_2,PTR_PTR_020046a0,local_38,0);
    param_3 = (uint)puVar6;
    FUN_004134c0(uVar2);
  }
  uVar4 = (uint)param_4;
  if ((int)uVar4 < 0) {
    local_30 = 0;
    param_2 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    puVar6 = PTR_PTR_020031c0;
    local_38[0] = uVar4;
    uVar2 = FUN_0044d8d0(&PTR_FUN_0043a1a0,param_2,PTR_PTR_020031c0,local_38,0);
    param_3 = (uint)puVar6;
    FUN_004134c0(uVar2);
  }
  iVar1 = 0;
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + -4);
  }
  if ((int)((iVar1 - param_3) + param_5) < (int)uVar4) {
    local_30 = 0;
    param_2 = 1;
    local_38[0] = uVar4;
    uVar2 = FUN_0044d8d0(&PTR_FUN_0043a1a0,1,PTR_PTR_020031c0,local_38,0);
    FUN_004134c0(uVar2);
  }
  lVar3 = FUN_00416740(param_2);
  (**(code **)*param_1)(param_1,lVar3 + (longlong)iVar5 * 2,param_4 & 0xffffffff);
  return;
}

