/* Ghidra address: 00bd19b0 */
/* Ghidra symbol: FUN_00bd19b0 */


undefined8 FUN_00bd19b0(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  (**(code **)(*param_1 + 0x58))(param_1,3);
  uVar1 = FUN_005ffa40(param_1);
  uVar3 = 0;
  if (param_2 != 0) {
    uVar3 = *(undefined4 *)(param_2 + -4);
  }
  uVar2 = FUN_00416740(param_2);
  uVar1 = FUN_00bd1940(uVar1,uVar2,uVar3);
  return uVar1;
}

