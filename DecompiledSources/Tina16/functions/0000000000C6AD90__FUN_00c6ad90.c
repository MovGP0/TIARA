/* Ghidra address: 00c6ad90 */
/* Ghidra symbol: FUN_00c6ad90 */


void FUN_00c6ad90(longlong param_1,undefined8 param_2,ushort param_3)

{
  char cVar1;
  
  cVar1 = FUN_004113d0(*(undefined8 *)
                        (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x78) + 0x78) + 0x78) +
                        0x78),&PTR_FUN_00c68b38);
  if ((cVar1 != '\0') && ((param_3 & 8) != 0)) {
    FUN_0064e9e0(param_1,0,0xffffffff);
  }
  return;
}

