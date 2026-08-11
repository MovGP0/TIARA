/* Ghidra address: 01220d20 */
/* Ghidra symbol: FUN_01220d20 */


void FUN_01220d20(longlong *param_1)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_30 = 0;
  local_38 = 0;
  local_20[0] = 0;
  local_28 = 0;
  *(undefined4 *)PTR_DAT_02004708 = 0x1644;
  FUN_00805990(*(undefined8 *)PTR_DAT_02003af0);
  FUN_00805990(*(undefined8 *)PTR_DAT_02001d60);
  FUN_00805990(*(undefined8 *)PTR_DAT_02001d58);
  FUN_00805990(*(undefined8 *)PTR_DAT_02004ae8);
  FUN_00805990(*(undefined8 *)PTR_DAT_020040c0);
  FUN_00805990(*(undefined8 *)PTR_DAT_020048c8);
  FUN_00805990(*(undefined8 *)PTR_DAT_02001900);
  *PTR_DAT_02001a98 = 0;
  FUN_00414ad0(param_1[0xd6] + 0xe0,L"All files|*.*|Tina TLC files|*.TLC");
  FUN_00724380(param_1[0xd6],L"Noname.TLC");
  FUN_00724420(param_1[0xd6],*(undefined8 *)PTR_DAT_020030c8);
  FUN_00724270(param_1[0xd6],&local_28);
  FUN_00416cd0(local_20,3,*(undefined8 *)PTR_DAT_020030c8,&DAT_01220ffc,local_28);
  (**(code **)(**(longlong **)(param_1[0xd7] + 0x4d8) + 0x100))
            (*(longlong **)(param_1[0xd7] + 0x4d8),local_20[0]);
  *PTR_DAT_020028e0 = 1;
  FUN_00724270(param_1[0xd6],&local_38);
  FUN_00416cd0(&local_30,3,*(undefined8 *)PTR_DAT_020030c8,&DAT_01220ffc,local_38);
  FUN_01c830b0(*(undefined8 *)PTR_DAT_02004e40,local_30);
  *PTR_DAT_020028e0 = 0;
  (**(code **)(*param_1 + 0x188))(param_1);
  FUN_011d4970(param_1,DAT_02107678);
  FUN_00805990(param_1);
  FUN_00414480(&local_38);
  FUN_00414480(&local_30);
  FUN_00414480(&local_28);
  FUN_00414480(local_20);
  return;
}

