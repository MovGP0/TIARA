/* Ghidra address: 00685b60 */
/* Ghidra symbol: FUN_00685b60 */


void FUN_00685b60(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 local_38 [24];
  
  if ((*(char *)((longlong)param_1 + 0x54a) == '\x01') && (param_1[0xf] != 0)) {
    (**(code **)(*param_1 + 0xe0))(param_1,local_38);
    uVar1 = FUN_005fdb10(*(undefined8 *)(param_1[0xf] + 0x330));
    thunk_FUN_03984819(*(undefined8 *)(param_2 + 8),local_38,uVar1);
    *(undefined8 *)(param_2 + 0x18) = 1;
  }
  else {
    (**(code **)(*param_1 + -0x38))(param_1,param_2);
  }
  return;
}

