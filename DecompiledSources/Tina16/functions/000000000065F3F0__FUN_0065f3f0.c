/* Ghidra address: 0065f3f0 */
/* Ghidra symbol: FUN_0065f3f0 */


void FUN_0065f3f0(undefined8 param_1,longlong param_2)

{
  char cVar1;
  
  FUN_00654e40(param_1,param_2);
  *(undefined4 *)(param_2 + 8) = 0x80800000;
  *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) | 0x800;
  cVar1 = FUN_0044f0c0(5,1);
  if (cVar1 != '\0') {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) | 0x20000;
  }
  if (DAT_020122d0 != '\0') {
    *(undefined4 *)(param_2 + 0xc) = 0x80;
  }
  FUN_00654db0(param_1,param_2 + 0xc);
  return;
}

