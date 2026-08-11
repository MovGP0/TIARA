/* Ghidra address: 00b6be30 */
/* Ghidra symbol: FUN_00b6be30 */


void FUN_00b6be30(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar2 = *(undefined4 *)(param_2 + -4);
  }
  uVar1 = FUN_00415ab0(param_2);
  (**(code **)(*param_1 + 0xc0))(param_1,uVar1,uVar2);
  return;
}

