/* Ghidra address: 0072d3f0 */
/* Ghidra symbol: FUN_0072d3f0 */


void FUN_0072d3f0(undefined8 param_1,undefined8 param_2,ushort param_3)

{
  byte bVar1;
  undefined4 uVar2;
  
  bVar1 = (byte)(param_3 >> 8);
  if ((param_3 & 4) == 0) {
    if ((param_3 & 1) == 0) {
      uVar2 = (undefined4)CONCAT71((uint7)bVar1,5);
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = (undefined4)CONCAT71((uint7)bVar1,2);
  }
  FUN_0072c9a0(param_1,param_2,param_3,uVar2);
  return;
}

