/* Ghidra address: 0084eb60 */
/* Ghidra symbol: FUN_0084eb60 */


void FUN_0084eb60(longlong param_1,undefined8 param_2,undefined2 param_3,ulonglong param_4,
                 int param_5)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  FUN_00650ea0(param_1,param_2,param_3,param_4 & 0xffffffff,param_5);
  if (((((int)param_4 < 0) || (param_5 < 0)) || (*(int *)(param_1 + 0x98) <= (int)param_4)) ||
     (*(int *)(param_1 + 0x9c) <= param_5)) {
    uVar3 = 0;
  }
  else {
    uVar3 = CONCAT71((uint7)(param_4 >> 8) & 0xffffff,1);
  }
  uVar1 = *(undefined8 *)(param_1 + 8);
  pcVar2 = (code *)FUN_00411550(uVar1,0xffab);
  (*pcVar2)(uVar1,uVar3);
  return;
}

