/* Ghidra address: 0197f7f0 */
/* Ghidra symbol: FUN_0197f7f0 */


void FUN_0197f7f0(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  ulonglong local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  
  local_40[0] = 0;
  local_50 = 0;
  local_48 = 0;
  if (param_2 != 0) {
    iVar1 = FUN_01803a10();
    iVar6 = 0;
    if (-1 < iVar1 + -1) {
      do {
        lVar3 = FUN_01980050(&DAT_01946930,1);
        lVar4 = FUN_018039f0(param_2,iVar6);
        (**(code **)(**(longlong **)(param_1 + 8) + 0x80))
                  (*(longlong **)(param_1 + 8),*(undefined8 *)(lVar4 + 0x20),lVar3);
        FUN_018039f0(param_2,iVar6);
        iVar2 = FUN_01803a10();
        iVar7 = 0;
        if (-1 < iVar2 + -1) {
          do {
            uVar5 = FUN_018039f0(param_2,iVar6);
            uVar5 = FUN_018039f0(uVar5,iVar7);
            FUN_01803cc0(uVar5,&local_48,&DAT_0197f998);
            FUN_018033c0(local_40,local_48);
            FUN_004168e0(&local_50,local_40[0]);
            (**(code **)(**(longlong **)(lVar3 + 8) + 0x78))(*(longlong **)(lVar3 + 8),local_50,1);
            iVar7 = iVar7 + 1;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
        iVar6 = iVar6 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    FUN_018039a0(param_2);
  }
  FUN_00414520(&local_50);
  FUN_00414560(&local_48,2);
  return;
}

