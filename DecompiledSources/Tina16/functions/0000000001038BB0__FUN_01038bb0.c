/* Ghidra address: 01038bb0 */
/* Ghidra symbol: FUN_01038bb0 */


undefined4 FUN_01038bb0(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined4 local_4c4;
  undefined8 local_4c0 [2];
  undefined8 local_4b0 [90];
  undefined4 local_1e0;
  undefined4 local_1dc;
  
  local_4c0[0] = 0;
  puVar3 = local_4b0;
  for (lVar2 = 0x93; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *param_2;
    param_2 = param_2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_004179d0(local_4b0,&DAT_00f68330);
  FUN_0043e130(local_4c0,*(undefined8 *)(param_1 + 0x8e8));
  iVar1 = FUN_004170c0(L"ATTINY26",local_4c0[0],1);
  if (iVar1 == 0) {
    local_4c4 = local_1e0;
  }
  else {
    local_4c4 = local_1dc;
  }
  FUN_00414480(local_4c0);
  FUN_00417740(local_4b0,&DAT_00f68330);
  return local_4c4;
}

