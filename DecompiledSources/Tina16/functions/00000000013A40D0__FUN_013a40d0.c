/* Ghidra address: 013a40d0 */
/* Ghidra symbol: FUN_013a40d0 */


void FUN_013a40d0(undefined8 param_1,undefined8 *param_2)

{
  undefined1 local_208 [512];
  
  FUN_00442620(local_208,*param_2);
  if ((DAT_01f39fd8 != '\0') && (DAT_01f39fc8 != (code *)0x0)) {
    (*DAT_01f39fc8)(local_208);
  }
  return;
}

