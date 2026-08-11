/* Ghidra address: 004d0950 */
/* Ghidra symbol: FUN_004d0950 */


void FUN_004d0950(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  *(undefined8 *)**(undefined8 **)(param_2 + 0x68) = 0;
  if (*(longlong *)PTR_PTR_02002ff8 == 0) {
    FUN_004098e0(0x1a);
  }
  uVar1 = FUN_004121f0(DAT_02011650);
  FUN_00411f00(uVar1,0xffffffff);
  return;
}

