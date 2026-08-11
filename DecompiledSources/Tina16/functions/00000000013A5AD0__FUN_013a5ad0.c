/* Ghidra address: 013a5ad0 */
/* Ghidra symbol: FUN_013a5ad0 */


void FUN_013a5ad0(ushort *param_1,short param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 900) {
    *param_1 = 0x10;
    param_1[1] = 8;
  }
  else if (param_2 == 0x38a4) {
    *param_1 = 0x100;
    param_1[1] = 4;
  }
  else if (param_2 == 0x38a5) {
    *param_1 = 0x400;
    param_1[1] = 4;
  }
  else if (param_2 == 0x38a6) {
    *param_1 = 0x800;
    param_1[1] = 8;
  }
  else {
    *param_1 = 0x400;
    param_1[1] = 8;
  }
  uVar1 = FUN_004095c0((uint)*param_1 * 2);
  *(undefined8 *)(param_1 + 4) = uVar1;
  FUN_0040d200(uVar1,(uint)*param_1 * 2,0);
  return;
}

