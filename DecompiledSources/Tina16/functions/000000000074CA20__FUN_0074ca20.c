/* Ghidra address: 0074ca20 */
/* Ghidra symbol: FUN_0074ca20 */


void FUN_0074ca20(longlong param_1,undefined2 param_2,undefined2 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  
  uVar1 = FUN_00650ea0(param_1,param_2,param_3,param_4,param_5);
  if (*(longlong *)(param_1 + 0x330) != 0) {
    if (*(byte *)(param_1 + 0x378) < 8) {
      bVar3 = ((int)CONCAT71((int7)((ulonglong)uVar1 >> 8),1) << (*(byte *)(param_1 + 0x378) & 0x1f)
              & 10U) != 0;
    }
    else {
      bVar3 = false;
    }
    if (bVar3) {
      FUN_0074ba60(param_1);
    }
    FUN_0074c580(param_1);
    pcVar2 = (code *)FUN_00411550(param_1,0xffc4);
    (*pcVar2)(param_1);
  }
  return;
}

