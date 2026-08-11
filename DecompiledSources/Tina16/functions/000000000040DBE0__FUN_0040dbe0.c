/* Ghidra address: 0040dbe0 */
/* Ghidra symbol: FUN_0040dbe0 */


undefined4 FUN_0040dbe0(undefined8 param_1)

{
  char cVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 local_64;
  undefined8 local_60;
  int local_54;
  undefined1 local_4d [5];
  undefined2 local_48;
  undefined2 local_46;
  undefined4 local_44;
  int local_40;
  byte local_3c [36];
  
  local_60 = 0;
  cVar1 = FUN_0040e730(param_1);
  if (cVar1 == '\0') {
    pbVar3 = local_3c;
    iVar4 = 0x20;
    do {
      bVar2 = FUN_0040d560(param_1,local_4d,DAT_02006a28);
      if (bVar2 < 0x21) break;
      *pbVar3 = bVar2;
      FUN_0040d780(param_1);
      pbVar3 = pbVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    *pbVar3 = 0;
    local_48 = 0;
    local_46 = 1;
    local_44 = 0xffffffff;
    local_40 = (int)pbVar3 - (int)local_3c;
    FUN_00415430(&local_60,local_3c,0);
    local_64 = FUN_0040db70(local_60,&local_54);
    if (local_54 != 0) {
      FUN_00409930(0x6a);
    }
  }
  else {
    local_64 = 0;
  }
  FUN_004144d0(&local_60);
  return local_64;
}

