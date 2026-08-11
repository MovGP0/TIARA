/* Ghidra address: 00b97b20 */
/* Ghidra symbol: FUN_00b97b20 */


void FUN_00b97b20(undefined8 param_1,int param_2)

{
  if (param_2 == 0x4b0) {
    FUN_0045adf0();
  }
  else if (param_2 == 0x4b1) {
    FUN_00458e40();
  }
  else if (param_2 == 65000) {
    FUN_0045ae40();
  }
  else if (param_2 + -0xfde9 == 0) {
    FUN_0045ae90();
  }
  else {
    FUN_0045afe0(&PTR_FUN_0043bb30,CONCAT71((uint7)(uint3)((uint)(param_2 + -0xfde9) >> 8),1),
                 param_2);
  }
  return;
}

