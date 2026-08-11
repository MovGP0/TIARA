/* Ghidra address: 00d80990 */
/* Ghidra symbol: FUN_00d80990 */


undefined8 *
FUN_00d80990(longlong *param_1,undefined8 *param_2,undefined1 param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 local_60 [8];
  
  puVar2 = local_60;
  for (lVar1 = 7; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_4;
    param_4 = param_4 + 1;
    puVar2 = puVar2 + 1;
  }
  FUN_004179d0(local_60,&DAT_00d627e8);
  *param_2 = DAT_01ecf394;
  param_2[1] = DAT_01ecf39c;
  (**(code **)(*param_1 + 0x98))(param_1,param_2,param_3,local_60,L"default");
  *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)param_2 + 4);
  *(undefined4 *)((longlong)param_2 + 4) = 3;
  FUN_00417740(local_60,&DAT_00d627e8);
  return param_2;
}

