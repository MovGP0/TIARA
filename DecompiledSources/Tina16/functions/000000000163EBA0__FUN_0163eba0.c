/* Ghidra address: 0163eba0 */
/* Ghidra symbol: FUN_0163eba0 */


void FUN_0163eba0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  FUN_004b84c0(param_2,param_3 + 8,4);
  if (*(uint *)(param_3 + 8) != 0xffffffff) {
    if ((*(uint *)(param_3 + 8) & 0x80000000) == 0) {
      *(undefined4 *)(param_3 + 0xc) = 0;
    }
    else {
      *(undefined4 *)(param_3 + 0xc) = 1;
    }
    *(uint *)(param_3 + 8) = *(uint *)(param_3 + 8) & 0x7fffffff;
  }
  return;
}

