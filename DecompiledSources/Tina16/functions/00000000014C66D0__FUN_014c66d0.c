/* Ghidra address: 014c66d0 */
/* Ghidra symbol: FUN_014c66d0 */


void FUN_014c66d0(undefined8 param_1)

{
  char cVar1;
  short sVar2;
  undefined8 uVar3;
  undefined8 unaff_RSI;
  undefined7 uVar5;
  ulonglong uVar4;
  ulonglong uVar6;
  undefined1 local_268 [536];
  undefined8 local_50;
  int local_48;
  char local_44;
  undefined1 local_43;
  undefined1 local_42;
  undefined1 local_41;
  undefined1 local_40;
  undefined8 local_38;
  char local_30;
  
  cVar1 = FUN_016e9de0(param_1,2);
  uVar5 = (undefined7)((ulonglong)unaff_RSI >> 8);
  if (cVar1 == '\0') {
    uVar4 = CONCAT71(uVar5,0xff);
  }
  else {
    uVar4 = CONCAT71(uVar5,2);
  }
  uVar3 = FUN_016e9de0(param_1,3);
  if ((char)uVar3 == '\0') {
    uVar6 = 0xff;
  }
  else {
    uVar6 = CONCAT71((int7)((ulonglong)uVar3 >> 8),3) & 0xffffffff;
  }
  local_44 = FUN_016eacf0(param_1,1,8);
  local_44 = local_44 + '\x01';
  local_43 = FUN_016eacf0(param_1,2,3);
  local_42 = FUN_016eaa90(param_1,3);
  sVar2 = FUN_016eaa90(param_1,7);
  local_48 = (int)sVar2;
  local_38 = FUN_016eb0a0(param_1,9);
  local_40 = FUN_016eacf0(param_1,4,10);
  local_41 = FUN_016eacf0(param_1,8,2);
  cVar1 = FUN_016eacf0(param_1,0xb,3);
  local_30 = cVar1;
  FUN_016ebb00(param_1,0xc,local_268,0x218);
  FUN_016ee260(param_1,&local_50,800,0);
  if (cVar1 == '\0') {
    FUN_014c61c0(param_1,1,uVar4 & 0xffffffff,uVar6,&local_48,local_268,local_50);
    FUN_016e9f40(param_1,FUN_014c6110);
  }
  else {
    FUN_014c59b0(param_1,1,uVar4 & 0xffffffff,uVar6,&local_48,local_50);
    FUN_016e9f40(param_1,FUN_014c5960);
  }
  return;
}

