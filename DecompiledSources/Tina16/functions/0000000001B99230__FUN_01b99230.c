/* Ghidra address: 01b99230 */
/* Ghidra symbol: FUN_01b99230 */


void FUN_01b99230(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_0043ea00(param_2 + 0x28,*(undefined8 *)(*(longlong *)(param_2 + 0x58) + 0x38));
  if (*(longlong *)(param_2 + 0x28) != 0) {
    FUN_0064de00(*(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x718),
                 *(undefined8 *)(*(longlong *)(param_2 + 0x58) + 0x38));
  }
  uVar1 = FUN_006e2530(*(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x7e8));
  FUN_01b96ae0(*(undefined8 *)(param_2 + 0x80),uVar1,1);
  FUN_00410f20(*(undefined8 *)(param_2 + 0x58));
  return;
}

