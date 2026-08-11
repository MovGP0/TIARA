/* Ghidra address: 00ddcdd0 */
/* Ghidra symbol: FUN_00ddcdd0 */


undefined8 FUN_00ddcdd0(longlong param_1,undefined8 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int local_38 [2];
  undefined1 local_30;
  undefined8 local_28;
  undefined1 local_20;
  
  iVar3 = *(int *)(param_1 + 0xc);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar2 * 0x10);
      local_38[0] = *piVar1;
      if (param_3 == local_38[0]) {
        local_30 = 0;
        local_28 = *(undefined8 *)(piVar1 + 2);
        local_20 = 0x11;
        FUN_00442f70(param_2,L"%d - %s",local_38,1);
        return param_2;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_0043f750(param_2,param_3);
  return param_2;
}

