/* Ghidra address: 015a2cf0 */
/* Ghidra symbol: FUN_015a2cf0 */


void FUN_015a2cf0(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int local_58;
  int local_54;
  int local_50;
  int local_3c;
  char local_34;
  
  lVar2 = *param_2;
  lVar3 = **(longlong **)((longlong)param_2 + 0xc);
  local_54 = *(int *)(*(longlong *)((longlong)param_2 + 0xc) + 0x14);
  local_50 = -1;
  *(undefined4 *)(param_1 + 0x1481) = 0;
  *(undefined4 *)(param_1 + 0x1485) = 0x23d;
  for (local_58 = 0; local_58 < local_54; local_58 = local_58 + 1) {
    if (*(short *)(lVar2 + (longlong)local_58 * 4) == 0) {
      *(undefined2 *)(lVar2 + 2 + (longlong)local_58 * 4) = 0;
    }
    else {
      local_50 = local_58;
      iVar4 = *(int *)(param_1 + 0x1481) + 1;
      *(int *)(param_1 + 0x1481) = iVar4;
      *(int *)(param_1 + 0xb8d + (longlong)iVar4 * 4) = local_58;
      *(undefined1 *)(param_1 + 0x1489 + (longlong)local_58) = 0;
    }
  }
  while (*(int *)(param_1 + 0x1481) < 2) {
    if (local_50 < 2) {
      local_50 = local_50 + 1;
      local_3c = local_50;
    }
    else {
      local_3c = 0;
    }
    iVar4 = *(int *)(param_1 + 0x1481) + 1;
    *(int *)(param_1 + 0x1481) = iVar4;
    *(int *)(param_1 + 0xb8d + (longlong)iVar4 * 4) = local_3c;
    *(undefined2 *)(lVar2 + (longlong)local_3c * 4) = 1;
    *(undefined1 *)(param_1 + 0x1489 + (longlong)local_3c) = 0;
    *(int *)(param_1 + 0x16de) = *(int *)(param_1 + 0x16de) + -1;
    if (lVar3 != 0) {
      *(uint *)(param_1 + 0x16e2) =
           *(int *)(param_1 + 0x16e2) - (uint)*(ushort *)(lVar3 + 2 + (longlong)local_3c * 4);
    }
  }
  *(int *)(param_2 + 1) = local_50;
  for (local_58 = *(int *)(param_1 + 0x1481) / 2; 0 < local_58; local_58 = local_58 + -1) {
    FUN_015a2620(param_1,lVar2,local_58);
  }
  do {
    iVar4 = *(int *)(param_1 + 0xb91);
    *(undefined4 *)(param_1 + 0xb91) =
         *(undefined4 *)(param_1 + 0xb8d + (longlong)*(int *)(param_1 + 0x1481) * 4);
    *(int *)(param_1 + 0x1481) = *(int *)(param_1 + 0x1481) + -1;
    FUN_015a2620(param_1,lVar2,1);
    iVar1 = *(int *)(param_1 + 0xb91);
    iVar5 = *(int *)(param_1 + 0x1485) + -1;
    *(int *)(param_1 + 0x1485) = iVar5;
    *(int *)(param_1 + 0xb8d + (longlong)iVar5 * 4) = iVar4;
    iVar5 = *(int *)(param_1 + 0x1485) + -1;
    *(int *)(param_1 + 0x1485) = iVar5;
    *(int *)(param_1 + 0xb8d + (longlong)iVar5 * 4) = iVar1;
    *(short *)(lVar2 + (longlong)local_54 * 4) =
         *(short *)(lVar2 + (longlong)iVar4 * 4) + *(short *)(lVar2 + (longlong)iVar1 * 4);
    if (*(byte *)(param_1 + 0x1489 + (longlong)iVar4) <
        *(byte *)(param_1 + 0x1489 + (longlong)iVar1)) {
      local_34 = *(char *)(param_1 + 0x1489 + (longlong)iVar1);
    }
    else {
      local_34 = *(char *)(param_1 + 0x1489 + (longlong)iVar4);
    }
    *(char *)(param_1 + 0x1489 + (longlong)local_54) = local_34 + '\x01';
    *(undefined2 *)(lVar2 + 2 + (longlong)iVar1 * 4) = (undefined2)local_54;
    *(undefined2 *)(lVar2 + 2 + (longlong)iVar4 * 4) = (undefined2)local_54;
    *(int *)(param_1 + 0xb91) = local_54;
    local_54 = local_54 + 1;
    FUN_015a2620(param_1,lVar2,1);
  } while (1 < *(int *)(param_1 + 0x1481));
  iVar4 = *(int *)(param_1 + 0x1485) + -1;
  *(int *)(param_1 + 0x1485) = iVar4;
  *(undefined4 *)(param_1 + 0xb8d + (longlong)iVar4 * 4) = *(undefined4 *)(param_1 + 0xb91);
  FUN_015a2820(param_1,param_2);
  FUN_015a2c00(lVar2,local_50,param_1 + 0xb6d);
  return;
}

