/* Ghidra address: 00694760 */
/* Ghidra symbol: FUN_00694760 */


void FUN_00694760(longlong param_1,undefined4 *param_2)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined1 local_58 [16];
  undefined1 local_48 [24];
  
  uVar3 = thunk_FUN_04118143(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x68),0xfffffff0);
  uVar7 = uVar3 & 0x200000;
  if ((uVar7 == 0x200000) || ((uVar3 & 0x100000) == 0x100000)) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x70) + 99) = 1;
    thunk_FUN_03c9d277(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x68),0xfffffff0,
                       (longlong)(int)(uVar3 & 0xffcfffff));
    uVar6 = thunk_FUN_03a65bf1(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x80),
                               *(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x68),*param_2,
                               *(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4));
    *(undefined8 *)(param_2 + 6) = uVar6;
    thunk_FUN_03c9d277(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x68),0xfffffff0,
                       (longlong)(int)uVar3);
    *(undefined1 *)(*(longlong *)(param_1 + 0x70) + 99) = 0;
  }
  else {
    uVar6 = thunk_FUN_03a65bf1(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x80),
                               *(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x68),*param_2,
                               *(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4));
    *(undefined8 *)(param_2 + 6) = uVar6;
  }
  if (param_2[2] != 0) {
    piVar1 = *(int **)(param_2 + 4);
    if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x10) + 0xb1) == '\x01') {
      iVar4 = 1;
      if (uVar7 == 0x200000) {
        FUN_00693850(*(undefined8 *)(param_1 + 0x70),local_58);
        iVar5 = FUN_004230a0(local_58);
        iVar5 = iVar5 + 1;
      }
      else {
        iVar5 = 1;
      }
    }
    else {
      iVar5 = 1;
      if (uVar7 == 0x200000) {
        FUN_00693850(*(undefined8 *)(param_1 + 0x70),local_48);
        iVar4 = FUN_004230a0(local_48);
        iVar4 = iVar4 + 1;
      }
      else {
        iVar4 = 1;
      }
    }
    lVar2 = *(longlong *)(piVar1 + 0xc);
    *piVar1 = *(int *)(lVar2 + 0x10);
    piVar1[1] = *(int *)(lVar2 + 0x14);
    piVar1[2] = *(int *)(lVar2 + 0x10) + *(int *)(lVar2 + 0x18);
    piVar1[3] = *(int *)(lVar2 + 0x14) + *(int *)(lVar2 + 0x1c);
    *piVar1 = *piVar1 + iVar5;
    piVar1[1] = piVar1[1] + 1;
    piVar1[2] = piVar1[2] - iVar4;
    piVar1[3] = piVar1[3] + -1;
    *(undefined8 *)(piVar1 + 4) = *(undefined8 *)piVar1;
    *(undefined8 *)(piVar1 + 6) = *(undefined8 *)(piVar1 + 2);
    *(int **)(param_2 + 4) = piVar1;
    *(undefined8 *)(param_2 + 6) = 0x400;
  }
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined1 *)(param_1 + 0x4f) = 1;
  return;
}

