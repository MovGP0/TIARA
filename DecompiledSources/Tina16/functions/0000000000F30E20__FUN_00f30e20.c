/* Ghidra address: 00f30e20 */
/* Ghidra symbol: FUN_00f30e20 */


undefined8 FUN_00f30e20(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    uVar1 = FUN_00f2fcf0(&LAB_00f233a8,CONCAT71((int7)((ulonglong)in_RAX >> 8),1) & 0xffffffff,
                         param_2,param_3);
    FUN_00f30e00(param_1,uVar1);
  }
  return param_1;
}

