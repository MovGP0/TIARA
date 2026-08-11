/* Ghidra address: 015425e0 */
/* Ghidra symbol: FUN_015425e0 */


undefined8 FUN_015425e0(longlong *param_1)

{
  char cVar1;
  undefined2 uVar2;
  
  uVar2 = (**(code **)(*param_1 + 0xf8))(param_1);
  cVar1 = FUN_01d3f4b0(param_1,0);
  if ((cVar1 == '\0') && (cVar1 = FUN_01d3f6f0(uVar2), cVar1 == '\0')) {
    return 0;
  }
  return 1;
}

