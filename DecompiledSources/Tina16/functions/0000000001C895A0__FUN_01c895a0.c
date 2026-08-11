/* Ghidra address: 01c895a0 */
/* Ghidra symbol: FUN_01c895a0 */


void FUN_01c895a0(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong local_res8 [4];
  
  if (*(char *)(*(longlong *)(param_1 + 0xd08) + 0x328) != '\0') {
    uVar1 = *(ulonglong *)(param_2 + 8);
    if (*(char *)(param_1 + 0x182f) == '\0') {
      *(undefined1 *)(param_1 + 0x182f) = 1;
      local_res8[0] = param_1;
      if (*(char *)(param_1 + 0x182e) == '\0') {
        FUN_01c88130(param_1,0);
      }
      else if ((uVar1 & 2) == 0) {
        FUN_01c88130(param_1,3);
      }
      else {
        FUN_01c88130(param_1,2);
      }
      *(undefined1 *)(local_res8[0] + 0x182f) = 0;
      if (*(char *)(local_res8[0] + 0x182d) != '\0') {
        uVar2 = FUN_0065b870(local_res8[0]);
        thunk_FUN_0413e052(uVar2,0x1234,*(undefined8 *)(param_2 + 8),local_res8);
      }
      *(undefined1 *)(local_res8[0] + 0x182d) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0x182d) = 1;
    }
  }
  return;
}

