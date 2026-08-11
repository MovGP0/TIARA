/* Ghidra address: 004c5890 */
/* Ghidra symbol: FUN_004c5890 */


void FUN_004c5890(undefined8 param_1,byte param_2,undefined4 param_3)

{
  byte local_19;
  
  if (param_2 != 0) {
    local_19 = param_2 | 0xf0;
    FUN_004c3930(param_1,&local_19,1);
    if ((param_2 & 2) != 0) {
      FUN_004c57a0(param_1,param_3);
    }
  }
  return;
}

