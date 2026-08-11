/* Ghidra address: 00e7db40 */
/* Ghidra symbol: FUN_00e7db40 */


void FUN_00e7db40(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  double dVar4;
  longlong local_168;
  undefined8 local_160;
  undefined1 local_158 [288];
  double local_38;
  undefined1 local_30;
  
  local_168 = 0;
  if (*(char *)(param_2 + 0x339) == '\0') {
    local_30 = 0;
  }
  else {
    local_30 = FUN_016eacf0(param_1,6,3);
  }
  cVar1 = FUN_016eacf0(param_1,4,2);
  local_38 = (double)FUN_016eb0a0(param_1,5);
  local_38 = local_38 + 273.15;
  if (cVar1 == '\0') {
    dVar4 = (double)FUN_016ed770(param_2);
    local_38 = local_38 + dVar4;
  }
  uVar2 = FUN_00b905e0(0x110,0x118);
  FUN_00b909a0(&local_168,uVar2);
  FUN_016ee260(param_1,&local_160,0x740,0);
  if (local_168 == 0) {
    return;
  }
  if ((char)param_3 == '\x03') {
    FUN_016ebb00(param_1,1,local_168,0x110);
    FUN_00e7e5c0(local_168,local_158);
  }
  else {
    FUN_016ebb00(param_1,1,local_168,0x118);
    FUN_00e7e780(local_168,local_158);
  }
  cVar1 = FUN_016e9de0(param_1,6);
  if (cVar1 != '\0') {
    cVar1 = FUN_016e9de0(param_1,7);
    if (cVar1 != '\0') {
      FUN_00e7e9e0(param_1,param_2,param_3,1,2,3,4,5,6,7,&local_38,local_158,local_160);
      goto LAB_00e7dd29;
    }
  }
  cVar1 = FUN_016e9d10(param_1,2);
  FUN_00e7e9e0(param_1,param_2,param_3,1,2,3,4,5,cVar1 + '\x01',cVar1 + '\x02',&local_38,local_158,
               local_160);
LAB_00e7dd29:
  FUN_016e9f40(param_1,FUN_00e7daf0);
  FUN_016e9f60(param_1,FUN_00e7e940);
  FUN_016e9ff0(param_1,FUN_00e7de50);
  iVar3 = FUN_00b905e0(0x110,0x118);
  FUN_004095f0(local_168,(longlong)iVar3);
  return;
}

