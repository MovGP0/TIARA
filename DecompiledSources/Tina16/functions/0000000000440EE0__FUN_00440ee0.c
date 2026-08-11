/* Ghidra address: 00440ee0 */
/* Ghidra symbol: FUN_00440ee0 */


undefined4 FUN_00440ee0(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined2 local_res10;
  undefined2 uStackX_12;
  undefined1 local_28 [8];
  undefined1 local_20 [8];
  
  uStackX_12 = (undefined2)((uint)param_2 >> 0x10);
  local_res10 = (undefined2)param_2;
  iVar1 = thunk_FUN_041840d1(uStackX_12,local_res10,local_20);
  if (iVar1 == 0) {
    bVar3 = false;
  }
  else {
    iVar1 = thunk_FUN_04198d89(local_20,local_28);
    bVar3 = iVar1 != 0;
  }
  if ((bVar3) && (iVar1 = thunk_FUN_04198660(param_1,0,0,local_28), iVar1 != 0)) {
    return 0;
  }
  uVar2 = thunk_FUN_03ce33a6();
  return uVar2;
}

