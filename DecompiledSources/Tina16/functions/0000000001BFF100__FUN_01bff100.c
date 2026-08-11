/* Ghidra address: 01bff100 */
/* Ghidra symbol: FUN_01bff100 */


void FUN_01bff100(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    iVar1 = FUN_004aeba0(*(undefined8 *)(param_1 + 0x78),param_2);
    if (iVar1 == -1) {
      FUN_004ae7e0(*(undefined8 *)(param_1 + 0x78),param_2);
      FUN_004d26c0(param_1,param_2);
      FUN_01bff050(param_2,param_1);
      FUN_01bff0c0(param_2,param_1);
    }
  }
  return;
}

