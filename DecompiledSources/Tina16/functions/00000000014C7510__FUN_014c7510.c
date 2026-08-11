/* Ghidra address: 014c7510 */
/* Ghidra symbol: FUN_014c7510 */


void FUN_014c7510(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 uVar2;
  short sVar3;
  undefined4 uVar4;
  undefined8 unaff_RDI;
  undefined7 uVar5;
  undefined1 local_1ca [394];
  undefined8 local_40;
  int local_34;
  char local_30;
  undefined1 local_2f;
  undefined1 local_2e;
  undefined1 local_2d;
  undefined1 local_2c;
  undefined1 local_2b;
  
  cVar1 = FUN_016e9de0(param_1,2);
  uVar5 = (undefined7)((ulonglong)unaff_RDI >> 8);
  if (cVar1 == '\0') {
    uVar4 = (undefined4)CONCAT71(uVar5,0xff);
  }
  else {
    uVar4 = (undefined4)CONCAT71(uVar5,2);
  }
  cVar1 = FUN_016e9de0(param_1,3);
  if (cVar1 == '\0') {
    uVar2 = 0xff;
  }
  else {
    uVar2 = 3;
  }
  local_30 = FUN_016eacf0(param_1,1,8);
  local_30 = local_30 + '\x01';
  local_2f = FUN_016eacf0(param_1,2,3);
  local_2e = FUN_016eaa90(param_1,3);
  sVar3 = FUN_016eaa90(param_1,8);
  local_34 = (int)sVar3;
  local_2c = FUN_016eacf0(param_1,0xb,3);
  local_2b = FUN_016eacf0(param_1,4,4);
  local_2d = FUN_016eacf0(param_1,9,2);
  FUN_016ebb00(param_1,0xd,local_1ca,0x18a);
  FUN_016ee260(param_1,&local_40,0x248,0);
  FUN_014c7110(param_1,param_2,1,uVar4,uVar2,&local_34,local_1ca,local_40);
  FUN_016e9f40(param_1,FUN_014c7060);
  return;
}

