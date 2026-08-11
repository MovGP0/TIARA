/* Ghidra address: 00faded0 */
/* Ghidra symbol: FUN_00faded0 */


void FUN_00faded0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_38 = 0;
  local_30 = 0;
  local_20[0] = 0;
  local_28 = 0;
  FUN_00450070(local_20,*(undefined8 *)(param_1 + 0xca8),&DAT_00fae228,&DAT_00fae23c,1);
  if (*(int *)(param_1 + 0xca0) == 8) {
    FUN_00416cd0(&local_28,4,*(undefined8 *)PTR_DAT_02005598,L"\\VHDL\\MCU\\Include\\PIC18\\",
                 local_20[0],L".inc");
  }
  else {
    FUN_00416cd0(&local_28,4,*(undefined8 *)PTR_DAT_02005598,L"\\VHDL\\MCU\\Include\\",local_20[0],
                 L".inc");
  }
  FUN_00440a20(local_28,1);
  plVar2 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  *(longlong **)(param_1 + 0x740) = plVar2;
  (**(code **)(*plVar2 + 0xd8))(plVar2,local_28);
  (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x268))
            (*(longlong **)(param_1 + 0x6b0),*(undefined4 *)(param_1 + 0xa68));
  (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0x268))
            (*(longlong **)(param_1 + 0x6e8),*(undefined4 *)(param_1 + 0xa6c));
  *(undefined8 *)(param_1 + 0x7e8) = *(undefined8 *)(param_1 + 0xa60);
  (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x268))
            (*(longlong **)(param_1 + 0x6b0),*(undefined4 *)(param_1 + 0xa68));
  (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0x268))
            (*(longlong **)(param_1 + 0x6e8),*(undefined4 *)(param_1 + 0xa6c));
  (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x268))
            (*(longlong **)(param_1 + 0x6e0),*(undefined4 *)(param_1 + 0xa70));
  *(undefined4 *)(param_1 + 0x7f4) = *(undefined4 *)(param_1 + 0xa74);
  *(undefined4 *)(param_1 + 0x7f0) = *(undefined4 *)(param_1 + 0xa78);
  FUN_004169a0(&local_30,param_1 + 0xa9d);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x728),local_30);
  FUN_004169a0(&local_38,param_1 + 0xa88);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x730),local_38);
  *(uint *)(param_1 + 0x7fc) = (*(uint *)(param_1 + 0xa84) & 8) * 8;
  *(uint *)(param_1 + 0x7f8) = (*(uint *)(param_1 + 0xa7c) & 4) >> 2;
  FUN_00fae6c0(param_1,param_2);
  cVar1 = *(char *)(param_1 + 0x801);
  if (cVar1 == '\x06') {
    FUN_0064de00(DAT_0202efa0,L"PIC UART Receiver");
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6b0),0);
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x728),0);
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6f0),0);
  }
  if (cVar1 == '\a') {
    FUN_0064de00(DAT_0202efa0,L"PIC UART Transmitter");
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6e8),0);
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x730),0);
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6f8),0);
  }
  FUN_00414560(&local_38,4);
  return;
}

