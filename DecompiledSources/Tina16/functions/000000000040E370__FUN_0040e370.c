/* Ghidra address: 0040e370 */
/* Ghidra symbol: FUN_0040e370 */


undefined8 FUN_0040e370(undefined8 param_1)

{
  char cVar1;
  byte bVar2;
  ushort *puVar3;
  int iVar4;
  undefined8 local_30;
  ushort *local_28;
  int local_20;
  undefined1 local_19;
  
  local_28 = (ushort *)0x0;
  cVar1 = FUN_0040e730(param_1);
  if (cVar1 == '\0') {
    FUN_004169f0(&local_28,0x40);
    iVar4 = 0x40;
    puVar3 = local_28;
    do {
      bVar2 = FUN_0040d560(param_1,&local_19,DAT_02006a28);
      if (bVar2 < 0x21) break;
      *puVar3 = (ushort)bVar2;
      FUN_0040d780(param_1);
      puVar3 = puVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    FUN_004169f0(&local_28,((longlong)puVar3 - (longlong)local_28) / 2);
    local_30 = FUN_00410100(local_28,&local_20);
    if (local_20 != 0) {
      FUN_00409930(0x6a);
    }
  }
  else {
    local_30 = 0;
  }
  FUN_00414480(&local_28);
  return local_30;
}

