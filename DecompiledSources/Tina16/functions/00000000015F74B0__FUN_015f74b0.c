/* Ghidra address: 015f74b0 */
/* Ghidra symbol: FUN_015f74b0 */


bool FUN_015f74b0(longlong *param_1)

{
  short sVar1;
  bool bVar2;
  char *local_20;
  
  bVar2 = false;
  sVar1 = FUN_01d03160(param_1);
  if (sVar1 != 0xbb9) {
    (**(code **)(*param_1 + 0x2d0))(param_1,3,&local_20);
    bVar2 = *local_20 == '\0';
  }
  return bVar2;
}

