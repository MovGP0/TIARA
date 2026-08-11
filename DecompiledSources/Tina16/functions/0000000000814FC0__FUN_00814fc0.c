/* Ghidra address: 00814fc0 */
/* Ghidra symbol: FUN_00814fc0 */


void FUN_00814fc0(longlong param_1,int param_2,int *param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  
  *param_3 = *param_3 + 1;
  iVar1 = *param_3 + -1;
  if (param_2 == iVar1) {
    *(undefined8 *)
     (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0xa0) + 0x40) + 8 +
     (longlong)param_2 * 0x20) = param_4;
  }
  else {
    if (param_2 + 1 <= iVar1) {
      iVar2 = ((param_2 + 1) - iVar1) + -1;
      do {
        *(undefined8 *)
         (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0xa0) + 0x40) + 8 +
         (longlong)iVar1 * 0x20) =
             *(undefined8 *)
              (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0xa0) + 0x40) + 8 +
              (longlong)(iVar1 + -1) * 0x20);
        iVar1 = iVar1 + -1;
        iVar2 = iVar2 + 1;
      } while (iVar2 != 0);
    }
    *(undefined8 *)
     (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0xa0) + 0x40) + 8 +
     (longlong)param_2 * 0x20) = param_4;
  }
  return;
}

