/* Ghidra address: 006492b0 */
/* Ghidra symbol: FUN_006492b0 */


void FUN_006492b0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  code *pcVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x50);
  if (lVar1 != 0) {
    pcVar2 = (code *)FUN_00411550(lVar1,0xffdd);
    (*pcVar2)(lVar1,param_2,param_3,param_4);
  }
  return;
}

