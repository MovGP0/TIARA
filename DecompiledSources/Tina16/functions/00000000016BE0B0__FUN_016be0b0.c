/* Ghidra address: 016be0b0 */
/* Ghidra symbol: FUN_016be0b0 */


char FUN_016be0b0(undefined8 param_1,byte *param_2)

{
  char cVar1;
  longlong lVar2;
  byte *pbVar3;
  char local_129;
  undefined8 local_128;
  undefined8 local_120;
  byte local_118 [256];
  
  local_120 = 0;
  lVar2 = (ulonglong)*param_2 + 1;
  pbVar3 = local_118;
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pbVar3 = *param_2;
    param_2 = param_2 + 1;
    pbVar3 = pbVar3 + 1;
  }
  local_129 = '\x01';
  cVar1 = FUN_016ba100(param_1,0x7b);
  if (cVar1 == '\0') {
    local_129 = FUN_016baee0(param_1,&local_128);
    FUN_004144d0(&local_120);
  }
  else {
    FUN_016bc400(param_1,&local_120);
    local_128 = 0;
    FUN_016b9f90(param_1,0x7d);
  }
  if (local_129 != '\0') {
    FUN_016bdb60(param_1,local_118,&local_128,local_120,3);
  }
  FUN_004144d0(&local_120);
  return local_129;
}

