/* Ghidra address: 01c676a0 */
/* Ghidra symbol: FUN_01c676a0 */


undefined4 FUN_01c676a0(byte *param_1)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  uint uVar4;
  byte *pbVar5;
  undefined8 local_248;
  undefined8 local_240;
  undefined1 local_238;
  byte local_237;
  undefined8 local_230;
  undefined1 local_228 [256];
  byte local_128 [264];
  
  local_248 = 0;
  local_230 = 0;
  local_240 = 0;
  lVar3 = (ulonglong)*param_1 + 1;
  pbVar5 = local_128;
  for (; lVar3 != 0; lVar3 = lVar3 + -1) {
    *pbVar5 = *param_1;
    param_1 = param_1 + 1;
    pbVar5 = pbVar5 + 1;
  }
  local_228[0] = 0;
  uVar4 = (uint)local_128[0];
  if (uVar4 != 0) {
    pbVar5 = local_128;
    do {
      pbVar5 = pbVar5 + 1;
      cVar1 = FUN_00c53600(*pbVar5);
      if (cVar1 != '\0') {
        FUN_004154b0(&local_230,local_228,0);
        local_238 = 1;
        local_237 = *pbVar5;
        FUN_004154b0(&local_240,&local_238,0);
        FUN_004155b0(&local_230,local_240);
        FUN_00415560(local_228,local_230);
      }
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  FUN_004169a0(&local_248,local_228);
  uVar2 = FUN_0043fc00(local_248);
  FUN_00414480(&local_248);
  FUN_004144d0(&local_240);
  FUN_004144d0(&local_230);
  return uVar2;
}

