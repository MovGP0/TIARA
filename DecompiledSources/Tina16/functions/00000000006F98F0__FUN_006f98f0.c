/* Ghidra address: 006f98f0 */
/* Ghidra symbol: FUN_006f98f0 */


void FUN_006f98f0(longlong param_1,int param_2,int param_3,int param_4,int param_5)

{
  bool bVar1;
  int iVar2;
  undefined7 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int local_38;
  int local_2c;
  
  if (((((param_2 == *(int *)(param_1 + 0x90)) && (param_3 == *(int *)(param_1 + 0x94))) &&
       (param_4 == *(int *)(param_1 + 0x98))) && (param_5 == *(int *)(param_1 + 0x9c))) ||
     (((*(int *)(param_1 + 0x33c) != 0 || ((*(ushort *)(param_1 + 0x34) & 1) != 0)) ||
      (*(longlong *)(param_1 + 0x340) == 0)))) {
    FUN_0064c7e0(param_1,param_2,param_3,param_4,param_5);
  }
  else {
    local_2c = FUN_006fa830(param_1);
    if ((*(char *)(param_1 + 0x2c9) == '\0') &&
       (iVar2 = FUN_006fdb70(*(undefined8 *)(param_1 + 0x340),local_2c,param_2,param_3),
       iVar2 != local_2c)) {
      bVar6 = true;
    }
    else {
      bVar6 = false;
    }
    uVar3 = (undefined7)((ulonglong)param_1 >> 8);
    if (bVar6) {
      iVar2 = FUN_006fa830(param_1);
      bVar1 = false;
      if (iVar2 < local_2c) {
        local_2c = FUN_006fa830(param_1);
        bVar1 = false;
      }
    }
    else {
      if (*(byte *)(param_1 + 0x33a) < 8) {
        bVar6 = ((int)CONCAT71(uVar3,1) << (*(byte *)(param_1 + 0x33a) & 0x1f) & 0x18U) != 0;
      }
      else {
        bVar6 = false;
      }
      if ((bVar6) && (param_4 != *(int *)(param_1 + 0x98))) {
        bVar1 = true;
        bVar6 = bVar1;
      }
      else {
        bVar1 = false;
        bVar6 = bVar1;
      }
    }
    local_38 = param_4;
    if ((*(char *)(param_1 + 0x33a) == '\x02') &&
       ((iVar2 = FUN_006d3e90(), 0x40046 < iVar2 ||
        (*(char *)(*(longlong *)(param_1 + 0x340) + 0x4de) == '\0')))) {
      local_38 = (*(int *)(*(longlong *)(param_1 + 0x340) + 0x4a4) + param_4) -
                 *(int *)(param_1 + 0x98);
    }
    if (*(byte *)(param_1 + 0x33a) < 8) {
      bVar4 = ((int)CONCAT71(uVar3,1) << (*(byte *)(param_1 + 0x33a) & 0x1f) & 0x18U) != 0;
    }
    else {
      bVar4 = false;
    }
    if ((bVar4) || (local_38 == *(int *)(*(longlong *)(param_1 + 0x340) + 0x4a4))) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    bVar5 = param_5 != *(int *)(*(longlong *)(param_1 + 0x340) + 0x4a8);
    if (bVar1) {
      FUN_0064c7e0(param_1,param_2,param_3,local_38,param_5);
    }
    if ((*(ushort *)(param_1 + 0x34) & 0x10) != 0) {
      if (bVar4) {
        FUN_006fbb10(*(undefined8 *)(param_1 + 0x340),local_38);
      }
      if (bVar5) {
        FUN_006fbac0(*(undefined8 *)(param_1 + 0x340),param_5);
      }
    }
    if (((!bVar6) || (bVar4)) || (bVar5)) {
      FUN_006fb710(*(undefined8 *)(param_1 + 0x340),local_2c);
    }
    else {
      if (bVar1) {
        if (*(byte *)(param_1 + 0x33a) < 8) {
          bVar6 = ((int)CONCAT71(uVar3,1) << (*(byte *)(param_1 + 0x33a) & 0x1f) & 0x18U) != 0;
        }
        else {
          bVar6 = false;
        }
        if (bVar6) {
          FUN_006fc420(*(undefined8 *)(param_1 + 0x340),local_2c);
        }
        else {
          FUN_006fc590(*(undefined8 *)(param_1 + 0x340),local_2c);
        }
      }
      FUN_006fd920(*(undefined8 *)(param_1 + 0x340));
      FUN_006fb920(*(undefined8 *)(param_1 + 0x340),0);
    }
  }
  return;
}

