/* Ghidra address: 00b58af0 */
/* Ghidra symbol: FUN_00b58af0 */


void FUN_00b58af0(longlong param_1,longlong param_2)

{
  undefined2 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int local_30;
  int local_2c;
  
  iVar2 = FUN_00b4e330();
  local_30 = 0;
  if (-1 < iVar2 + -1) {
    do {
      lVar3 = FUN_00b4fc70(*(undefined8 *)(param_2 + 0x10),local_30);
      uVar1 = *(undefined2 *)(lVar3 + 0x48);
      lVar3 = FUN_00b4fc70(*(undefined8 *)(param_2 + 0x10),local_30);
      uVar4 = FUN_00b4fb40(*(undefined8 *)(param_1 + 0x10),uVar1,*(undefined1 *)(lVar3 + 0x4a));
      uVar5 = FUN_00b4fc70(*(undefined8 *)(param_2 + 0x10),local_30);
      FUN_00b4e720(uVar4,uVar5);
      local_30 = local_30 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  iVar2 = FUN_00b4e330();
  local_30 = 0;
  if (-1 < iVar2 + -1) {
    do {
      lVar3 = FUN_00b53890(*(undefined8 *)(param_2 + 0x20),local_30);
      uVar4 = FUN_00b53830(*(undefined8 *)(param_1 + 0x20),*(undefined2 *)(lVar3 + 0x3e));
      uVar5 = FUN_00b53890(*(undefined8 *)(param_2 + 0x20),local_30);
      FUN_00b509a0(uVar4,uVar5);
      local_30 = local_30 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  iVar2 = FUN_00b4e330();
  local_30 = 0;
  if (-1 < iVar2 + -1) {
    do {
      lVar3 = FUN_00b52d40(*(undefined8 *)(param_2 + 0x18),local_30);
      uVar4 = FUN_00b52ce0(*(undefined8 *)(param_1 + 0x18),*(undefined1 *)(lVar3 + 0x3e));
      uVar5 = FUN_00b52d40(*(undefined8 *)(param_2 + 0x18),local_30);
      FUN_00b51b30(uVar4,uVar5);
      local_30 = local_30 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  iVar2 = FUN_00b573b0();
  local_30 = 0;
  if (-1 < iVar2 + -1) {
    do {
      uVar4 = FUN_00b572d0(*(undefined8 *)(param_1 + 0x28));
      uVar5 = FUN_00b57390(*(undefined8 *)(param_2 + 0x28),local_30);
      FUN_00b543d0(uVar4,uVar5);
      local_30 = local_30 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00b57710(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_2 + 0x40));
  FUN_00b22070(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_2 + 0x48));
  local_2c = FUN_00b58340();
  local_30 = 0;
  if (-1 < local_2c + -1) {
    do {
      lVar3 = FUN_00b58320(*(undefined8 *)(param_2 + 0x50),local_30);
      lVar6 = FUN_00b58320(*(undefined8 *)(param_2 + 0x50),local_30);
      lVar7 = FUN_00b58320(*(undefined8 *)(param_2 + 0x50),local_30);
      lVar8 = FUN_00b58320(*(undefined8 *)(param_2 + 0x50),local_30);
      lVar9 = FUN_00b58320(*(undefined8 *)(param_2 + 0x50),local_30);
      FUN_00b58350(*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(lVar3 + 8),
                   *(undefined4 *)(lVar6 + 0x10),*(undefined4 *)(lVar7 + 0x14),
                   *(undefined4 *)(lVar8 + 0x18),*(undefined4 *)(lVar9 + 0x1c));
      local_30 = local_30 + 1;
      local_2c = local_2c + -1;
    } while (local_2c != 0);
  }
  *(undefined8 *)(param_1 + 0x81) = *(undefined8 *)(param_2 + 0x81);
  *(undefined2 *)(param_1 + 0x89) = *(undefined2 *)(param_2 + 0x89);
  return;
}

