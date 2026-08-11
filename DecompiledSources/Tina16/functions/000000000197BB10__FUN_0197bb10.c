/* Ghidra address: 0197bb10 */
/* Ghidra symbol: FUN_0197bb10 */


void FUN_0197bb10(longlong param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = 0;
  if ((*(char *)(param_1 + 0x78) == '\0') &&
     (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x88) + 0x1a8) + 0x30) != '\0')) {
    FUN_0180fd00(&local_10,
                 *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x88) + 0x1a8) + 0x28));
    FUN_00414ad0(param_1 + 0x98,local_10);
    uVar1 = FUN_004b9860(&PTR_FUN_0047c498,1,*(undefined8 *)(param_1 + 0x98),0xff00);
    *(undefined8 *)(param_1 + 0x90) = uVar1;
  }
  else {
    uVar1 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
    *(undefined8 *)(param_1 + 0x90) = uVar1;
  }
  FUN_00414480(&local_10);
  return;
}

