/* Ghidra address: 009734b0 */
/* Ghidra symbol: FUN_009734b0 */


void FUN_009734b0(undefined8 param_1,longlong *param_2,uint param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  bool bVar2;
  
  if (param_2 == (longlong *)0x0) {
    if ((byte)param_3 < 0xa0) {
      bVar2 = ((byte)(&DAT_01e32918)[(longlong)(int)(param_3 & 0xff) >> 3] >> (param_3 & 7) & 1) !=
              0;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      uVar1 = FUN_0044d490(&PTR_FUN_00901a10,1,L"Signal Processing Exception");
      FUN_004134c0(uVar1);
    }
  }
  else {
    (**(code **)(*param_2 + 0x90))(param_2,param_3,param_4,param_5,param_6);
  }
  return;
}

