/* Ghidra address: 00d460c0 */
/* Ghidra symbol: FUN_00d460c0 */


void FUN_00d460c0(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  FUN_00788e40(param_1);
  if ((*(byte *)(param_1 + 0x42) & 1) != 0) {
    uVar2 = FUN_00781840();
    uVar1 = FUN_00779380(uVar2,0x16);
    FUN_00788cc0(param_1,uVar1);
    uVar2 = FUN_00781840();
    uVar1 = FUN_007793c0(uVar2,0xff000008);
    *(undefined4 *)(param_1 + 0x30) = uVar1;
    uVar2 = *(undefined8 *)(param_1 + 8);
    uVar1 = FUN_00788c10(param_1);
    thunk_FUN_041b2403(uVar2,0x1001,0,uVar1);
    uVar2 = *(undefined8 *)(param_1 + 8);
    uVar1 = FUN_00788c10(param_1);
    thunk_FUN_041b2403(uVar2,0x1026,0,uVar1);
    uVar2 = *(undefined8 *)(param_1 + 8);
    uVar1 = FUN_00788c20(param_1);
    uVar1 = FUN_005fbf20(uVar1);
    thunk_FUN_041b2403(uVar2,0x1024,0,uVar1);
  }
  return;
}

