/* Ghidra address: 01be6760 */
/* Ghidra symbol: FUN_01be6760 */


void FUN_01be6760(undefined8 param_1,ulonglong param_2)

{
  byte bVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  
  uVar3 = CONCAT62((int6)(param_2 >> 0x10),0xffa9);
  pcVar2 = (code *)FUN_00411550(param_1,uVar3);
  bVar1 = (*pcVar2)(param_1);
  if ((byte)param_2 < 8) {
    bVar4 = ((byte)((int)CONCAT71((int7)((ulonglong)uVar3 >> 8),1) << ((byte)param_2 & 0x1f)) &
            bVar1) != 0;
  }
  else {
    bVar4 = false;
  }
  if (bVar4) {
    FUN_01bd5fa0(param_1,param_2 & 0xffffffff);
  }
  return;
}

