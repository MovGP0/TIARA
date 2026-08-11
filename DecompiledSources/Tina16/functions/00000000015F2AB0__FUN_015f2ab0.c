/* Ghidra address: 015f2ab0 */
/* Ghidra symbol: FUN_015f2ab0 */


byte FUN_015f2ab0(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,undefined8 param_4)

{
  byte bVar1;
  byte bVar2;
  undefined1 local_2c [4];
  
  *param_2 = 0;
  *param_3 = 0;
  bVar1 = FUN_015f1e10(param_1,L"TINA HDL Macro Description Begin",local_2c,param_2,param_4);
  bVar2 = FUN_015f1e10(param_1,L"TINA HDL Macro Description End",local_2c,param_3,param_4);
  if ((bVar2 & bVar1) == 0) {
    *param_2 = 0;
    *param_3 = 0;
    bVar2 = FUN_015f1e10(param_1,L"TINA VHDL Macro Description Begin",local_2c,param_2,param_4);
    bVar1 = FUN_015f1e10(param_1,L"TINA VHDL Macro Description End",local_2c,param_3,param_4);
    bVar2 = bVar2 & bVar1;
  }
  else {
    bVar2 = 1;
  }
  return bVar2;
}

