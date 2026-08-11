/* Ghidra address: 01be5d50 */
/* Ghidra symbol: FUN_01be5d50 */


void FUN_01be5d50(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  FUN_00654e40(param_1,param_2);
  cVar1 = FUN_004113d0(param_1[0xf],&PTR_FUN_007ee548);
  if (cVar1 == '\0') {
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xbfffffff | 0x86000000;
  }
  *(undefined4 *)(param_2 + 0x30) = 0x809;
  cVar1 = FUN_0044f0c0(5,1);
  if (cVar1 != '\0') {
    cVar1 = FUN_01be07e0(param_1);
    if (cVar1 != '\0') {
      *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) | 0x20000;
    }
  }
  cVar1 = (**(code **)(*param_1 + 0x2c8))(param_1);
  if (cVar1 == '\0') {
    *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) | 8;
  }
  return;
}

