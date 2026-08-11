/* Ghidra address: 00ef5940 */
/* Ghidra symbol: FUN_00ef5940 */


void FUN_00ef5940(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  int *piVar2;
  undefined1 local_90 [12];
  undefined1 local_84 [12];
  int local_78;
  int local_74;
  
  piVar2 = &local_78;
  for (lVar1 = 10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined8 *)piVar2 = *param_2;
    param_2 = param_2 + 1;
    piVar2 = piVar2 + 2;
  }
  FUN_00ef4d30(param_1,local_84,local_90);
  FUN_00ef4d60(param_1,&local_78);
  FUN_00ef4d80(param_1,&local_78);
  if (-1 < local_78) {
    FUN_00ef4950(param_1,(undefined1)local_78,
                 *(char *)(param_1 + 0x9f) + *(char *)(param_1 + 0x9e) + *(char *)(param_1 + 0x9d) +
                 *(char *)(param_1 + 0x9c) + '\x01',local_90,param_3);
  }
  if (-1 < local_74) {
    FUN_00ef4950(param_1,(undefined1)local_74,
                 *(char *)(param_1 + 0x9f) + *(char *)(param_1 + 0x9e) + *(char *)(param_1 + 0x9d) +
                 *(char *)(param_1 + 0x9c) + '\x01',local_84,param_3);
  }
  return;
}

