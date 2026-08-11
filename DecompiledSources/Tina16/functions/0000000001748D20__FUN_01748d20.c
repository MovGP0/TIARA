/* Ghidra address: 01748d20 */
/* Ghidra symbol: FUN_01748d20 */


void FUN_01748d20(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 local_38 [16];
  undefined4 local_28;
  undefined4 local_24;
  byte *local_20;
  
  FUN_01d04970(param_1[5],param_3,param_4,&local_24,&local_28,1);
  (**(code **)(*param_1 + 0x10))(param_1,local_38,param_2,*PTR_DAT_02002480,*PTR_DAT_02001560);
  FUN_00498310(local_24,local_28);
  iVar1 = thunk_FUN_03f16006(local_38);
  if (iVar1 != 0) {
    (**(code **)(*(longlong *)param_1[5] + 0x2d0))((longlong *)param_1[5],0,&local_20);
    *local_20 = (byte)((ulonglong)(*local_20 + 1) % 0x10);
    FUN_01748cc0(param_1);
  }
  return;
}

