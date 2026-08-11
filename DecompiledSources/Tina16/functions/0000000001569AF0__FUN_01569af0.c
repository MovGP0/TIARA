/* Ghidra address: 01569af0 */
/* Ghidra symbol: FUN_01569af0 */


void FUN_01569af0(undefined8 param_1,longlong param_2,undefined4 param_3,undefined8 *param_4,
                 undefined8 *param_5,undefined8 *param_6,undefined8 *param_7)

{
  char cVar1;
  undefined8 uVar2;
  
  *param_4 = 0;
  *param_5 = 0;
  *param_6 = 0;
  *param_7 = 0;
  cVar1 = FUN_015697f0(param_1,param_2,param_3);
  if (cVar1 == '\0') {
    FUN_015699c0(param_1,param_2,param_3,param_6,param_7);
  }
  else {
    uVar2 = FUN_01602290(*(undefined8 *)(param_2 + 0x40),&DAT_01569ba8,1);
    *param_4 = uVar2;
    uVar2 = FUN_01602290(*(undefined8 *)(param_2 + 0x40),&DAT_01569baf,1);
    *param_5 = uVar2;
  }
  return;
}

