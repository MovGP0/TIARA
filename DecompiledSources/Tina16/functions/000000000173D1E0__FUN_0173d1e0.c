/* Ghidra address: 0173d1e0 */
/* Ghidra symbol: FUN_0173d1e0 */


void FUN_0173d1e0(longlong *param_1,longlong param_2)

{
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  undefined1 local_30 [4];
  undefined1 local_2c [12];
  
  if ((param_2 != 0) && (*(char *)(param_2 + 0x12d) == '\0')) {
    (**(code **)(*param_1 + 8))(param_1,&local_48,param_2,*PTR_DAT_02002480,*PTR_DAT_02001560);
    FUN_01d048c0(param_1[5],local_48,local_44,local_2c,local_30,1,1);
    FUN_01d048c0(param_1[5],local_40,local_3c,local_34,local_38,1,1);
    *(undefined1 *)((longlong)param_1 + 9) = 1;
    FUN_0173d100(param_1,param_2,*PTR_DAT_02002480,*PTR_DAT_02001560);
    *(undefined1 *)((longlong)param_1 + 9) = 0;
  }
  return;
}

