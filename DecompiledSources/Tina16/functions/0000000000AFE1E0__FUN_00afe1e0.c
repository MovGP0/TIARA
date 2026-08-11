/* Ghidra address: 00afe1e0 */
/* Ghidra symbol: FUN_00afe1e0 */


void FUN_00afe1e0(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  
  if ((char)param_2 != *(char *)((longlong)param_1 + 0x4dc)) {
    FUN_00a778c0(param_1,param_2);
    if ((char)param_2 == '\x01') {
      lVar1 = param_1[0x116];
      *(undefined4 *)(lVar1 + 0x9c) = 0xffffffff;
      *(undefined4 *)(lVar1 + 0xa0) = 0xffffffff;
      (**(code **)(*param_1 + 0x188))(param_1);
    }
  }
  return;
}

