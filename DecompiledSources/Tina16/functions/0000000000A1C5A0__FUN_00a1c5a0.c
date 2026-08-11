/* Ghidra address: 00a1c5a0 */
/* Ghidra symbol: FUN_00a1c5a0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a1c5a0(longlong *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  
  iVar1 = *(int *)((longlong)param_1 + 0x24);
  if (iVar1 != 100) {
    lVar5 = *param_1;
    *(undefined4 *)(lVar5 + 0x28) = 0x14;
    *(int *)(lVar5 + 0x2c) = iVar1;
    (**(code **)*param_1)(param_1);
  }
  if (param_1[0xb] == 0) {
    lVar5 = (**(code **)param_1[1])(param_1,0,0x3c0);
    param_1[0xb] = lVar5;
  }
  *(undefined4 *)(param_1 + 9) = 8;
  FUN_00a1c1b0(param_1,0x32,1);
  FUN_00a1d570(param_1,param_1 + 0x10,&DAT_01e70130,&DAT_01e70141);
  FUN_00a1d570(param_1,param_1 + 0x14,&DAT_01e70170,&DAT_01e70190);
  FUN_00a1d570(param_1,param_1 + 0x11,&DAT_01e70150,&DAT_01e70161);
  FUN_00a1d570(param_1,param_1 + 0x15,&DAT_01e70240,&DAT_01e70260);
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0x1010101;
  *(undefined4 *)(param_1 + 0x1c) = 0x5050505;
  *(undefined2 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined2 *)((longlong)param_1 + 0xd4) = 0x101;
  *(undefined2 *)((longlong)param_1 + 0xe4) = 0x505;
  *(undefined8 *)((longlong)param_1 + 0xc6) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd6) = 0x101010101010101;
  *(undefined8 *)((longlong)param_1 + 0xe6) = 0x505050505050505;
  *(undefined2 *)((longlong)param_1 + 0xce) = 0;
  *(undefined2 *)((longlong)param_1 + 0xde) = 0x101;
  *(undefined2 *)((longlong)param_1 + 0xee) = 0x505;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(uint *)(param_1 + 0x21) = (uint)(8 < (int)param_1[9]);
  uVar4 = uRam0000000001e6fe2c;
  uVar3 = uRam0000000001e6fe28;
  uVar2 = uRam0000000001e6fe24;
  *(undefined4 *)((longlong)param_1 + 0x10c) = _DAT_01e6fe20;
  *(undefined4 *)(param_1 + 0x22) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x114) = uVar3;
  *(undefined4 *)(param_1 + 0x23) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x124) = 1;
  *(undefined1 *)((longlong)param_1 + 0x125) = 1;
  *(undefined1 *)((longlong)param_1 + 0x126) = 0;
  *(undefined2 *)(param_1 + 0x25) = 1;
  *(undefined2 *)((longlong)param_1 + 0x12a) = 1;
  FUN_00a1c760(param_1);
  return;
}

