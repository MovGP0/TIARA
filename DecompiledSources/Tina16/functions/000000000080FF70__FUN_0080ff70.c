/* Ghidra address: 0080ff70 */
/* Ghidra symbol: FUN_0080ff70 */


void FUN_0080ff70(longlong param_1,longlong param_2)

{
  char cVar1;
  
  FUN_00654e40(param_1,param_2);
  *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x46000000;
  *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) | 4;
  *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  if (*(longlong *)(param_1 + 0x490) != 0) {
    cVar1 = FUN_00810370(*(longlong *)(param_1 + 0x490));
    if (cVar1 != '\0') {
      *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) | 0x88;
    }
  }
  return;
}

