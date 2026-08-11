/* Ghidra address: 004f2c60 */
/* Ghidra symbol: FUN_004f2c60 */


undefined8 FUN_004f2c60(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  if (*(longlong *)PTR_PTR_02002ff8 == 0) {
    FUN_004098e0(0x1a);
  }
  uVar1 = FUN_004121f0(uVar1);
  FUN_00411f00(uVar1,0xffffffff);
  return *(undefined8 *)(param_1 + 8);
}

