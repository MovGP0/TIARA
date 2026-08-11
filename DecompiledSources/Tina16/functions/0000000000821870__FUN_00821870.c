/* Ghidra address: 00821870 */
/* Ghidra symbol: FUN_00821870 */


void FUN_00821870(longlong param_1,undefined4 param_2)

{
  char cVar1;
  code *pcVar2;
  undefined8 uVar3;
  int local_28 [2];
  int local_20;
  
  cVar1 = FUN_008222b0(param_1,param_2);
  if (cVar1 == '\0') {
    FUN_0068c2d0(param_1,local_28,param_2);
    pcVar2 = (code *)FUN_00411550(param_1,0xffc5);
    cVar1 = (*pcVar2)(param_1);
    if (cVar1 == '\0') {
      local_20 = FUN_00820730(param_1);
      local_20 = local_28[0] + local_20;
    }
    else {
      local_28[0] = FUN_00820730(param_1);
      local_28[0] = local_20 - local_28[0];
    }
    uVar3 = FUN_0065b870(param_1);
    thunk_FUN_03a2fc9d(uVar3,local_28,-(uint)((*(uint *)(param_1 + 0xa0) & 0x40) == 0));
    uVar3 = FUN_0065b870(param_1);
    thunk_FUN_0415faac(uVar3);
  }
  return;
}

