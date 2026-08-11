/* Ghidra address: 019af200 */
/* Ghidra symbol: FUN_019af200 */


void FUN_019af200(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if (*(longlong *)(param_2 + 0x168) != 0) {
    param_2 = *(longlong *)(*(longlong *)(param_2 + 0x168) + 0xbe);
  }
  iVar1 = FUN_004aeba0(*(undefined8 *)(param_1 + 0x3d0),param_2);
  if (iVar1 == -1) {
    FUN_004ae7e0(*(undefined8 *)(param_1 + 0x3d0),param_2);
  }
  return;
}

