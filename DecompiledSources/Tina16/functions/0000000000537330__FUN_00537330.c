/* Ghidra address: 00537330 */
/* Ghidra symbol: FUN_00537330 */


undefined8 FUN_00537330(undefined8 param_1,char *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  local_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  local_60 = param_1;
  if (*param_2 == '\r') {
    FUN_00537180(auStack_88,&local_58);
    FUN_00417c40(local_60,&local_58,&DAT_00527bf8);
  }
  else if (*param_2 == '\x11') {
    FUN_00536f60(auStack_88,&local_38);
    FUN_00417c40(local_60,&local_38,&DAT_00527bf8);
  }
  else {
    uVar1 = FUN_0044d490(&PTR_FUN_00433ec0,1,L"ArrayTypeInfo");
    FUN_004134c0(uVar1);
  }
  FUN_00417840(&local_58,&DAT_00527bf8,2);
  return local_60;
}

