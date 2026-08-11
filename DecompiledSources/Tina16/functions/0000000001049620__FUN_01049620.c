/* Ghidra address: 01049620 */
/* Ghidra symbol: FUN_01049620 */


void FUN_01049620(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  FUN_00f79100(param_1);
  FUN_0103efc0(param_1,0,0);
  FUN_00f78bb0(param_1);
  *(undefined4 *)(param_1 + 0x3c) = 0;
  FUN_00f79010();
  *(undefined4 *)(param_1 + 8) = 0;
  iVar1 = 0;
  do {
    *(undefined4 *)(param_1 + 0x44 + (longlong)iVar1 * 4) = 0xfffffffe;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 10);
  FUN_00450070(&local_38,*(undefined8 *)(param_1 + 0x8e8),&DAT_01049828,&DAT_0104983c,1);
  FUN_00416cd0(&local_48,4,*(undefined8 *)PTR_DAT_02005598,L"\\VHDL\\MCU\\Include\\i8051\\",local_38
               ,L".inc");
  FUN_00440a20(local_48,1);
  (**(code **)(**(longlong **)(param_1 + 0xa0) + 0xd8))(*(longlong **)(param_1 + 0xa0),local_48);
  FUN_00416ba0(&local_48,*(undefined8 *)PTR_DAT_02005598,
               L"\\VHDL\\MCU\\Include\\i8051\\I8051BITS.INC");
  (**(code **)(**(longlong **)(param_1 + 0xa8) + 0xd8))(*(longlong **)(param_1 + 0xa8),local_48);
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0xa8) + 0x28))(*(longlong **)(param_1 + 0xa8));
  iVar1 = iVar1 + -1;
  iVar2 = 1;
  if (0 < iVar1) {
    do {
      (**(code **)(**(longlong **)(param_1 + 0xa8) + 0x18))
                (*(longlong **)(param_1 + 0xa8),&local_40,iVar2);
      (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x78))(*(longlong **)(param_1 + 0xa0),local_40)
      ;
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414560(&local_48,3);
  FUN_004144d0(local_30);
  return;
}

