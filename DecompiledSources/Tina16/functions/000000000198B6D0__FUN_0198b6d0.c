/* Ghidra address: 0198b6d0 */
/* Ghidra symbol: FUN_0198b6d0 */


void FUN_0198b6d0(longlong *param_1,undefined8 param_2)

{
  byte bVar1;
  char cVar2;
  undefined8 uVar3;
  bool bVar4;
  
  uVar3 = param_2;
  FUN_0198b6a0(param_1,param_2);
  if ((char)param_1[0x1a] == '\0') {
    bVar1 = FUN_0198a580(param_2);
    if (bVar1 < 0x10) {
      bVar4 = ((int)CONCAT62((int6)((ulonglong)uVar3 >> 0x10),1) << (bVar1 & 0x1f) & 0x220U) != 0;
    }
    else {
      bVar4 = false;
    }
    if (!bVar4) {
      (**(code **)(*(longlong *)param_1[0x19] + 0x20))((longlong *)param_1[0x19],param_2);
      cVar2 = FUN_0198a580(param_2);
      if (cVar2 != '\x04') {
        return;
      }
      FUN_01d08450(param_2,param_1);
      return;
    }
  }
  (**(code **)(*param_1 + 0x10))(param_1,param_2);
  return;
}

