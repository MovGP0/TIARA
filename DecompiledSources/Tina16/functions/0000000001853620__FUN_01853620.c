/* Ghidra address: 01853620 */
/* Ghidra symbol: FUN_01853620 */


undefined8 FUN_01853620(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = thunk_FUN_03e5bd07(param_1,2);
  if (((iVar1 == 2) && (iVar1 = thunk_FUN_03e5bd07(param_1,0x78), iVar1 == 0)) &&
     (iVar1 = thunk_FUN_03e5bd07(param_1,0xc), iVar1 < 0x11)) {
    return 0;
  }
  return 1;
}

