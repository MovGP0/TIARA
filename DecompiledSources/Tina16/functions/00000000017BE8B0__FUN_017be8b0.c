/* Ghidra address: 017be8b0 */
/* Ghidra symbol: FUN_017be8b0 */


void FUN_017be8b0(longlong *param_1,longlong *param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  FUN_017be0e0(param_1,param_2,&local_38,PTR_DAT_02004010[0x816],PTR_DAT_02004010[0x814],
               *PTR_DAT_020037e8,PTR_DAT_02004010[0x815],*PTR_DAT_02005310);
  (**(code **)(*param_2 + 0x30))(param_2,local_38,local_34,local_30,local_2c);
  if (*(char *)((longlong)param_1 + 0xaa) == '\0') {
    FUN_01cf09c0(param_1,param_2,param_3);
  }
  else {
    *(int *)((longlong)param_1 + 0x14) = (int)param_1[0x14];
    *(undefined4 *)(param_1 + 3) = *(undefined4 *)((longlong)param_1 + 0xa4);
    lVar1 = param_1[1];
    if ((char)lVar1 != '\0') {
      (**(code **)(*param_1 + 0xa8))(param_1,param_2);
    }
    *(undefined1 *)((longlong)param_1 + 0xb) = 1;
    if ((char)lVar1 != '\0') {
      (**(code **)(*param_1 + 0xa0))(param_1,param_2);
    }
  }
  return;
}

