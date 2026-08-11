/* Ghidra address: 01088c80 */
/* Ghidra symbol: FUN_01088c80 */


void FUN_01088c80(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_4c;
  undefined8 local_48;
  undefined8 local_40 [2];
  
  local_40[0] = 0;
  local_48 = 0;
  iVar3 = FUN_010b33c0(*(undefined8 *)(param_1 + 0xac8));
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x7e0) + 0x550);
  FUN_006ded30(uVar1);
  iVar8 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xac8) + 0x18) + 0x10);
  local_4c = 0;
  if (-1 < iVar8 + -1) {
    do {
      lVar4 = FUN_004aeac0(*(undefined8 *)(*(longlong *)(param_1 + 0xac8) + 0x18),local_4c);
      iVar9 = *(int *)(*(longlong *)(lVar4 + 0x40) + 0x10);
      iVar7 = 0;
      if (-1 < iVar9 + -1) {
        do {
          lVar5 = FUN_004aeac0(*(undefined8 *)(lVar4 + 0x40),iVar7);
          cVar2 = FUN_010ae9c0(lVar5);
          if (cVar2 != '\0') {
            FUN_015f4420(local_40,*(undefined8 *)(lVar4 + 0x30),iVar3 + 0x1e);
            FUN_0043f750(&local_48,*(undefined4 *)(lVar5 + 8));
            FUN_00416ad0(local_40,local_48);
            uVar6 = FUN_006def00(uVar1,0,local_40[0]);
            cVar2 = FUN_010ae5f0(lVar5);
            if (cVar2 == '\0') {
              FUN_006dcbd0(uVar6,1);
            }
            else {
              FUN_006dcbd0(uVar6,0);
            }
            cVar2 = FUN_010ae5f0(lVar5);
            if (cVar2 == '\0') {
              FUN_006dcca0(uVar6,1);
            }
            else {
              FUN_006dcca0(uVar6,0);
            }
            FUN_006dc990(uVar6,lVar5);
          }
          iVar7 = iVar7 + 1;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
      local_4c = local_4c + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  FUN_006e23c0(*(undefined8 *)(param_1 + 0x7e0));
  FUN_00414560(&local_48,2);
  return;
}

