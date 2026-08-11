/* Ghidra address: 00d2b030 */
/* Ghidra symbol: FUN_00d2b030 */


void FUN_00d2b030(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x78) != 0) {
    uVar1 = FUN_00d2a9d0(param_1);
    uVar2 = FUN_00d2a4f0(*(undefined8 *)(param_1 + 0x78));
    FUN_00d21ab0(uVar1,uVar2);
  }
  uVar1 = FUN_00d2a9d0(param_1);
  FUN_00d217e0(uVar1,param_2,param_3);
  return;
}

