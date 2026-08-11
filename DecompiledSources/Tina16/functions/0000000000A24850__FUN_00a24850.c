/* Ghidra address: 00a24850 */
/* Ghidra symbol: FUN_00a24850 */


void FUN_00a24850(longlong param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  puVar1 = *(undefined4 **)(param_1 + 0x28);
  lVar2 = *(longlong *)(param_1 + 0x1f0);
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  *(undefined4 *)(lVar2 + 0x20) = *puVar1;
  *(undefined4 *)(lVar2 + 0x24) = uVar4;
  *(undefined4 *)(lVar2 + 0x28) = uVar5;
  *(undefined4 *)(lVar2 + 0x2c) = uVar6;
  FUN_00a24b00(lVar2);
  FUN_00a249a0(lVar2,0x7f,7);
  *(undefined8 *)(lVar2 + 0x30) = 0;
  puVar3 = *(undefined8 **)(param_1 + 0x28);
  uVar7 = *(undefined8 *)(lVar2 + 0x28);
  *puVar3 = *(undefined8 *)(lVar2 + 0x20);
  puVar3[1] = uVar7;
  return;
}

