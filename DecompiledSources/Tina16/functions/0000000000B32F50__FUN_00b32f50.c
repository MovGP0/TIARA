/* Ghidra address: 00b32f50 */
/* Ghidra symbol: FUN_00b32f50 */


void FUN_00b32f50(longlong param_1)

{
  byte bVar1;
  
  FUN_00415ad0(*(longlong *)(param_1 + 0x38) + 2,
               *(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x10),*(int *)(param_1 + 0x34) + 1,3)
  ;
  bVar1 = **(byte **)(*(longlong *)(param_1 + 0x38) + 2);
  if (((((bVar1 & 0x40) == 0) && ((bVar1 & 2) == 0)) && ((bVar1 & 8) == 0)) && ((bVar1 & 1) == 0)) {
    if ((bVar1 & 0x10) == 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x60) + 8) = 0xffffffff;
    }
    else {
      **(undefined1 **)(param_1 + 0x38) = 1;
      *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x12) = 1;
      FUN_00414bf0(*(longlong *)(param_1 + 0x38) + 10,&DAT_00b32ffc);
    }
  }
  else {
    *(undefined1 *)(*(longlong *)(param_1 + 0x38) + 0x16) = 1;
  }
  return;
}

