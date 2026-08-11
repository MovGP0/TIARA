/* Ghidra address: 00c7d9e0 */
/* Ghidra symbol: FUN_00c7d9e0 */


undefined8 FUN_00c7d9e0(undefined8 param_1,uint param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = (param_2 ^ (int)param_2 >> 0x1f) - ((int)param_2 >> 0x1f);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else if (iVar2 == 1) {
    uVar1 = 0xc;
  }
  else {
    uVar1 = FUN_0040c770(((160.0 - (double)iVar2) * 30.0) / 135.0 + 30.01);
  }
  return uVar1;
}

