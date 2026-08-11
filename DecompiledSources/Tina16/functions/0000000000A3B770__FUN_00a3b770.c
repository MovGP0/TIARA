/* Ghidra address: 00a3b770 */
/* Ghidra symbol: FUN_00a3b770 */


void FUN_00a3b770(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  uint uVar2;
  
  *(undefined4 *)(param_1 + 0x488) = *(undefined4 *)(param_3 + 4);
  uVar2 = (int)*(uint *)(param_3 + 8) >> 0x1f;
  *(uint *)(param_1 + 0x48c) = (*(uint *)(param_3 + 8) ^ uVar2) - uVar2;
  if (*(ushort *)(param_3 + 0x12) < 0x10) {
    *(undefined1 *)(param_1 + 0x490) = *(undefined1 *)(param_3 + 0x12);
  }
  else {
    *(undefined1 *)(param_1 + 0x490) = 8;
  }
  if (*(ushort *)(param_3 + 0x12) < 0x10) {
    *(undefined1 *)(param_1 + 0x491) = 3;
  }
  else {
    *(undefined1 *)(param_1 + 0x491) = 2;
  }
  *(undefined1 *)(param_1 + 0x492) = 0;
  *(undefined1 *)(param_1 + 0x494) = 0;
  FUN_00a35400(param_1);
  uVar1 = thunk_FUN_04137b5f(0);
  thunk_FUN_0416e0b3(uVar1,param_2,0,*(undefined4 *)(param_1 + 0x48c),
                     *(undefined8 *)(param_1 + 0x478),param_1 + 0x44,0);
  thunk_FUN_041a2fd8(uVar1);
  return;
}

