/* Ghidra address: 005bbf20 */
/* Ghidra symbol: FUN_005bbf20 */


undefined8 FUN_005bbf20(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  uVar1 = FUN_00448820();
  uVar2 = FUN_00448820(param_2);
  uStack_1c = (int)((ulonglong)uVar1 >> 0x20);
  uStack_24 = (int)((ulonglong)uVar2 >> 0x20);
  if ((uStack_1c == uStack_24) &&
     (local_20 = (int)uVar1, local_28 = (int)uVar2, local_20 == local_28)) {
    uVar1 = CONCAT71((uint7)(uint3)((ulonglong)uVar1 >> 8),1);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

