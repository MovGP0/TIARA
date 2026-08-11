/* Ghidra address: 01d6ec50 */
/* Ghidra symbol: FUN_01d6ec50 */


void FUN_01d6ec50(undefined8 param_1,char param_2,ulonglong param_3,uint param_4,undefined8 *param_5
                 ,char *param_6)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  char local_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  
  local_38 = *param_5;
  local_30 = param_5[1];
  cVar1 = FUN_016e9e80(param_1,param_4);
  *param_6 = cVar1;
  cVar1 = '\x01';
  for (uVar3 = param_4 & 0xff; uVar3 != 0; uVar3 = uVar3 - 1) {
    FUN_016ec240(param_1,*param_6 + cVar1,
                 CONCAT71((int7)((param_3 & 0xffffffff) >> 8),
                          (char)(param_3 & 0xffffffff) + cVar1 + -1),param_2);
    cVar1 = cVar1 + '\x01';
  }
  *(undefined8 *)(param_6 + 0x20) = local_30;
  *(undefined4 *)(param_6 + 4) = (undefined4)local_38;
  param_6[0x18] = param_2;
  param_6[0x19] = (char)param_3;
  FUN_01aa0b90(*(undefined4 *)(param_6 + 4),local_58);
  uVar3 = param_4 & 0xff;
  cVar1 = '\x01';
  if ((param_4 & 0xff) != 0) {
    pcVar2 = local_58;
    do {
      if (*pcVar2 == '\x01') {
        FUN_016ed5d0(param_1,*param_6 + cVar1,*(undefined8 *)(param_6 + 0x20),0,0,0x3ff0000000000000
                     ,0);
      }
      else {
        FUN_016ed5d0(param_1,*param_6 + cVar1,0,0,0,0x3ff0000000000000,0);
      }
      cVar1 = cVar1 + '\x01';
      pcVar2 = pcVar2 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}

