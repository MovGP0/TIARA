/* Ghidra address: 00a1af10 */
/* Ghidra symbol: FUN_00a1af10 */


undefined8 FUN_00a1af10(longlong *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined1 *puVar7;
  
  puVar3 = (undefined8 *)param_1[5];
  lVar6 = puVar3[1];
  if (lVar6 == 0) {
    iVar5 = (*(code *)puVar3[3])(param_1);
    if (iVar5 == 0) {
      return 0;
    }
    lVar6 = puVar3[1];
  }
  uVar1 = *(undefined1 *)*puVar3;
  lVar6 = lVar6 + -1;
  if (lVar6 == 0) {
    iVar5 = (*(code *)puVar3[3])(param_1);
    if (iVar5 == 0) {
      return 0;
    }
    puVar7 = (undefined1 *)*puVar3;
    lVar6 = puVar3[1];
  }
  else {
    puVar7 = (undefined1 *)*puVar3 + 1;
  }
  uVar2 = *puVar7;
  lVar4 = *param_1;
  *(undefined4 *)(lVar4 + 0x28) = 0x5b;
  *(undefined4 *)(lVar4 + 0x2c) = *(undefined4 *)((longlong)param_1 + 0x21c);
  iVar5 = CONCAT11(uVar1,uVar2) - 2;
  *(int *)(lVar4 + 0x30) = iVar5;
  (**(code **)(lVar4 + 8))(param_1,1);
  *puVar3 = puVar7 + 1;
  puVar3[1] = lVar6 + -1;
  if (0 < iVar5) {
    (**(code **)(param_1[5] + 0x20))(param_1,iVar5);
  }
  return 1;
}

