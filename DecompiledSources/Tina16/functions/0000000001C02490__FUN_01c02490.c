/* Ghidra address: 01c02490 */
/* Ghidra symbol: FUN_01c02490 */


void FUN_01c02490(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  undefined8 uVar2;
  byte bVar3;
  bool bVar4;
  
  cVar1 = *(char *)((longlong)param_1 + 0xb1);
  uVar2 = FUN_0064de80(param_1,param_2);
  if ((char)param_2 != cVar1) {
    if (*(byte *)((longlong)param_1 + 0x4c3) < 8) {
      bVar4 = ((int)CONCAT71((int7)((ulonglong)uVar2 >> 8),1) <<
               (*(byte *)((longlong)param_1 + 0x4c3) & 0x1f) & 0xcU) != 0;
    }
    else {
      bVar4 = false;
    }
    if (!bVar4) {
      bVar3 = (char)param_2 - 1;
      if (bVar3 == 0xff) {
        (**(code **)(*param_1 + 0x328))(param_1,0);
      }
      else if (bVar3 < 3) {
        (**(code **)(*param_1 + 0x328))(param_1,1);
      }
    }
  }
  return;
}

