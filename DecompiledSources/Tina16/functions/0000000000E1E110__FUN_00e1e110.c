/* Ghidra address: 00e1e110 */
/* Ghidra symbol: FUN_00e1e110 */


undefined1 * FUN_00e1e110(undefined1 *param_1)

{
  undefined1 local_48 [56];
  
  *param_1 = 0;
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e950 == (code *)0x0) {
      DAT_0202e950 = (code *)FUN_00427c10(DAT_01edc8a0,L"GetDevName");
    }
    if (DAT_0202e950 != (code *)0x0) {
      (*DAT_0202e950)(local_48);
      FUN_00415020(param_1,local_48,0x28);
    }
  }
  return param_1;
}

