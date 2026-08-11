/* Ghidra address: 0068fe80 */
/* Ghidra symbol: FUN_0068fe80 */


void FUN_0068fe80(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 local_28;
  undefined4 local_24;
  
  if ((*(longlong *)(param_1 + 0x40) != 0) &&
     (cVar1 = FUN_0065be20(*(longlong *)(param_1 + 0x40)), cVar1 == '\0')) {
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = 0;
    FUN_00410f20(uVar4);
    FUN_0068fda0(param_1);
    return;
  }
  if ((*(char *)(*(longlong *)(param_1 + 0x10) + 0xa9) != '\0') &&
     (*(longlong *)(param_1 + 0x40) != 0)) {
    FUN_0068fbb0(param_1,&local_28);
    uVar4 = FUN_0065b870(*(undefined8 *)(param_1 + 0x40));
    uVar2 = FUN_004230a0(&local_28);
    uVar3 = FUN_004230c0(&local_28);
    thunk_FUN_041cc6e2(uVar4,0,local_28,local_24,uVar2,uVar3,0x40);
  }
  return;
}

