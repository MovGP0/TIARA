/* Ghidra address: 00694990 */
/* Ghidra symbol: FUN_00694990 */


void FUN_00694990(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  thunk_FUN_041b2403(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x68),0xb,0,0);
  iVar1 = thunk_FUN_041b2403(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x68),0x18e,0,0);
  if (*(short *)(param_2 + 10) < 0) {
    iVar1 = iVar1 + 1;
  }
  else {
    iVar1 = iVar1 + -1;
  }
  thunk_FUN_041b2403(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x68),0x197,(longlong)iVar1,0);
  thunk_FUN_041b2403(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x68),0xb,1,0);
  FUN_00693810(*(undefined8 *)(param_1 + 0x70),local_38);
  uVar2 = FUN_004230a0(local_38);
  FUN_00693810(*(undefined8 *)(param_1 + 0x70),local_48);
  uVar3 = FUN_004230c0(local_48);
  FUN_004238d0(local_28,0,0,uVar2,uVar3);
  thunk_FUN_041543e0(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x68),local_28,0,5);
  FUN_00693fa0(*(undefined8 *)(param_1 + 0x70),0);
  *(undefined1 *)(param_1 + 0x4f) = 1;
  return;
}

