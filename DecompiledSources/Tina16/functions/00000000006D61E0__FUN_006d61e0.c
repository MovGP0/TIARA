/* Ghidra address: 006d61e0 */
/* Ghidra symbol: FUN_006d61e0 */


void FUN_006d61e0(undefined8 param_1,uint param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  int local_40;
  int local_3c;
  int local_38;
  int local_30;
  int local_2c;
  
  uVar3 = FUN_0065b870();
  lVar4 = thunk_FUN_04114b41(uVar3,0,L"msctls_updown32",0);
  if (lVar4 != 0) {
    thunk_FUN_03abe598(lVar4,&local_40);
    if ((int)param_2 < 0) {
      local_30 = local_40 + 2;
    }
    else {
      local_30 = local_38 + -2;
    }
    local_2c = local_3c + 2;
    iVar5 = (param_2 ^ (int)param_2 >> 0x1f) - ((int)param_2 >> 0x1f);
    if (-1 < iVar5 + -1) {
      do {
        uVar2 = (undefined2)local_2c;
        uVar1 = (undefined2)local_30;
        thunk_FUN_041b2403(lVar4,0x201,0,CONCAT22((undefined2)local_2c,(undefined2)local_30));
        thunk_FUN_041b2403(lVar4,0x202,0,CONCAT22(uVar2,uVar1));
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  return;
}

