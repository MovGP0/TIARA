/* Ghidra address: 00c41090 */
/* Ghidra symbol: FUN_00c41090 */


undefined8 FUN_00c41090(longlong param_1,char param_2,char param_3,uint param_4)

{
  short sVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar2 = (uint)(param_2 != '\0');
  if (param_3 != '\0') {
    uVar2 = 2;
  }
  sVar1 = FUN_00c3f0d0(param_1,uVar2 + (param_4 & 0xff) * 3);
  if (sVar1 < 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x38),(int)sVar1);
  }
  return uVar3;
}

