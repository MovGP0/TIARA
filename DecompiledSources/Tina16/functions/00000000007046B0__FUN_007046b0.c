/* Ghidra address: 007046b0 */
/* Ghidra symbol: FUN_007046b0 */


void FUN_007046b0(longlong param_1,int *param_2)

{
  undefined8 uVar1;
  
  if (*param_2 - 0xbd32U < 7) {
    if (((*PTR_DAT_02003210 == '\0') && (*(byte *)(param_1 + 0x580) < 2)) &&
       (*(longlong *)(param_1 + 0x78) != 0)) {
      uVar1 = FUN_005fdb10(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x330));
      *(undefined8 *)(param_2 + 6) = uVar1;
    }
  }
  else {
    FUN_006847b0(param_1,param_2);
  }
  return;
}

