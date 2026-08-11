/* Ghidra address: 01517820 */
/* Ghidra symbol: FUN_01517820 */


void FUN_01517820(undefined8 param_1,ushort *param_2)

{
  ushort uVar1;
  
  uVar1 = *param_2;
  if (10000 < uVar1) {
    uVar1 = 10000;
  }
  *param_2 = uVar1;
  uVar1 = *param_2;
  if (uVar1 < 10) {
    uVar1 = 10;
  }
  *param_2 = uVar1;
  return;
}

