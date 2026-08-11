/* Ghidra address: 0147ccf0 */
/* Ghidra symbol: FUN_0147ccf0 */


undefined8 FUN_0147ccf0(undefined8 param_1,uint param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_004113f0(param_1,&LAB_00f256b8);
  if (((int)param_2 < 0) || (*(int *)(*(longlong *)(lVar1 + 0x10) + 0x10) <= (int)param_2)) {
    uVar2 = 0;
  }
  else {
    lVar1 = *(longlong *)(lVar1 + 0x10);
    if (*(uint *)(lVar1 + 0x10) <= param_2) {
      FUN_00594f90();
    }
    uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 8) + (longlong)(int)param_2 * 8);
  }
  return uVar2;
}

