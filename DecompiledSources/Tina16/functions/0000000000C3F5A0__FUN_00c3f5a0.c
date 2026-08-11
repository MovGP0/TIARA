/* Ghidra address: 00c3f5a0 */
/* Ghidra symbol: FUN_00c3f5a0 */


void FUN_00c3f5a0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined2 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
                 undefined1 param_9)

{
  undefined1 uVar1;
  short sVar2;
  undefined8 uVar3;
  
  uVar1 = param_8;
  sVar2 = FUN_00c3f420(param_1,param_6,param_7,&param_8);
  if (sVar2 != -1) {
    uVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x38),(longlong)sVar2);
    FUN_00c3cb40(uVar3,param_2,param_3,param_4,param_5,param_8,uVar1,param_9);
  }
  return;
}

