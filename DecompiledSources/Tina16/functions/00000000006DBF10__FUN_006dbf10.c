/* Ghidra address: 006dbf10 */
/* Ghidra symbol: FUN_006dbf10 */


undefined1 FUN_006dbf10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined1 local_29;
  
  local_29 = 1;
  pcVar1 = (code *)FUN_00411550(param_1,0xffa9);
  (*pcVar1)(param_1,param_2,param_3,&local_29);
  return local_29;
}

