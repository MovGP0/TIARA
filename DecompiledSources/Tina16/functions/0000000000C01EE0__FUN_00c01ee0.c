/* Ghidra address: 00c01ee0 */
/* Ghidra symbol: FUN_00c01ee0 */


void FUN_00c01ee0(longlong *param_1,uint param_2,undefined8 param_3)

{
  bool bVar1;
  
  if (param_2 < 0x10) {
    bVar1 = ((int)CONCAT62((int6)((ulonglong)param_3 >> 0x10),1) << ((byte)param_2 & 0x1f) & 0x3ffU)
            != 0;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) && (param_1[(longlong)(int)param_2 + 0xac] != 0)) {
    (**(code **)(*param_1 + 0x2d0))(param_1,param_1 + (longlong)(int)param_2 + 0xac);
    FUN_004aee50(param_1[0xbd],param_1[(longlong)(int)param_2 + 0xac],0);
    param_1[(longlong)(int)param_2 + 0xac] = 0;
  }
  return;
}

