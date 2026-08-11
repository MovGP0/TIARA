/* Ghidra address: 00edbf10 */
/* Ghidra symbol: FUN_00edbf10 */


void FUN_00edbf10(longlong param_1,byte *param_2,undefined4 param_3,char param_4)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  byte *pbVar5;
  undefined1 local_228 [256];
  byte local_128 [256];
  
  lVar4 = (ulonglong)*param_2 + 1;
  pbVar5 = local_128;
  for (; lVar4 != 0; lVar4 = lVar4 + -1) {
    *pbVar5 = *param_2;
    param_2 = param_2 + 1;
    pbVar5 = pbVar5 + 1;
  }
  if (param_4 == '\0') {
    uVar3 = FUN_00edbed0(param_1,local_128,2);
    uVar2 = FUN_00edbd90(param_1,param_3,uVar3);
    **(undefined1 **)(param_1 + 0x2d8) = uVar2;
    if (local_128[1] == 'V') {
      if (**(char **)(param_1 + 0x2d8) == '\0') {
        FUN_016a4020(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x290) + 0xef8) + 0x10),8
                     ,local_128,0xffffffff);
      }
      else {
        uVar3 = FUN_00edbed0(param_1,local_128,3);
        uVar2 = FUN_00edbd90(param_1,param_3,uVar3);
        **(undefined1 **)(param_1 + 0x2e0) = uVar2;
        if (**(char **)(param_1 + 0x2e0) == '\0') {
          FUN_004151b0(local_228,local_128,3,local_128[0]);
          cVar1 = FUN_00edbc80(param_1,*(undefined1 *)(param_1 + 0x298),local_228);
        }
        else {
          FUN_004151b0(local_228,local_128,4,local_128[0]);
          cVar1 = FUN_00edbc80(param_1,*(undefined1 *)(param_1 + 0x298),local_228);
        }
        if (cVar1 == '\0') {
          FUN_016a4020(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x290) + 0xef8) + 0x10)
                       ,8,local_128,0xffffffff);
        }
      }
    }
    else if (**(char **)(param_1 + 0x2d8) == '\0') {
      FUN_016a4020(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x290) + 0xef8) + 0x10),8,
                   local_128,0xffffffff);
    }
    else {
      FUN_004151b0(local_228,local_128,3,local_128[0]);
      cVar1 = FUN_00edbc80(param_1,*(undefined1 *)(param_1 + 0x298),local_228);
      if (cVar1 == '\0') {
        FUN_016a4020(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x290) + 0xef8) + 0x10),8
                     ,local_128,0xffffffff);
      }
    }
  }
  else {
    FUN_004151b0(local_228,local_128,2,local_128[0]);
    cVar1 = FUN_00edbc80(param_1,*(undefined1 *)(param_1 + 0x298),local_228);
    if (cVar1 == '\0') {
      FUN_016a4020(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x290) + 0xef8) + 0x10),8,
                   local_128,0xffffffff);
    }
  }
  return;
}

