/* Ghidra address: 00bdfaa0 */
/* Ghidra symbol: FUN_00bdfaa0 */


ulonglong FUN_00bdfaa0(longlong param_1,undefined8 param_2,uint *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 local_60 [52];
  byte local_2c;
  
  FUN_00be1d50(local_60,param_2,0xffffffff,1,0xffffffff,0);
  uVar2 = FUN_00be3260(*(undefined8 *)(param_1 + 0x10),local_60,param_3);
  if ((char)uVar2 != '\0') {
    if ((char)uVar2 == '\0') {
      uVar2 = 0;
    }
    else {
      lVar1 = *(longlong *)(param_1 + 0x10);
      if (*(uint *)(lVar1 + 0x10) <= *param_3) {
        FUN_00594f90();
      }
      local_2c = (byte)*(undefined4 *)
                        (*(longlong *)(lVar1 + 8) + (longlong)(int)*param_3 * 0x14 + 0x10);
      uVar2 = (ulonglong)local_2c;
    }
  }
  return uVar2;
}

