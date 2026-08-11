/* Ghidra address: 00ef5070 */
/* Ghidra symbol: FUN_00ef5070 */


void FUN_00ef5070(longlong param_1,undefined8 *param_2,short param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  int *piVar3;
  undefined1 local_9c [12];
  undefined1 local_90 [12];
  undefined2 local_84;
  undefined2 local_82;
  short local_80;
  int local_78;
  int local_74;
  
  piVar3 = &local_78;
  for (lVar2 = 10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined8 *)piVar3 = *param_2;
    param_2 = param_2 + 1;
    piVar3 = piVar3 + 2;
  }
  FUN_00ef4d30(param_1,local_90,local_9c);
  FUN_00ef4d60(param_1,&local_78);
  local_84 = 2;
  local_82 = 5;
  local_80 = param_3;
  FUN_00ef4d80(param_1,&local_78);
  FUN_00ef4b30(param_1,*(char *)(param_1 + 0x9f) + *(char *)(param_1 + 0x9e),param_4);
  *(char *)(param_1 + 0x9e) = *(char *)(param_1 + 0x9e) + '\x01';
  if (param_3 != 9) {
    cVar1 = *(char *)(param_1 + 0x9f) + *(char *)(param_1 + 0x9e);
    FUN_00ef4950(param_1,cVar1,cVar1,&local_84,param_4);
  }
  if (-1 < local_78) {
    FUN_00ef4950(param_1,(undefined1)local_78,*(char *)(param_1 + 0x9f) + *(char *)(param_1 + 0x9e),
                 local_90,param_4);
    FUN_00ef4950(param_1,*(char *)(param_1 + 0x9f) + *(char *)(param_1 + 0x9e),(undefined1)local_78,
                 local_9c,param_4);
  }
  if (-1 < local_74) {
    FUN_00ef4950(param_1,(undefined1)local_74,*(char *)(param_1 + 0x9f) + *(char *)(param_1 + 0x9e),
                 local_9c,param_4);
    FUN_00ef4950(param_1,*(char *)(param_1 + 0x9f) + *(char *)(param_1 + 0x9e),(undefined1)local_74,
                 local_90,param_4);
  }
  return;
}

