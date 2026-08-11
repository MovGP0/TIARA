/* Ghidra address: 0157ecf0 */
/* Ghidra symbol: FUN_0157ecf0 */


void FUN_0157ecf0(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  bool bVar2;
  
  bVar2 = (*(ushort *)(param_4 + 4) & 1) == 1;
  if (DAT_0210ee80 == (code *)0x0) {
    lVar1 = param_2;
    if (DAT_0210ee90 != (longlong *)0x0) {
      lVar1 = (**(code **)(*DAT_0210ee90 + 0x18))(DAT_0210ee90,param_2,param_3,param_4,bVar2);
    }
  }
  else {
    lVar1 = (*DAT_0210ee80)(DAT_0210ee88,param_2,param_3,param_4,bVar2);
  }
  FUN_00628c80(&PTR_FUN_00627390,1,lVar1,0xfffffff1,lVar1 != param_2);
  return;
}

