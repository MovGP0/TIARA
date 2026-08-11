/* Ghidra address: 01c16d50 */
/* Ghidra symbol: FUN_01c16d50 */


void FUN_01c16d50(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 local_48 [16];
  undefined1 local_38 [24];
  
  FUN_004238d0(local_38,*(int *)(param_1 + 0x3a8) + 1,0,*(undefined4 *)(param_1 + 0x98),
               *(undefined4 *)(param_1 + 0x3d0));
  uVar1 = FUN_00781840();
  uVar2 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x310));
  plVar3 = (longlong *)FUN_00781840();
  (**(code **)(*plVar3 + 0x158))(plVar3,local_48,0x20);
  FUN_00778dc0(uVar1,uVar2,local_48,local_38,0,0);
  return;
}

