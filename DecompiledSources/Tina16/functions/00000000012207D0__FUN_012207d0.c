/* Ghidra address: 012207d0 */
/* Ghidra symbol: FUN_012207d0 */


void FUN_012207d0(longlong *param_1)

{
  char cVar1;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  *(undefined4 *)PTR_DAT_02004708 = 0x15e0;
  FUN_00805990(*(undefined8 *)PTR_DAT_02003af0);
  FUN_00805990(*(undefined8 *)PTR_DAT_02001d60);
  FUN_00805990(*(undefined8 *)PTR_DAT_02001d58);
  FUN_00805990(*(undefined8 *)PTR_DAT_02004ae8);
  FUN_00805990(*(undefined8 *)PTR_DAT_020040c0);
  FUN_00805990(*(undefined8 *)PTR_DAT_020048c8);
  FUN_00805990(*(undefined8 *)PTR_DAT_02001900);
  FUN_00414ad0(param_1[0xd6] + 0xe0,L"All files|*.*|Tina TLC files|*.TLC");
  FUN_00724380(param_1[0xd6],L"noname.TLC");
  FUN_00724420(param_1[0xd6],*(undefined8 *)PTR_DAT_02005010);
  cVar1 = (**(code **)(*(longlong *)param_1[0xd6] + 0xa8))((longlong *)param_1[0xd6]);
  if (cVar1 != '\0') {
    FUN_00724270(param_1[0xd6],local_20);
    (**(code **)(**(longlong **)(param_1[0xd7] + 0x4d8) + 0x100))
              (*(longlong **)(param_1[0xd7] + 0x4d8),local_20[0]);
    (**(code **)(*param_1 + 0x188))(param_1);
    FUN_011d4970(param_1,DAT_02107678);
  }
  FUN_00414480(local_20);
  return;
}

