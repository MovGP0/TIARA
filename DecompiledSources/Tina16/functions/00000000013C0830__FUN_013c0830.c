/* Ghidra address: 013c0830 */
/* Ghidra symbol: FUN_013c0830 */


undefined8 FUN_013c0830(undefined8 param_1,byte *param_2,byte param_3)

{
  char cVar1;
  longlong lVar2;
  uint uVar3;
  byte *pbVar4;
  byte local_128 [256];
  
  lVar2 = (ulonglong)*param_2 + 1;
  pbVar4 = local_128;
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pbVar4 = *param_2;
    param_2 = param_2 + 1;
    pbVar4 = pbVar4 + 1;
  }
  cVar1 = FUN_01b215c0(local_128[1],1);
  if (cVar1 == '\0') {
    local_128[1] = 0x5f;
  }
  uVar3 = (uint)local_128[0];
  if (uVar3 != 0) {
    pbVar4 = local_128;
    do {
      pbVar4 = pbVar4 + 1;
      cVar1 = FUN_01b215c0(*pbVar4,1);
      if (cVar1 == '\0') {
        cVar1 = FUN_01b215f0(*pbVar4);
        if (cVar1 == '\0') {
          *pbVar4 = param_3;
        }
      }
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  FUN_00414ff0(param_1,local_128);
  return param_1;
}

