/* Ghidra address: 010fce90 */
/* Ghidra symbol: FUN_010fce90 */


void FUN_010fce90(longlong param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  
  FUN_00411a80(param_1,param_2);
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))(*(longlong **)(param_1 + 8));
    FUN_004095f0(lVar1,(longlong)iVar2);
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  FUN_00410f20(*(undefined8 *)(param_1 + 8));
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

