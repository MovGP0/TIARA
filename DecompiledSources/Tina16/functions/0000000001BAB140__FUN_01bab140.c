/* Ghidra address: 01bab140 */
/* Ghidra symbol: FUN_01bab140 */


ulonglong FUN_01bab140(longlong param_1,byte *param_2,byte *param_3,ulonglong param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  byte *pbVar4;
  byte local_218 [256];
  byte local_118 [256];
  
  lVar3 = (ulonglong)*param_2 + 1;
  pbVar4 = local_118;
  for (; lVar3 != 0; lVar3 = lVar3 + -1) {
    *pbVar4 = *param_2;
    param_2 = param_2 + 1;
    pbVar4 = pbVar4 + 1;
  }
  lVar3 = (ulonglong)*param_3 + 1;
  pbVar4 = local_218;
  for (; lVar3 != 0; lVar3 = lVar3 + -1) {
    *pbVar4 = *param_3;
    param_3 = param_3 + 1;
    pbVar4 = pbVar4 + 1;
  }
  cVar1 = *(char *)(param_1 + 0x3b8);
  if (cVar1 == '\0') {
    iVar2 = FUN_00416fd0(local_118,local_218,1);
    param_4 = CONCAT71((int7)(param_4 >> 8),iVar2 == 1);
  }
  else if (cVar1 == '\x01') {
    iVar2 = FUN_00416fd0(local_118,local_218,1);
    param_4 = CONCAT71((int7)(param_4 >> 8),0 < iVar2);
  }
  else if (cVar1 == '\x02') {
    if (local_118[0] < local_218[0]) {
      iVar2 = FUN_00416fd0(local_118,local_218,1);
      param_4 = CONCAT71((int7)(param_4 >> 8),iVar2 == ((uint)local_218[0] - (uint)local_118[0]) + 1
                        );
    }
    else {
      param_4 = 0;
    }
  }
  return param_4 & 0xffffffff;
}

