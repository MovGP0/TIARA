/* Ghidra address: 01d6ee70 */
/* Ghidra symbol: FUN_01d6ee70 */


void FUN_01d6ee70(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined1 local_5b;
  undefined1 local_5a;
  undefined1 local_59;
  undefined1 local_58 [8];
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40;
  undefined8 local_38;
  short local_30;
  int local_28 [2];
  undefined8 local_20;
  
  cVar1 = FUN_016ebdb0(param_1);
  local_30 = FUN_016ebd90(param_1);
  local_40 = 0;
  local_38 = 0x4014000000000000;
  local_48 = FUN_016ebdc0(param_1);
  if ((ushort)(local_30 - 0x88U) < 2) {
    uVar4 = 0;
    local_50 = FUN_01cfde70(local_48,1,1,&local_59,&local_5a,&local_5b);
    uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
    sVar2 = FUN_016eaa90(param_1,uVar4);
    local_28[0] = (int)sVar2;
    local_20 = 0x4014000000000000;
    uVar3 = 0;
    uVar5 = (undefined4)CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
    goto LAB_01d6f043;
  }
  if (local_30 != 0xa2) {
    if (local_30 == 0x5dd) {
      uVar4 = 0;
      local_50 = FUN_01cfde70(local_48,1,1,&local_59,&local_5a,&local_5b);
      uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
      sVar2 = FUN_016eaa90(param_1,uVar4);
      local_28[0] = (int)sVar2;
      uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),2);
      local_20 = FUN_016eb0a0(param_1,uVar4);
      uVar6 = CONCAT71((int7)((ulonglong)uVar4 >> 8),6);
      uVar4 = FUN_016e9de0(param_1,uVar6);
      if ((char)uVar4 == '\0') {
        uVar3 = 0;
      }
      else {
        uVar3 = (undefined4)CONCAT71((int7)((ulonglong)uVar4 >> 8),6);
      }
      cVar1 = cVar1 + -2;
      uVar5 = (undefined4)CONCAT71((int7)((ulonglong)uVar6 >> 8),2);
      goto LAB_01d6f043;
    }
    if (local_30 != 3000) {
      local_50 = 0;
      local_28[0] = 0;
      local_20 = 0x4014000000000000;
      uVar3 = 0;
      uVar5 = (undefined4)CONCAT71((int7)((ulonglong)param_2 >> 8),1);
      goto LAB_01d6f043;
    }
  }
  uVar4 = 0;
  local_50 = FUN_01cfde70(local_48,1,1,&local_59,&local_5a,&local_5b);
  uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
  sVar2 = FUN_016eaa90(param_1,uVar4);
  local_28[0] = (int)sVar2;
  uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),2);
  local_20 = FUN_016eb0a0(param_1,uVar4);
  uVar6 = CONCAT71((int7)((ulonglong)uVar4 >> 8),6);
  uVar4 = FUN_016e9de0(param_1,uVar6);
  if ((char)uVar4 == '\0') {
    uVar3 = 0;
  }
  else {
    uVar3 = (undefined4)CONCAT71((int7)((ulonglong)uVar4 >> 8),6);
  }
  cVar1 = cVar1 + -1;
  uVar5 = (undefined4)CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
LAB_01d6f043:
  FUN_01d6ec50(param_1,uVar3,uVar5,cVar1,local_28,local_58);
  FUN_016ea050(param_1,local_58,0x30);
  FUN_016e9f40(param_1,FUN_01d6ee10);
  return;
}

