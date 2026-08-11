/* Ghidra address: 0196ea10 */
/* Ghidra symbol: FUN_0196ea10 */


void FUN_0196ea10(longlong param_1)

{
  longlong *plVar1;
  
  FUN_01950440(param_1);
  *(undefined1 *)(param_1 + 0x2b1) = 0;
  FUN_004b1e70(*(undefined8 *)(param_1 + 0x170));
  FUN_004b1e70(*(undefined8 *)(param_1 + 0x298));
  FUN_0196c550(*(undefined8 *)(param_1 + 0x1a8));
  FUN_0196c760(*(undefined8 *)(param_1 + 0x220));
  FUN_0196c8a0(*(undefined8 *)(param_1 + 0x228));
  FUN_0196cba0(*(undefined8 *)(param_1 + 0x240));
  FUN_004b1e70(*(undefined8 *)(param_1 + 0x278));
  *(undefined8 *)(param_1 + 0x160) = 0;
  FUN_00414480(param_1 + 0x168);
  *(undefined1 *)(param_1 + 0x180) = 0;
  FUN_0196f5b0(param_1,0);
  FUN_00414ad0(param_1 + 600,L"PascalScript");
  plVar1 = *(longlong **)(param_1 + 0x260);
  (**(code **)(*plVar1 + 0x90))(plVar1);
  (**(code **)(*plVar1 + 0x78))(plVar1,L"begin");
  (**(code **)(*plVar1 + 0x78))(plVar1,0);
  (**(code **)(*plVar1 + 0x78))(plVar1,L"end.");
  plVar1 = *(longlong **)(param_1 + 0x280);
  (**(code **)(*plVar1 + 0x90))(plVar1);
  (**(code **)(*plVar1 + 0x78))(plVar1,L"Date");
  (**(code **)(*plVar1 + 0x78))(plVar1,L"Time");
  (**(code **)(*plVar1 + 0x78))(plVar1,L"Page");
  (**(code **)(*plVar1 + 0x78))(plVar1,L"Page#");
  (**(code **)(*plVar1 + 0x78))(plVar1,L"TotalPages");
  (**(code **)(*plVar1 + 0x78))(plVar1,L"TotalPages#");
  (**(code **)(*plVar1 + 0x78))(plVar1,L"Line");
  (**(code **)(*plVar1 + 0x78))(plVar1,L"Line#");
  (**(code **)(*plVar1 + 0x78))(plVar1,L"CopyName#");
  (**(code **)(*plVar1 + 0x78))(plVar1,L"TableRow");
  (**(code **)(*plVar1 + 0x78))(plVar1,L"TableColumn");
  FUN_00414480(param_1 + 0x438);
  FUN_00414480(param_1 + 0x450);
  FUN_00414480(param_1 + 0x458);
  return;
}

