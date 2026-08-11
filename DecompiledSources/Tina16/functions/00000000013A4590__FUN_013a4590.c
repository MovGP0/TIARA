/* Ghidra address: 013a4590 */
/* Ghidra symbol: FUN_013a4590 */


void FUN_013a4590(longlong param_1,char param_2)

{
  undefined8 uVar1;
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_20[0] = 0;
  local_10 = 0;
  if (param_2 == '\0') {
    FUN_00414b50(&local_10,L"[SetNonregularNetwork(0,0)]");
    FUN_0132bb80(*(undefined8 *)PTR_DAT_02002da0,L" t =  0",0);
    FUN_00414480(param_1 + 0x6e0);
  }
  else {
    FUN_00414b50(&local_10,L"[SetNonregularNetwork(0,1)]");
    uVar1 = FUN_00b89270();
    FUN_00b8e520(uVar1,local_20,0x146);
    FUN_013a4820(param_1,local_20[0]);
  }
  FUN_013a40d0(param_1,&local_10);
  FUN_00414480(local_20);
  FUN_00414480(&local_10);
  return;
}

