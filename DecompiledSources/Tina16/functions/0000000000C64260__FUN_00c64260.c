/* Ghidra address: 00c64260 */
/* Ghidra symbol: FUN_00c64260 */


void FUN_00c64260(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  thunk_FUN_03e49910(param_1,&local_38);
  cVar2 = *(char *)(param_2 + 0x50);
  if (cVar2 == '\x01') {
    FUN_00c64190(param_1);
  }
  else if (cVar2 == '\x02') {
    if (*(longlong *)(*(longlong *)PTR_DAT_02004030 + 0xa8) == 0) {
      FUN_00c64190(param_1);
    }
    else {
      uVar3 = FUN_0065b870(*(longlong *)(*(longlong *)PTR_DAT_02004030 + 0xa8));
      thunk_FUN_03e49910(uVar3,&local_48);
      thunk_FUN_041cc6e2(param_1,0,
                         local_38 - ((local_30 + local_38) / 2 - (local_40 + local_48) / 2),
                         local_34 - ((local_2c + local_34) / 2 - (local_3c + local_44) / 2),0,0,0x1d
                        );
    }
  }
  else if (cVar2 == '\x03') {
    cVar2 = FUN_00411580(**(undefined8 **)(*(longlong *)(param_2 + 0xa0) + 8),&PTR_FUN_007ee548);
    if (cVar2 == '\0') {
      if (*(longlong *)(*(longlong *)PTR_DAT_02004030 + 0xa8) == 0) {
        FUN_00c64190(param_1);
      }
      else {
        uVar3 = FUN_0065b870(*(longlong *)(*(longlong *)PTR_DAT_02004030 + 0xa8));
        thunk_FUN_03e49910(uVar3,&local_48);
        thunk_FUN_041cc6e2(param_1,0,
                           local_38 - ((local_30 + local_38) / 2 - (local_40 + local_48) / 2),
                           local_34 - ((local_2c + local_34) / 2 - (local_3c + local_44) / 2),0,0,
                           0x1d);
      }
    }
    else {
      uVar3 = FUN_0065b870(*(undefined8 *)(*(longlong *)(param_2 + 0xa0) + 8));
      thunk_FUN_03e49910(uVar3,&local_48);
      thunk_FUN_041cc6e2(param_1,0,
                         local_38 - ((local_30 + local_38) / 2 - (local_40 + local_48) / 2),
                         local_34 - ((local_2c + local_34) / 2 - (local_3c + local_44) / 2),0,0,0x1d
                        );
    }
  }
  else if (cVar2 == '\x04') {
    lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x58) + 0x10);
    if (lVar1 == 0) {
      if (*(longlong *)(*(longlong *)PTR_DAT_02004030 + 0xa8) == 0) {
        FUN_00c64190(param_1);
      }
      else {
        uVar3 = FUN_0065b870(*(longlong *)(*(longlong *)PTR_DAT_02004030 + 0xa8));
        thunk_FUN_03e49910(uVar3,&local_48);
        thunk_FUN_041cc6e2(param_1,0,
                           local_38 - ((local_30 + local_38) / 2 - (local_40 + local_48) / 2),
                           local_34 - ((local_2c + local_34) / 2 - (local_3c + local_44) / 2),0,0,
                           0x1d);
      }
    }
    else {
      uVar3 = FUN_0065b870(lVar1);
      thunk_FUN_03e49910(uVar3,&local_48);
      thunk_FUN_041cc6e2(param_1,0,
                         local_38 - ((local_30 + local_38) / 2 - (local_40 + local_48) / 2),
                         local_34 - ((local_2c + local_34) / 2 - (local_3c + local_44) / 2),0,0,0x1d
                        );
    }
  }
  else if (cVar2 == '\x05') {
    thunk_FUN_041cc6e2(param_1,0,*(undefined4 *)(*(longlong *)(param_2 + 0x58) + 0x24),
                       *(undefined4 *)(*(longlong *)(param_2 + 0x58) + 0x28),0,0,0x1d);
  }
  thunk_FUN_03e49910(param_1,&local_48);
  thunk_FUN_041cc6e2(param_1,0,local_48 + *(int *)(*(longlong *)(param_2 + 0x58) + 0xc),
                     local_44 + *(int *)(*(longlong *)(param_2 + 0x58) + 8),0,0,0x1d);
  if (*(char *)(*(longlong *)(param_2 + 0x58) + 0x20) != '\0') {
    thunk_FUN_03e49910(param_1,&local_48);
    FUN_00c64110(&local_48);
    thunk_FUN_041cc6e2(param_1,0,local_48,local_44,0,0,0x1d);
  }
  return;
}

