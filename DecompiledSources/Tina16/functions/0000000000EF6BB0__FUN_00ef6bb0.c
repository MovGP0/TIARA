/* Ghidra address: 00ef6bb0 */
/* Ghidra symbol: FUN_00ef6bb0 */


void FUN_00ef6bb0(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  int *piVar2;
  undefined1 local_9c [12];
  undefined1 local_90 [24];
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  
  piVar2 = &local_78;
  for (lVar1 = 10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined8 *)piVar2 = *param_2;
    param_2 = param_2 + 1;
    piVar2 = piVar2 + 2;
  }
  FUN_00ef4d30(param_1,local_90,local_9c);
  FUN_00ef4d60(param_1,&local_78);
  FUN_00ef4b30(param_1,*(char *)(param_1 + 0x9f) + *(char *)(param_1 + 0x9e) +
                       *(char *)(param_1 + 0x9d),param_3);
  *(char *)(param_1 + 0x9d) = *(char *)(param_1 + 0x9d) + '\x01';
  if (-1 < local_78) {
    FUN_00ef4950(param_1,*(char *)(param_1 + 0x9f) + *(char *)(param_1 + 0x9e) +
                         *(char *)(param_1 + 0x9d),(undefined1)local_78,local_90,param_3);
  }
  if (-1 < local_74) {
    FUN_00ef4950(param_1,*(char *)(param_1 + 0x9f) + *(char *)(param_1 + 0x9e) +
                         *(char *)(param_1 + 0x9d),(undefined1)local_74,local_9c,param_3);
  }
  if (-1 < local_70) {
    FUN_00ef4950(param_1,(undefined1)local_70,
                 *(char *)(param_1 + 0x9f) + *(char *)(param_1 + 0x9e) + *(char *)(param_1 + 0x9d),
                 local_90,param_3);
  }
  if (-1 < local_6c) {
    FUN_00ef4950(param_1,(undefined1)local_6c,
                 *(char *)(param_1 + 0x9f) + *(char *)(param_1 + 0x9e) + *(char *)(param_1 + 0x9d),
                 local_9c,param_3);
  }
  return;
}

