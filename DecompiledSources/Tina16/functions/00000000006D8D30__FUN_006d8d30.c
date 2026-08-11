/* Ghidra address: 006d8d30 */
/* Ghidra symbol: FUN_006d8d30 */


void FUN_006d8d30(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  
  pcVar3 = (code *)FUN_00411550(param_1,0xffc5);
  uVar2 = (*pcVar3)(param_1);
  FUN_006d8ca0(param_1,param_1 + 0x4a0,0,uVar2);
  cVar1 = FUN_0065be20(param_1);
  if (cVar1 != '\0') {
    uVar4 = FUN_0065b870(param_1);
    uVar5 = FUN_0064e930(param_1);
    FUN_00470120(uVar4,0x40b,(longlong)(int)(*(uint *)(&DAT_01dfdc28 + (uVar5 & 0xff) * 4) | 0xff),
                 *(undefined8 *)(param_1 + 0x4a0));
  }
  return;
}

