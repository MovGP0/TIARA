/* Ghidra address: 014375b0 */
/* Ghidra symbol: FUN_014375b0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_014375b0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30;
  
  local_40[0] = 0;
  local_48 = 0;
  local_30 = 0;
  lVar1 = *(longlong *)(param_1 + 0x710);
  if ((lVar1 == 0) || (*(int *)(lVar1 + 0x10) < 1)) {
    *(undefined4 *)(param_1 + 0x718) = 3;
    DAT_0210c580 = *(undefined8 *)(param_1 + 0x6f8);
    DAT_0210c588 = *(double *)(param_1 + 0x6f8) +
                   (*(double *)(param_1 + 0x700) - *(double *)(param_1 + 0x6f8)) / 2.0;
    _DAT_0210c590 = *(undefined8 *)(param_1 + 0x700);
  }
  else {
    iVar5 = *(int *)(lVar1 + 0x10);
    *(int *)(param_1 + 0x718) = iVar5;
    iVar3 = 0;
    if (-1 < iVar5 + -1) {
      puVar4 = &DAT_0210c580;
      do {
        uVar6 = FUN_01d0f3b0(*(undefined8 *)(param_1 + 0x710),iVar3);
        *puVar4 = uVar6;
        iVar3 = iVar3 + 1;
        puVar4 = puVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  FUN_00848a70(*(undefined8 *)(param_1 + 0x6b0),*(undefined4 *)(param_1 + 0x718));
  uVar6 = FUN_00b89270();
  FUN_00b8ac60(uVar6,param_1,*(undefined8 *)(param_1 + 0x6f0));
  uVar6 = *(undefined8 *)(param_1 + 0x6b0);
  iVar5 = *(int *)(param_1 + 0x718);
  iVar3 = 0;
  if (-1 < iVar5 + -1) {
    puVar4 = &DAT_0210c580;
    do {
      FUN_0064dd90(*(undefined8 *)(param_1 + 0x6f0),local_40);
      FUN_0043f750(&local_48,iVar3 + 1);
      FUN_00416ba0(&local_30,local_40[0],local_48);
      uVar2 = FUN_014313c0(&PTR_FUN_0142bf08,1,puVar4,0);
      FUN_00b0ab70(uVar6,local_30,uVar2);
      iVar3 = iVar3 + 1;
      puVar4 = puVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_0064cf60(param_1,0x483);
  FUN_00414480(&local_48);
  FUN_00414480(local_40);
  FUN_00414480(&local_30);
  return;
}

