/* Ghidra address: 00c0ffb0 */
/* Ghidra symbol: FUN_00c0ffb0 */


void FUN_00c0ffb0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  int local_34;
  longlong local_30;
  int local_24;
  longlong local_20;
  
  local_40 = auStack_68;
  cVar1 = FUN_004bea50(param_2);
  if (cVar1 == '\x0e') {
    FUN_004c23c0(param_2);
    local_20 = FUN_00bd73a0(&PTR_FUN_00bd5550,1,0);
    FUN_004bf530(param_2,local_20);
    iVar6 = *(int *)(*(longlong *)(local_20 + 0x10) + 0x10);
    local_24 = 0;
    if (-1 < iVar6 + -1) {
      do {
        local_30 = FUN_00bd7720(local_20,local_24);
        uVar2 = FUN_00bd6e90(local_30);
        uVar3 = FUN_00bd7120(local_30);
        local_34 = FUN_00bd7690(*(undefined8 *)(param_1 + 0x5d8),uVar2,uVar3);
        if ((-1 < local_34) &&
           (lVar4 = FUN_00bd7720(*(undefined8 *)(param_1 + 0x5d8),local_34),
           *(short *)(lVar4 + 0x20) == *(short *)(local_30 + 0x20))) {
          uVar5 = FUN_00bd7720(*(undefined8 *)(param_1 + 0x5d8),local_34);
          FUN_00410f20(uVar5);
        }
        local_24 = local_24 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    FUN_00410f20(local_20);
  }
  return;
}

