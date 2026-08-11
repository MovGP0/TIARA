/* Ghidra address: 005345f0 */
/* Ghidra symbol: FUN_005345f0 */


void FUN_005345f0(longlong param_1,uint param_2)

{
  int iVar1;
  
  FUN_00411a80(param_1,param_2);
  if (*(longlong *)(param_1 + 8) != 0) {
    iVar1 = thunk_FUN_04157e37(*(longlong *)(param_1 + 8));
    if (iVar1 == 0) {
      FUN_00451a00();
    }
    *(undefined8 *)(param_1 + 8) = 0;
  }
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

