/* Ghidra address: 0060f4c0 */
/* Ghidra symbol: FUN_0060f4c0 */


undefined8 FUN_0060f4c0(undefined8 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (DAT_02012040 == 0) {
    uVar4 = 0;
  }
  else {
    uVar1 = FUN_005fbf20();
    uVar2 = FUN_005fbf20(param_2);
    lVar3 = FUN_0060f1a0(DAT_02012040,uVar1,uVar2);
    uVar4 = *(undefined8 *)(lVar3 + 8);
  }
  return uVar4;
}

