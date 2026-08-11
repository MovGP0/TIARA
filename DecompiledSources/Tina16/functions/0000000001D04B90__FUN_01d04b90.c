/* Ghidra address: 01d04b90 */
/* Ghidra symbol: FUN_01d04b90 */


undefined8 FUN_01d04b90(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x2d8))(param_1);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*(longlong *)param_1[0x33] + 0x78))((longlong *)param_1[0x33]);
  }
  return uVar2;
}

