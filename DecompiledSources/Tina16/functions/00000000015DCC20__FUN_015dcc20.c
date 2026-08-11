/* Ghidra address: 015dcc20 */
/* Ghidra symbol: FUN_015dcc20 */


void FUN_015dcc20(longlong param_1,undefined8 param_2,char param_3)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x103) != '\0') {
    uVar1 = FUN_015b59b0(&PTR_FUN_015b5818,1,0x33,param_1);
    FUN_004134c0(uVar1);
  }
  FUN_015dcd20(param_1);
  *(undefined1 *)(param_1 + 0x86) = 1;
  if (param_3 != '\0') {
    FUN_004b6e40(param_2,0);
  }
  uVar1 = FUN_015c3590(&DAT_015ba810,1,param_2,param_3,param_1);
  *(undefined8 *)(param_1 + 0x238) = uVar1;
  *(undefined8 *)(param_1 + 0x250) = param_2;
  if (param_3 == '\0') {
    FUN_015c6ba0(*(undefined8 *)(param_1 + 0x238));
  }
  else {
    FUN_015c8e90(*(undefined8 *)(param_1 + 0x238),1,0);
  }
  *(undefined1 *)(param_1 + 0x84) = 1;
  FUN_015dae40(param_1);
  return;
}

