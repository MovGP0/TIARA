/* Ghidra address: 00649740 */
/* Ghidra symbol: FUN_00649740 */


void FUN_00649740(longlong param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  pcVar2 = (code *)FUN_00411550(uVar1,0xffdb);
  (*pcVar2)(uVar1,param_1);
  return;
}

