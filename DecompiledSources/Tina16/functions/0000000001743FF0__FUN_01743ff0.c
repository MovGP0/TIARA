/* Ghidra address: 01743ff0 */
/* Ghidra symbol: FUN_01743ff0 */


void FUN_01743ff0(longlong *param_1,longlong *param_2)

{
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c [3];
  
  FUN_0173d340(param_1,param_2);
  if (((param_2 != (longlong *)0x0) && (*(char *)((longlong)param_1 + 0xb) != '\0')) &&
     (*PTR_DAT_02001560 == '\0')) {
    (**(code **)(*param_1 + 8))(param_1,&local_48,param_2,*PTR_DAT_02002480,*PTR_DAT_02001560);
    FUN_01d048c0(param_1[5],local_48,local_44,local_2c,&local_30,1,1);
    FUN_01d048c0(param_1[5],local_40,local_3c,&local_34,&local_38,1,1);
    (**(code **)(*param_2 + 0x30))(param_2,local_2c[0],local_30,local_34,local_38);
  }
  return;
}

