/* Ghidra address: 00edc190 */
/* Ghidra symbol: FUN_00edc190 */


void FUN_00edc190(longlong param_1,char param_2,byte *param_3,byte *param_4,undefined1 param_5,
                 byte *param_6,undefined4 param_7,longlong param_8,undefined1 param_9,
                 undefined1 *param_10,undefined1 *param_11,undefined8 param_12)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  byte *pbVar4;
  undefined1 auStack_288 [32];
  undefined *local_268;
  undefined1 local_260;
  byte *local_258;
  byte *local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined1 local_218 [256];
  undefined1 local_118 [256];
  undefined8 local_18;
  undefined1 local_a;
  char local_9;
  
  local_240 = 0;
  local_248 = 0;
  local_230 = 0;
  local_238 = 0;
  local_228 = 0;
  local_220 = 0;
  local_18 = 0;
  local_258 = param_3;
  local_250 = param_4;
  if (param_2 == '\f') {
    local_268 = &DAT_00edc73a;
    local_260 = 0;
    FUN_016ba960(*(undefined8 *)(param_1 + 0xef8),local_118,1,L"DB|INOISE|ONOISE");
    FUN_00415020(local_250,local_118,param_5);
    iVar2 = FUN_00414f50(local_250,&DAT_00edc75a,(ulonglong)*local_250 + 1);
    if (iVar2 == 0) {
      local_268 = &DAT_00edc73a;
      local_260 = 0;
      FUN_016ba960(*(undefined8 *)(param_1 + 0xef8),local_118,1,L"INOISE|ONOISE");
    }
    goto code_r0x00edc695;
  }
  local_268 = &DAT_00edc73a;
  local_260 = 0;
  FUN_016ba960(*(undefined8 *)(param_1 + 0xef8),local_118,0,&DAT_00edc794);
  FUN_00415020(local_250,local_118,param_5);
  *local_258 = local_250[1];
  FUN_00415020(param_8,&DAT_00edc79c,param_9);
  *param_10 = 0;
  *param_11 = 0;
  FUN_00edb630(param_1,local_118,&local_9,param_12);
  FUN_00415020(param_6,local_118,(undefined1)param_7);
  FUN_004144d0(&local_18);
  pbVar4 = param_6;
  if (param_6[1] == 0x58) {
    FUN_004169a0(&local_220,param_6);
    uVar3 = FUN_004413f0(&DAT_00edc7ac,local_220);
    FUN_004151b0(local_218,param_6,1,uVar3);
    FUN_004154b0(&local_18,local_218,0);
    FUN_004169a0(&local_228,param_6);
    uVar3 = FUN_004413f0(&DAT_00edc7ac,local_228);
    pbVar4 = (byte *)FUN_00415260(param_6,param_7,1,uVar3);
  }
  if (local_9 == '\0') {
    if ((byte)(param_6[1] - 0x28) < 0x40) {
      pbVar4 = (byte *)CONCAT71(0xcc13f803ff,
                                (1L << (param_6[1] - 0x28 & 0x3f) & 0xcc13f803ff04U) != 0);
    }
    else {
      pbVar4 = (byte *)0x0;
    }
    if ((char)pbVar4 != '\0') goto LAB_00edc471;
    uVar3 = 0;
  }
  else {
LAB_00edc471:
    uVar3 = (undefined4)CONCAT71((int7)((ulonglong)pbVar4 >> 8),1);
  }
  FUN_00edbf10(auStack_288,local_250,param_6[1],uVar3);
  FUN_00415020(local_250,&DAT_00edc79c,param_5);
  if ((local_9 == '\0') &&
     ((byte)(param_6[1] - 0x40) < 0x20 && (1 << (param_6[1] - 0x40 & 0x1f) & 0x1fe3ffcU) != 0)) {
    FUN_004154b0(&local_238,param_6,0);
    FUN_004156b0(&local_230,local_18,local_238);
    FUN_00415560(local_118,local_230,0xff);
    FUN_00415020(local_250,local_118,param_5);
    FUN_00415020(param_6,&DAT_00edc79c,(undefined1)param_7);
  }
  else {
    FUN_004154b0(&local_248,param_6,0);
    FUN_004156b0(&local_240,local_18,local_248);
    FUN_00415560(local_118,local_240,0xff);
    FUN_00415020(param_6,local_118,(undefined1)param_7);
    if ((*local_258 == 0x56) &&
       (iVar2 = FUN_00414f50(param_6,&DAT_00edc7bc,(ulonglong)*param_6 + 1), iVar2 != 0)) {
      FUN_00edb630(param_1,local_118,&local_9,&local_a);
      FUN_00415020(param_8,local_118,param_9);
      if ((local_9 == '\0') &&
         (bVar1 = *(char *)(param_8 + 1) - 0x40,
         bVar1 < 0x20 && (1 << (bVar1 & 0x1f) & 0x400210U) != 0)) {
        FUN_00415020(param_8,&DAT_00edc79c,param_9);
        FUN_016b9df0(*(undefined8 *)(param_1 + 0xef8));
      }
    }
  }
code_r0x00edc695:
  FUN_00414590(&local_248,4);
  FUN_00414560(&local_228,2);
  FUN_004144d0(&local_18);
  return;
}

