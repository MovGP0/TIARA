/* Ghidra address: 01424de0 */
/* Ghidra symbol: FUN_01424de0 */


void FUN_01424de0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  cVar1 = (char)param_3;
  if ((cVar1 == '\x01') || ((byte)(cVar1 - 5U) < 2)) {
    puVar3 = (undefined8 *)FUN_016eae40(param_1,1);
    uVar4 = *puVar3;
    FUN_016eae40(param_1,1);
    FUN_016ed320(param_1,3,uVar4,0,0);
  }
  else if ((byte)(cVar1 - 7U) < 2) {
    lVar2 = FUN_016eae40(param_1,1);
    uVar4 = FUN_016ed7f0(param_2,param_3);
    uVar4 = FUN_01d3c350(*(undefined8 *)(lVar2 + 0x10),uVar4);
    lVar2 = FUN_016eae40(param_1,1);
    uVar5 = FUN_016ed7f0(param_2,param_3);
    uVar5 = FUN_01d3c530(*(undefined8 *)(lVar2 + 0x10),uVar5);
    FUN_016ed320(param_1,3,uVar4,uVar5,0);
  }
  return;
}

