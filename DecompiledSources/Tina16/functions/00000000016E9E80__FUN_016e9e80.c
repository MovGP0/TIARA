/* Ghidra address: 016e9e80 */
/* Ghidra symbol: FUN_016e9e80 */


uint FUN_016e9e80(longlong param_1,byte param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 4);
  if ((uint)bVar1 + (uint)param_2 < 0x100) {
    FUN_00409620(param_1 + 0x40,((uint)bVar1 + (uint)param_2) * 8);
    FUN_0040d200(*(longlong *)(param_1 + 0x40) + -8 + (ulonglong)(bVar1 + 1) * 8,(uint)param_2 * 8,0
                );
    *(byte *)(param_1 + 4) = bVar1 + param_2;
  }
  else {
    FUN_01b04d70(0x21e,&LAB_016e9f24,0);
  }
  return (uint)bVar1;
}

