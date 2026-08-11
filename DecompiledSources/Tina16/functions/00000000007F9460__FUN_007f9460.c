/* Ghidra address: 007f9460 */
/* Ghidra symbol: FUN_007f9460 */


undefined8 FUN_007f9460(undefined *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (param_1 != PTR_DAT_01e13ff0) {
    iVar1 = thunk_FUN_0419e3da(param_1);
    if (iVar1 != 0) {
      iVar1 = thunk_FUN_03986dbd(param_1);
      if (iVar1 != 0) {
        puVar2 = (undefined8 *)FUN_004095c0(0x10);
        *puVar2 = DAT_01e14010;
        puVar2[1] = param_1;
        DAT_01e14010 = puVar2;
        thunk_FUN_04154efc(param_1,0);
      }
    }
  }
  return 0xffffffff;
}

