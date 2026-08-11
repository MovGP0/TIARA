/* Ghidra address: 01d3d8c0 */
/* Ghidra symbol: FUN_01d3d8c0 */


undefined8 FUN_01d3d8c0(undefined4 param_1)

{
  char cVar1;
  ushort uVar2;
  
  cVar1 = FUN_01d3d5c0(param_1);
  if ((((cVar1 == '\0') && (uVar2 = (ushort)param_1, uVar2 != 3000)) && (uVar2 != 0x2901)) &&
     (((uVar2 != 0x2902 && (uVar2 != 0x2900)) &&
      ((cVar1 = FUN_01d3d600(param_1), cVar1 == '\0' && (uVar2 != 0x2903)))))) {
    if (uVar2 < 10000) {
      return 0;
    }
    return 1;
  }
  return 2;
}

