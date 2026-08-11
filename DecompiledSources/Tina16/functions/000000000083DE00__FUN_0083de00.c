/* Ghidra address: 0083de00 */
/* Ghidra symbol: FUN_0083de00 */


void FUN_0083de00(longlong param_1,undefined2 param_2,undefined4 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 local_20;
  
  local_20 = *param_4;
  uVar1 = *(undefined8 *)(param_1 + 0x508);
  pcVar2 = (code *)FUN_00411550(uVar1,0xffe2);
  (*pcVar2)(uVar1,param_2,param_3,&local_20);
  return;
}

