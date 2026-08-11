/* Ghidra address: 015f2360 */
/* Ghidra symbol: FUN_015f2360 */


undefined8 FUN_015f2360(longlong *param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  undefined8 uVar4;
  
  uVar4 = 0;
  cVar2 = FUN_0198a580(param_1);
  if (cVar2 == '\x04') {
    sVar3 = (**(code **)(*param_1 + 0xf8))(param_1);
    if (sVar3 == 0x3a) {
      cVar2 = (**(code **)(*param_1 + 0x2b8))(param_1);
      bVar1 = *(byte *)((longlong)param_1 + 0xd3);
      if ((((cVar2 == '\0') && (bVar1 == 0)) || ((bVar1 & cVar2 == '\x02') != 0)) ||
         (((cVar2 == '\x03' && (bVar1 == 0)) || ((bVar1 & cVar2 == '\x01') != 0)))) {
        uVar4 = 1;
      }
    }
  }
  return uVar4;
}

