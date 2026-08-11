/* Ghidra address: 0072d5c0 */
/* Ghidra symbol: FUN_0072d5c0 */


void FUN_0072d5c0(undefined8 param_1,undefined4 param_2,undefined2 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined8 param_7)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined8 in_stack_ffffffffffffffa8;
  undefined4 uVar5;
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  if ((*(int *)PTR_DAT_02001bd8 < 6) || (DAT_01e050e5 == '\0')) {
    bVar4 = false;
  }
  else {
    if (DAT_01e050e8 == 0xffffffff) {
      DAT_01e050e8 = FUN_0044f100(L"comctl32.dll");
    }
    bVar4 = 0x5ffff < DAT_01e050e8;
  }
  if (bVar4) {
    uVar3 = FUN_00781840();
    cVar1 = FUN_00779360(uVar3);
    if (cVar1 != '\0') {
      uVar2 = FUN_0072d590(param_3);
      FUN_0072dd30(0,param_1,param_2,param_3,CONCAT44(uVar5,param_4),param_5,param_6,param_7,uVar2,0
                   ,0);
      return;
    }
  }
  uVar3 = FUN_0072d3f0(param_1,param_2,param_3);
  FUN_0072d4c0(uVar3,param_4,param_5,param_6,param_7);
  return;
}

