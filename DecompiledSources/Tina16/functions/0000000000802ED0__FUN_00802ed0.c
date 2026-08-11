/* Ghidra address: 00802ed0 */
/* Ghidra symbol: FUN_00802ed0 */


void FUN_00802ed0(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 local_28 [16];
  
  if (*(char *)((longlong)param_1 + 0x4d6) == '\x01') {
    if ((*(char *)((longlong)param_1 + 0x4d6) == '\x01') &&
       ((*(ushort *)((longlong)param_1 + 0x34) & 0x10) == 0)) {
      (**(code **)(*param_1 + 0xe0))(param_1,local_28);
      uVar1 = FUN_005fdb10(*(undefined8 *)(*(longlong *)(DAT_02012668 + 0xa8) + 0x330));
      thunk_FUN_03984819(*(undefined8 *)(param_2 + 8),local_28,uVar1);
    }
    else {
      (**(code **)(*param_1 + -0x38))(param_1,param_2);
    }
  }
  return;
}

