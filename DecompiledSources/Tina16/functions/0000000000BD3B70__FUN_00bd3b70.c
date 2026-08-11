/* Ghidra address: 00bd3b70 */
/* Ghidra symbol: FUN_00bd3b70 */


void FUN_00bd3b70(longlong param_1,uint param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  FUN_00411a80(param_1,param_2);
  DAT_02019b18 = 0;
  if (*(longlong *)(param_1 + 8) != 0) {
    while( true ) {
      iVar1 = *(int *)(*(longlong *)(param_1 + 8) + 0x10);
      if (iVar1 < 1) break;
      uVar2 = FUN_004aeac0(*(longlong *)(param_1 + 8),iVar1 + -1);
      FUN_00bd3d20(param_1,uVar2);
    }
    FUN_00410f20(*(undefined8 *)(param_1 + 8));
  }
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

