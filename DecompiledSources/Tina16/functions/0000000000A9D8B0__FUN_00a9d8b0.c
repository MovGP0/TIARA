/* Ghidra address: 00a9d8b0 */
/* Ghidra symbol: FUN_00a9d8b0 */


void FUN_00a9d8b0(longlong param_1)

{
  undefined8 *puVar1;
  char cVar2;
  
  if (*(char *)(param_1 + 0x40) != '\x11') {
    FUN_00a9c030(*(undefined8 *)(param_1 + 0xa8));
    cVar2 = FUN_00a936a0(param_1);
    if ((cVar2 == 'f') &&
       (*(int *)(*(longlong *)(param_1 + 0xa8) + 0x30) +
        *(int *)(*(longlong *)(param_1 + 0xa8) + 0x34) <
        *(int *)(*(longlong *)(param_1 + 0x18) + 0xa0))) {
      puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x18) + 0x88);
      (**(code **)*puVar1)(puVar1,&DAT_00a9d934,0);
      (**(code **)*puVar1)(puVar1,&LAB_00a9d936,2);
    }
  }
  return;
}

