/* Ghidra address: 00d4a410 */
/* Ghidra symbol: FUN_00d4a410 */


void FUN_00d4a410(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined4 local_8c;
  undefined4 local_88;
  
  uVar2 = FUN_00781840();
  uVar1 = FUN_00779380(uVar2,0xc);
  uVar1 = FUN_005fbf20(uVar1);
  FUN_00788cc0(param_1,uVar1);
  uVar2 = FUN_00781840();
  uVar3 = FUN_00787c60(*(undefined8 *)(param_1 + 0x18));
  uVar1 = FUN_007793a0(uVar2,(&DAT_01ecd3cc)[uVar3 & 0xff]);
  uVar1 = FUN_005fbf20(uVar1);
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  uVar2 = FUN_00781840();
  uVar3 = FUN_00787c60(*(undefined8 *)(param_1 + 0x18));
  uVar1 = FUN_00779380(uVar2,(&DAT_01ecd3ce)[uVar3 & 0xff]);
  uVar1 = FUN_005fbf20(uVar1);
  *(undefined4 *)(param_1 + 0xc0) = uVar1;
  FUN_0040d200(&local_8c,0x74,0);
  local_8c = 0x74;
  local_88 = 0xf800003f;
  thunk_FUN_041b2403(*(undefined8 *)(param_1 + 8),0x443,0,0);
  thunk_FUN_041b2403(*(undefined8 *)(param_1 + 8),0x43a,0,&local_8c);
  thunk_FUN_041b2403(*(undefined8 *)(param_1 + 8),0x444,0,&local_8c);
  return;
}

