/* Ghidra address: 00ddfaa0 */
/* Ghidra symbol: FUN_00ddfaa0 */


uint FUN_00ddfaa0(longlong param_1,undefined4 param_2)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar2 = 0;
  bVar1 = FUN_0065be20(param_1);
  if (((byte)param_2 & bVar1) != 0) {
    uVar3 = FUN_0065b870(param_1);
    lVar4 = thunk_FUN_03a65bf1(*(undefined8 *)(param_1 + 0x460),uVar3,0x30f,0,0);
    uVar2 = (uint)(lVar4 != 0);
  }
  if ((char)uVar2 == '\0') {
    uVar2 = FUN_00659ed0(param_1,param_2);
  }
  return uVar2;
}

