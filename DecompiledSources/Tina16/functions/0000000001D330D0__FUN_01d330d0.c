/* Ghidra address: 01d330d0 */
/* Ghidra symbol: FUN_01d330d0 */


undefined8 FUN_01d330d0(undefined8 param_1,ushort *param_2,ushort *param_3)

{
  undefined8 uVar1;
  
  if (*param_2 < *param_3) {
    uVar1 = 0xffffffff;
  }
  else if (*param_3 < *param_2) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

