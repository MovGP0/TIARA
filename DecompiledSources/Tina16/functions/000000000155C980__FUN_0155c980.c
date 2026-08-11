/* Ghidra address: 0155c980 */
/* Ghidra symbol: FUN_0155c980 */


void FUN_0155c980(longlong param_1,longlong param_2,undefined4 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_30 [2];
  
  cVar1 = FUN_01600550(param_2);
  if ((cVar1 != '\0') && (*(int *)(param_1 + 0x1aec) == 8)) {
    FUN_016006b0(param_2,param_3,*(undefined8 *)(*(longlong *)(param_1 + 0x1b10) + 0xa20),
                 *(undefined4 *)(param_1 + 0x1ae8),*(undefined4 *)(param_1 + 0x1ae4),
                 *(undefined8 *)(param_1 + 0x1ad8),*(undefined8 *)(param_1 + 0x1ad0),
                 *(undefined4 *)(param_1 + 0x1aec),local_30);
    uVar2 = FUN_00f79380(local_30[0]);
    if (*(char *)(*(longlong *)(param_1 + 0x1b10) + 0xa40) == '\0') {
      (**(code **)(**(longlong **)(param_2 + 0xd8) + 0x10))(*(longlong **)(param_2 + 0xd8),uVar2);
    }
    else {
      (**(code **)(**(longlong **)(param_2 + 0xe0) + 0x10))(*(longlong **)(param_2 + 0xe0),uVar2);
    }
    FUN_00410f20(local_30[0]);
  }
  return;
}

