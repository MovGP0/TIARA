/* Ghidra address: 0185a010 */
/* Ghidra symbol: FUN_0185a010 */


void FUN_0185a010(undefined8 param_1,byte *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  if ((((*param_2 & 0x80) == 0) || ((*param_2 & 0x10) != 0)) || ((*param_2 & 0x40) != 0)) {
    FUN_01868030();
  }
  else {
    FUN_018680e0(param_1,param_3,param_4,param_5,param_2[5]);
  }
  return;
}

