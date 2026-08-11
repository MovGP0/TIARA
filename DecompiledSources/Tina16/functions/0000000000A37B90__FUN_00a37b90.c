/* Ghidra address: 00a37b90 */
/* Ghidra symbol: FUN_00a37b90 */


void FUN_00a37b90(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  *param_2 = param_3;
  *(undefined4 *)(param_2 + 1) = param_4;
  while (*(int *)(param_2 + 1) != 0) {
    FUN_0062a930(param_2,0);
    if (*(int *)(param_2 + 3) == 0) {
      FUN_00a37ae0(param_2[0xc],param_2[0xb],*(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x154))
      ;
      param_2[2] = param_2[0xb];
      *(undefined4 *)(param_2 + 3) = *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x154);
    }
  }
  return;
}

