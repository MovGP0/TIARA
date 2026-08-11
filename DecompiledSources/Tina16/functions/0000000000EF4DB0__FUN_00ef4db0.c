/* Ghidra address: 00ef4db0 */
/* Ghidra symbol: FUN_00ef4db0 */


void FUN_00ef4db0(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  int *piVar3;
  undefined1 local_9c [12];
  undefined1 local_90 [12];
  undefined2 local_84;
  undefined2 local_82;
  undefined2 local_80;
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
  FUN_00ef4d80(param_1,&local_78);
  local_84 = 2;
  local_82 = 5;
  local_80 = 2;
  if (-1 < local_78) {
    FUN_00ef4950(param_1,*(char *)(param_1 + 0x9f) + *(char *)(param_1 + 0x9e) +
                         *(char *)(param_1 + 0x9d) + *(char *)(param_1 + 0x9c) + '\x01',
                 (undefined1)local_78,local_9c,param_3);
  }
  if (-1 < local_74) {
    FUN_00ef4950(param_1,*(char *)(param_1 + 0x9f) + *(char *)(param_1 + 0x9e) +
                         *(char *)(param_1 + 0x9d) + *(char *)(param_1 + 0x9c) + '\x01',
                 (undefined1)local_74,local_90,param_3);
  }
  cVar1 = *(char *)(param_1 + 0x9f) + *(char *)(param_1 + 0x9e) + *(char *)(param_1 + 0x9d) +
          *(char *)(param_1 + 0x9c) + '\x01';
  FUN_00ef4950(param_1,cVar1,cVar1,&local_84,param_3);
  return;
}

