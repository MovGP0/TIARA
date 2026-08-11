/* Ghidra address: 00ef5520 */
/* Ghidra symbol: FUN_00ef5520 */


void FUN_00ef5520(longlong param_1,undefined8 *param_2,undefined2 param_3,undefined2 param_4,
                 undefined2 param_5,undefined8 param_6)

{
  char cVar1;
  longlong lVar2;
  int *piVar3;
  undefined1 local_9c [12];
  undefined1 local_90 [12];
  undefined2 local_84;
  undefined2 local_82;
  undefined2 local_80;
  undefined2 local_7e;
  undefined2 local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  
  piVar3 = &local_78;
  for (lVar2 = 10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined8 *)piVar3 = *param_2;
    param_2 = param_2 + 1;
    piVar3 = piVar3 + 2;
  }
  FUN_00ef4d30(param_1,local_90,local_9c);
  FUN_00ef4d60(param_1,&local_78);
  local_84 = 4;
  local_82 = 5;
  local_7e = 7;
  local_7c = 1;
  local_80 = param_3;
  FUN_00ef4d80(param_1,&local_78);
  FUN_00ef4b30(param_1,*(char *)(param_1 + 0x9f) + *(char *)(param_1 + 0x9e) +
                       *(char *)(param_1 + 0x9d) + *(char *)(param_1 + 0x9c),param_6);
  *(char *)(param_1 + 0x9c) = *(char *)(param_1 + 0x9c) + '\x01';
  FUN_00ef4b30(param_1,*(char *)(param_1 + 0x9f) + *(char *)(param_1 + 0x9e) +
                       *(char *)(param_1 + 0x9d) + *(char *)(param_1 + 0x9c),param_6);
  *(char *)(param_1 + 0x9c) = *(char *)(param_1 + 0x9c) + '\x01';
  cVar1 = *(char *)(param_1 + 0x9f) + *(char *)(param_1 + 0x9e) + *(char *)(param_1 + 0x9d) +
          *(char *)(param_1 + 0x9c) + -1;
  FUN_00ef4950(param_1,cVar1,cVar1,&local_84,param_6);
  cVar1 = *(char *)(param_1 + 0x9f) + *(char *)(param_1 + 0x9e) + *(char *)(param_1 + 0x9d) +
          *(char *)(param_1 + 0x9c);
  local_80 = param_4;
  FUN_00ef4950(param_1,cVar1,cVar1,&local_84,param_6);
  local_80 = param_5;
  cVar1 = *(char *)(param_1 + 0x9f) + *(char *)(param_1 + 0x9e) + *(char *)(param_1 + 0x9d) +
          *(char *)(param_1 + 0x9c);
  FUN_00ef4950(param_1,cVar1 + -1,cVar1,&local_84,param_6);
  cVar1 = *(char *)(param_1 + 0x9f) + *(char *)(param_1 + 0x9e) + *(char *)(param_1 + 0x9d) +
          *(char *)(param_1 + 0x9c);
  FUN_00ef4950(param_1,cVar1,cVar1 + -1,&local_84,param_6);
  if (-1 < local_78) {
    FUN_00ef4950(param_1,*(char *)(param_1 + 0x9f) + *(char *)(param_1 + 0x9e) +
                         *(char *)(param_1 + 0x9d) + *(char *)(param_1 + 0x9c) + -1,
                 (undefined1)local_78,local_9c,param_6);
    FUN_00ef4950(param_1,(undefined1)local_78,
                 *(char *)(param_1 + 0x9f) + *(char *)(param_1 + 0x9e) + *(char *)(param_1 + 0x9d) +
                 *(char *)(param_1 + 0x9c) + -1,local_90,param_6);
  }
  if (-1 < local_74) {
    FUN_00ef4950(param_1,*(char *)(param_1 + 0x9f) + *(char *)(param_1 + 0x9e) +
                         *(char *)(param_1 + 0x9d) + *(char *)(param_1 + 0x9c) + -1,
                 (undefined1)local_74,local_90,param_6);
    FUN_00ef4950(param_1,(undefined1)local_74,
                 *(char *)(param_1 + 0x9f) + *(char *)(param_1 + 0x9e) + *(char *)(param_1 + 0x9d) +
                 *(char *)(param_1 + 0x9c) + -1,local_9c,param_6);
  }
  if (-1 < local_70) {
    FUN_00ef4950(param_1,*(char *)(param_1 + 0x9f) + *(char *)(param_1 + 0x9e) +
                         *(char *)(param_1 + 0x9d) + *(char *)(param_1 + 0x9c),(undefined1)local_70,
                 local_9c,param_6);
    FUN_00ef4950(param_1,(undefined1)local_70,
                 *(char *)(param_1 + 0x9f) + *(char *)(param_1 + 0x9e) + *(char *)(param_1 + 0x9d) +
                 *(char *)(param_1 + 0x9c),local_90,param_6);
  }
  if (-1 < local_6c) {
    FUN_00ef4950(param_1,*(char *)(param_1 + 0x9f) + *(char *)(param_1 + 0x9e) +
                         *(char *)(param_1 + 0x9d) + *(char *)(param_1 + 0x9c),(undefined1)local_6c,
                 local_90,param_6);
    FUN_00ef4950(param_1,(undefined1)local_6c,
                 *(char *)(param_1 + 0x9f) + *(char *)(param_1 + 0x9e) + *(char *)(param_1 + 0x9d) +
                 *(char *)(param_1 + 0x9c),local_9c,param_6);
  }
  return;
}

