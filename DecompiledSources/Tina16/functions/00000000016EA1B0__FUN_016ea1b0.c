/* Ghidra address: 016ea1b0 */
/* Ghidra symbol: FUN_016ea1b0 */


uint FUN_016ea1b0(longlong param_1,ushort param_2)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(param_1 + 10);
  if ((uint)uVar1 + (uint)param_2 < 0x10000) {
    *(short *)(param_1 + 10) = *(short *)(param_1 + 10) + param_2;
    FUN_00409620(param_1 + 0x18,(uint)*(ushort *)(param_1 + 10) * 5);
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x18);
    FUN_00b909d0(param_1 + 0x20,(uint)*(ushort *)(param_1 + 10) * 2);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x20);
    FUN_00b909d0(param_1 + 0x30,(uint)*(ushort *)(param_1 + 10) * 2);
  }
  else {
    FUN_01b04d70(0x21c,&LAB_016ea240,0);
  }
  return (uint)uVar1;
}

