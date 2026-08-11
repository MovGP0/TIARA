/* Ghidra address: 01773f90 */
/* Ghidra symbol: FUN_01773f90 */


undefined4 FUN_01773f90(longlong param_1,uint param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined8 unaff_RBX;
  
  *param_3 = 0;
  if ((param_2 & *(uint *)(*(longlong *)(param_1 + 0x110) + 0x2a)) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (undefined4)CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  }
  if ((char)uVar1 != '\0') {
    FUN_01773fd0(param_1,param_3,1);
  }
  return uVar1;
}

