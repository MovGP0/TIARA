/* Ghidra address: 01a2b5d0 */
/* Ghidra symbol: FUN_01a2b5d0 */


void FUN_01a2b5d0(longlong param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  undefined8 local_40;
  longlong *local_38;
  undefined8 local_30;
  int local_24;
  
  local_50 = auStack_78;
  local_40 = 0;
  puVar1 = auStack_78;
  if (*(char *)(param_1 + 0x708) != '\x01') {
    FUN_01a2a060(&local_40,L"%s-json-wires-save.json");
    uVar2 = FUN_019a4600();
    FUN_01a2b2d0(param_1,uVar2,local_40,1);
    puVar1 = local_50;
  }
  local_50 = puVar1;
  if (*(longlong *)(param_1 + 0x710) == 0) {
    FUN_0072d440(L"Internal error: AR=Nil",1,4,0);
  }
  else {
    local_38 = *(longlong **)(*(longlong *)(param_1 + 0x710) + 8);
    iVar3 = (int)local_38[2];
    local_24 = 0;
    if (-1 < iVar3 + -1) {
      do {
        local_30 = FUN_004aeac0(local_38,local_24);
        uVar2 = FUN_019a4600();
        FUN_0198b6a0(uVar2,local_30);
        local_24 = local_24 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    uVar2 = FUN_019a4600();
    FUN_00b95360(uVar2);
    (**(code **)(*local_38 + 0x10))(local_38);
    *(undefined1 *)(param_1 + 0x708) = 1;
    FUN_01ca2aa0(*(undefined8 *)PTR_DAT_02004e40);
  }
  FUN_00414480(&local_40);
  return;
}

