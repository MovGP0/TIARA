/* Ghidra address: 007e57a0 */
/* Ghidra symbol: FUN_007e57a0 */


void FUN_007e57a0(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_38 = *param_2;
  uStack_30 = param_2[1];
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  pcVar2 = (code *)FUN_00411550(uVar1,0xfffd);
  (*pcVar2)(uVar1,&local_38,param_3);
  return;
}

