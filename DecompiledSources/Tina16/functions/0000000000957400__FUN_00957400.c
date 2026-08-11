/* Ghidra address: 00957400 */
/* Ghidra symbol: FUN_00957400 */


undefined8 FUN_00957400(longlong param_1,uint param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (((int)param_2 < 0) || (*(int *)(*(longlong *)(param_1 + 8) + 0x10) <= (int)param_2)) {
    uVar2 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 8);
    if (*(uint *)(lVar1 + 0x10) <= param_2) {
      FUN_00594f90();
    }
    uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 8) + (longlong)(int)param_2 * 8);
  }
  return uVar2;
}

