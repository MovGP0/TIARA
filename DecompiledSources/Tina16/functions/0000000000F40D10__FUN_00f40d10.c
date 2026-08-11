/* Ghidra address: 00f40d10 */
/* Ghidra symbol: FUN_00f40d10 */


void FUN_00f40d10(longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_28 [24];
  
  FUN_00829760(param_1);
  if ((*(byte *)(param_1 + 0x348) & 1) != 0) {
    FUN_00498370(local_28,0,0,*(undefined4 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0x9c));
    thunk_FUN_04176532(local_28,0xfffffffd,0xfffffffd);
    if (*(char *)(param_1 + 0x33a) == '\x02') {
      FUN_00429ca0(local_28,1,1);
    }
    uVar1 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x310));
    thunk_FUN_03b3ef59(uVar1,local_28);
  }
  return;
}

