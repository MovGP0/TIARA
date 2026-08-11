/* Ghidra address: 008feb80 */
/* Ghidra symbol: FUN_008feb80 */


undefined4 FUN_008feb80(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_008fbe40(param_2);
  if ((char)uVar1 == '\0') {
    FUN_00414520(param_1 + 0x20);
  }
  else {
    FUN_00414b90(param_1 + 0x20,param_2);
  }
  return uVar1;
}

