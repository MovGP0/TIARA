/* Ghidra address: 01b4ef70 */
/* Ghidra symbol: FUN_01b4ef70 */


void FUN_01b4ef70(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_1308 [32];
  wchar_t *local_12e8;
  undefined8 local_12d0;
  undefined8 local_12c8;
  undefined8 local_12c0 [293];
  undefined8 local_994;
  undefined8 local_988 [208];
  undefined1 local_308;
  longlong local_5c;
  undefined1 *local_50;
  undefined8 local_30;
  undefined8 local_28;
  undefined2 local_1a;
  
  local_308 = 0;
  local_1308[0] = 0;
  local_12d0 = 0;
  local_12c8 = 0;
  puVar3 = local_12c0;
  for (lVar2 = 0x127; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  puVar3 = local_988;
  for (lVar2 = 0x127; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_28 = 0;
  local_30 = 0;
  local_1a = *(undefined2 *)(PTR_DAT_02004830 + 0x17a);
  *(undefined2 *)(PTR_DAT_02004830 + 0x17a) = 0x2e;
  local_50 = local_1308;
  FUN_01b4c570(param_1);
  FUN_00414480(param_1 + 0x30);
  (**(code **)(**(longlong **)(param_1 + 8) + 0x10))
            (*(longlong **)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  local_12e8 = L"output-temp.dat.HB.FD.prn";
  FUN_00416cd0(&local_30,3,*(undefined8 *)(param_1 + 0x20),&DAT_01b4f2d4);
  cVar1 = FUN_00440a20(local_30,1);
  if (cVar1 != '\0') {
    FUN_004412f0(local_30);
  }
  while( true ) {
    cVar1 = FUN_01b4e8f0(param_1,&DAT_01b4f324);
    if (cVar1 == '\0') break;
    FUN_01b4e860(param_1,&DAT_01b4f324);
  }
  FUN_01b4e860(param_1,L"TINA Netlist Editor format");
  FUN_01b4ef40(param_1,local_988);
  if (local_5c != 0) {
    FUN_01b4ef40(param_1,local_12c0);
    FUN_00414b50(&local_28,local_994);
    FUN_01b4e7b0(param_1,L".OPTIONS",local_28);
  }
  FUN_00441640(&local_12c8,*(undefined8 *)(param_1 + 0x40));
  FUN_00416ba0(&local_30,local_12c8,L"circuit.cir");
  (**(code **)(**(longlong **)(param_1 + 8) + 0x100))(*(longlong **)(param_1 + 8),local_30);
  FUN_01b4c1d0(local_30,L"xyce",L"simulator");
  FUN_01b4c9a0(param_1,local_30,1);
  if (*(char *)(param_1 + 0x147d) == '\0') {
    local_12e8 = L"output-temp.dat.prn";
    FUN_00416cd0(&local_12d0,3,*(undefined8 *)(param_1 + 0x20),&DAT_01b4f2d4);
    FUN_01b4dc60(param_1,local_12d0);
    *(undefined2 *)(PTR_DAT_02004830 + 0x17a) = local_1a;
  }
  else {
    FUN_01b4f260(0,local_50);
  }
  FUN_00414560(&local_12d0,2);
  FUN_00417840(local_12c0,&DAT_01d0d0b8,2);
  FUN_00414560(&local_30,2);
  return;
}

