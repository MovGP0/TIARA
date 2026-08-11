/* Ghidra address: 00a1cad0 */
/* Ghidra symbol: FUN_00a1cad0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a1cad0(longlong *param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  iVar5 = *(int *)((longlong)param_1 + 0x24);
  if (iVar5 != 100) {
    lVar6 = *param_1;
    *(undefined4 *)(lVar6 + 0x28) = 0x14;
    *(int *)(lVar6 + 0x2c) = iVar5;
    (**(code **)*param_1)(param_1);
  }
  *(undefined4 *)(param_1 + 10) = param_2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)((longlong)param_1 + 300) = 0;
  switch(param_2) {
  case 0:
    iVar5 = (int)param_1[7];
    *(int *)((longlong)param_1 + 0x4c) = iVar5;
    if (9 < iVar5 - 1U) {
      lVar6 = *param_1;
      *(undefined4 *)(lVar6 + 0x28) = 0x1a;
      *(int *)(lVar6 + 0x2c) = iVar5;
      *(undefined4 *)(*param_1 + 0x30) = 10;
      (**(code **)*param_1)(param_1);
      iVar5 = *(int *)((longlong)param_1 + 0x4c);
      if (iVar5 < 1) {
        return;
      }
    }
    puVar4 = (undefined4 *)param_1[0xb];
    lVar6 = 0;
    uVar2 = CONCAT44(uRam0000000001e6fe64,_DAT_01e6fe60);
    uVar3 = CONCAT44(uRam0000000001e6fe6c,uRam0000000001e6fe68);
    do {
      *puVar4 = (int)lVar6;
      *(undefined8 *)(puVar4 + 2) = uVar2;
      *(undefined8 *)(puVar4 + 4) = uVar3;
      puVar4[6] = 0;
      lVar6 = lVar6 + 1;
      puVar4 = puVar4 + 0x18;
    } while (lVar6 < iVar5);
    break;
  case 1:
    *(undefined4 *)(param_1 + 0x24) = 1;
    *(undefined4 *)((longlong)param_1 + 0x4c) = 1;
    puVar4 = (undefined4 *)param_1[0xb];
    *puVar4 = 1;
    uVar2 = CONCAT44(uRam0000000001e6fe6c,uRam0000000001e6fe68);
    *(ulonglong *)(puVar4 + 2) = CONCAT44(uRam0000000001e6fe64,_DAT_01e6fe60);
    *(undefined8 *)(puVar4 + 4) = uVar2;
    puVar4[6] = 0;
    break;
  case 2:
    *(undefined4 *)((longlong)param_1 + 300) = 1;
    *(undefined4 *)((longlong)param_1 + 0x4c) = 3;
    puVar4 = (undefined4 *)param_1[0xb];
    *puVar4 = 0x52;
    uVar2 = CONCAT44(uRam0000000001e6fe64,_DAT_01e6fe60);
    uVar3 = CONCAT44(uRam0000000001e6fe6c,uRam0000000001e6fe68);
    *(undefined8 *)(puVar4 + 2) = uVar2;
    *(undefined8 *)(puVar4 + 4) = uVar3;
    puVar4[6] = 0;
    puVar4[0x18] = 0x47;
    *(undefined8 *)(puVar4 + 0x1a) = uVar2;
    *(undefined8 *)(puVar4 + 0x1c) = uVar3;
    puVar4[0x1e] = 0;
    puVar4[0x30] = 0x42;
    *(undefined8 *)(puVar4 + 0x32) = 0x100000001;
    *(undefined8 *)(puVar4 + 0x34) = 0;
    puVar4[0x36] = 0;
    break;
  case 3:
    *(undefined4 *)(param_1 + 0x24) = 1;
    *(undefined4 *)((longlong)param_1 + 0x4c) = 3;
    puVar4 = (undefined4 *)param_1[0xb];
    *puVar4 = 1;
    uVar2 = CONCAT44(uRam0000000001e6fe7c,uRam0000000001e6fe78);
    *(ulonglong *)(puVar4 + 2) = CONCAT44(uRam0000000001e6fe74,_DAT_01e6fe70);
    *(undefined8 *)(puVar4 + 4) = uVar2;
    puVar4[6] = 0;
    puVar4[0x18] = 2;
    uVar2 = uRam0000000001e6fe88;
    *(undefined8 *)(puVar4 + 0x1a) = _DAT_01e6fe80;
    *(undefined8 *)(puVar4 + 0x1c) = uVar2;
    puVar4[0x1e] = 1;
    puVar4[0x30] = 3;
    *(undefined8 *)(puVar4 + 0x32) = 0x100000001;
    *(undefined8 *)(puVar4 + 0x34) = 0x100000001;
    puVar4[0x36] = 1;
    break;
  case 4:
    *(undefined4 *)((longlong)param_1 + 300) = 1;
    *(undefined4 *)((longlong)param_1 + 0x4c) = 4;
    puVar4 = (undefined4 *)param_1[0xb];
    *puVar4 = 0x43;
    uVar10 = uRam0000000001e6fe6c;
    uVar9 = uRam0000000001e6fe68;
    uVar8 = uRam0000000001e6fe64;
    uVar7 = _DAT_01e6fe60;
    puVar4[2] = _DAT_01e6fe60;
    puVar4[3] = uVar8;
    puVar4[4] = uVar9;
    puVar4[5] = uVar10;
    puVar4[6] = 0;
    puVar4[0x18] = 0x4d;
    puVar4[0x1a] = uVar7;
    puVar4[0x1b] = uVar8;
    puVar4[0x1c] = uVar9;
    puVar4[0x1d] = uVar10;
    puVar4[0x1e] = 0;
    puVar4[0x30] = 0x59;
    *(undefined8 *)(puVar4 + 0x32) = 0x100000001;
    *(undefined8 *)(puVar4 + 0x34) = 0;
    puVar4[0x36] = 0;
    puVar4[0x48] = 0x4b;
    goto LAB_00a1cdcb;
  case 5:
    *(undefined4 *)((longlong)param_1 + 300) = 1;
    *(undefined4 *)((longlong)param_1 + 0x4c) = 4;
    puVar4 = (undefined4 *)param_1[0xb];
    *puVar4 = 1;
    uVar10 = uRam0000000001e6fe7c;
    uVar9 = uRam0000000001e6fe78;
    uVar8 = uRam0000000001e6fe74;
    uVar7 = _DAT_01e6fe70;
    puVar4[2] = _DAT_01e6fe70;
    puVar4[3] = uVar8;
    puVar4[4] = uVar9;
    puVar4[5] = uVar10;
    puVar4[6] = 0;
    puVar4[0x18] = 2;
    uVar2 = uRam0000000001e6fe88;
    *(undefined8 *)(puVar4 + 0x1a) = _DAT_01e6fe80;
    *(undefined8 *)(puVar4 + 0x1c) = uVar2;
    puVar4[0x1e] = 1;
    puVar4[0x30] = 3;
    *(undefined8 *)(puVar4 + 0x32) = 0x100000001;
    *(undefined8 *)(puVar4 + 0x34) = 0x100000001;
    puVar4[0x36] = 1;
    puVar4[0x48] = 4;
LAB_00a1cdcb:
    puVar4[0x4a] = uVar7;
    puVar4[0x4b] = uVar8;
    puVar4[0x4c] = uVar9;
    puVar4[0x4d] = uVar10;
    puVar4[0x4e] = 0;
    break;
  default:
    puVar1 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar1 + 5) = 10;
                    /* WARNING: Could not recover jumptable at 0x00a1cd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar1)(param_1);
    return;
  }
  return;
}

