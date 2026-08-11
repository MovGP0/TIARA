/* Ghidra address: 00d45c30 */
/* Ghidra symbol: FUN_00d45c30 */


void FUN_00d45c30(longlong param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00781840();
  uVar2 = FUN_007793c0(uVar1,0xff00000f);
  FUN_00788cc0(param_1,uVar2);
  uVar1 = FUN_00781840();
  uVar2 = FUN_007793c0(uVar1,0xff000012);
  *(undefined4 *)(param_1 + 0x30) = uVar2;
  return;
}

