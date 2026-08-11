/* Ghidra address: 00708200 */
/* Ghidra symbol: FUN_00708200 */


void FUN_00708200(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 local_28;
  longlong *local_20;
  
  if (param_1[9] == 0) {
    uVar1 = FUN_00786090(param_1);
    lVar2 = thunk_FUN_04114b41(uVar1,0,L"msctls_updown32",0);
    param_1[9] = lVar2;
    if (param_1[9] != 0) {
      local_28 = *(undefined8 *)(*param_1 + 0x98);
      local_20 = param_1;
      lVar2 = FUN_004d6210(&local_28);
      param_1[10] = lVar2;
      lVar2 = thunk_FUN_04118143(param_1[9],0xfffffffc);
      param_1[0xb] = lVar2;
      thunk_FUN_03c9d277(param_1[9],0xfffffffc,param_1[10]);
    }
  }
  return;
}

