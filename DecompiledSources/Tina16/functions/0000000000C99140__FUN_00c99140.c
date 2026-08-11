/* Ghidra address: 00c99140 */
/* Ghidra symbol: FUN_00c99140 */


undefined8 * FUN_00c99140(undefined8 *param_1,undefined8 param_2)

{
  undefined4 local_1c;
  
  local_1c = 0x40;
  FUN_00419260(param_1,&DAT_0086e978,1,0x40);
  if (DAT_01eaaa00 == (code *)0x0) {
    if (DAT_01eaa9f8 != 0) {
      (*DAT_01eaaa08)(param_2,*param_1,&local_1c);
    }
  }
  else {
    (*DAT_01eaaa00)(param_2,*param_1,&local_1c);
  }
  FUN_00419260(param_1,&DAT_0086e978,1,local_1c);
  (*DAT_01eaaa10)(param_2);
  FUN_004095f0(param_2);
  return param_1;
}

