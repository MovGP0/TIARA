/* Ghidra address: 01d3f780 */
/* Ghidra symbol: FUN_01d3f780 */


int FUN_01d3f780(longlong param_1,longlong param_2,undefined8 param_3,uint param_4,uint param_5)

{
  bool bVar1;
  char cVar2;
  ushort uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = -1;
  bVar1 = false;
  iVar5 = 0;
  do {
    iVar6 = iVar6 + 1;
    if (iVar6 < *(int *)(param_1 + 0x10)) {
      uVar4 = FUN_00b94e60(param_1,iVar6);
      cVar2 = FUN_0198a580(uVar4);
      if (cVar2 == '\x04') {
        uVar4 = FUN_00b94e60(param_1,iVar6);
        uVar3 = FUN_01d03160(uVar4);
        if (((0 < (int)param_4) && (uVar3 == param_4)) || ((0 < (int)param_5 && (uVar3 == param_5)))
           ) {
          *(undefined8 *)(param_2 + (longlong)iVar5 * 8) = uVar4;
          iVar5 = iVar5 + 1;
        }
      }
    }
    else {
      bVar1 = true;
    }
  } while (!bVar1);
  return iVar5;
}

