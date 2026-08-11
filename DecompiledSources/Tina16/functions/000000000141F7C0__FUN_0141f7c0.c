/* Ghidra address: 0141f7c0 */
/* Ghidra symbol: FUN_0141f7c0 */


void FUN_0141f7c0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  cVar1 = (char)param_3;
  if ((cVar1 == '\x01') || ((byte)(cVar1 - 5U) < 2)) {
    puVar3 = (undefined8 *)FUN_016eae40(param_1,1);
    uVar4 = *puVar3;
    FUN_016eae40(param_1,1);
    puVar3 = (undefined8 *)FUN_016eae40(param_1,2);
    uVar5 = *puVar3;
    FUN_016eae40(param_1,2);
    puVar3 = (undefined8 *)FUN_016eae40(param_1,3);
    uVar6 = *puVar3;
    FUN_016eae40(param_1,3);
    puVar3 = (undefined8 *)FUN_016eae40(param_1,4);
    uVar7 = *puVar3;
    FUN_016eae40(param_1,4);
    FUN_016ed320(param_1,3,uVar4,0,0);
    FUN_016ed320(param_1,6,uVar7,0,0);
    FUN_016ed320(param_1,9,uVar6,0,0);
    FUN_016ed320(param_1,0xc,uVar5,0,0);
  }
  else if ((byte)(cVar1 - 7U) < 2) {
    lVar2 = FUN_016eae40(param_1,1);
    uVar4 = FUN_016ed7f0(param_2,param_3);
    uVar4 = FUN_01d3c350(*(undefined8 *)(lVar2 + 0x10),uVar4);
    lVar2 = FUN_016eae40(param_1,1);
    uVar5 = FUN_016ed7f0(param_2,param_3);
    uVar5 = FUN_01d3c530(*(undefined8 *)(lVar2 + 0x10),uVar5);
    lVar2 = FUN_016eae40(param_1,2);
    uVar6 = FUN_016ed7f0(param_2,param_3);
    uVar6 = FUN_01d3c350(*(undefined8 *)(lVar2 + 0x10),uVar6);
    lVar2 = FUN_016eae40(param_1,2);
    uVar7 = FUN_016ed7f0(param_2,param_3);
    uVar7 = FUN_01d3c530(*(undefined8 *)(lVar2 + 0x10),uVar7);
    lVar2 = FUN_016eae40(param_1,3);
    uVar8 = FUN_016ed7f0(param_2,param_3);
    uVar8 = FUN_01d3c350(*(undefined8 *)(lVar2 + 0x10),uVar8);
    lVar2 = FUN_016eae40(param_1,3);
    uVar9 = FUN_016ed7f0(param_2,param_3);
    uVar9 = FUN_01d3c530(*(undefined8 *)(lVar2 + 0x10),uVar9);
    lVar2 = FUN_016eae40(param_1,4);
    uVar10 = FUN_016ed7f0(param_2,param_3);
    uVar10 = FUN_01d3c350(*(undefined8 *)(lVar2 + 0x10),uVar10);
    lVar2 = FUN_016eae40(param_1,4);
    uVar11 = FUN_016ed7f0(param_2,param_3);
    uVar11 = FUN_01d3c530(*(undefined8 *)(lVar2 + 0x10),uVar11);
    FUN_016ed320(param_1,3,uVar4,uVar5,0);
    FUN_016ed320(param_1,6,uVar10,uVar11,0);
    FUN_016ed320(param_1,9,uVar8,uVar9,0);
    FUN_016ed320(param_1,0xc,uVar6,uVar7,0);
  }
  return;
}

