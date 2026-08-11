/* Ghidra address: 00a29300 */
/* Ghidra symbol: FUN_00a29300 */


longlong * FUN_00a29300(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = 0;
  local_18 = param_2;
  FUN_00a290e0(param_1,param_2);
  iVar1 = FUN_004170c0(&DAT_00a29434,*param_1,1);
  if (iVar1 != 0) {
    FUN_0043e1a0(&local_10,*param_1);
    iVar1 = FUN_004170c0(L"file:/",local_10,1);
    if (0 < iVar1) {
      iVar2 = 0;
      if (*param_1 != 0) {
        iVar2 = *(int *)(*param_1 + -4);
      }
      if ((iVar2 < 7) || (*(short *)(*param_1 + 0xc) != 0x2f)) {
        uVar3 = 6;
      }
      else if ((iVar2 < 8) || (*(short *)(*param_1 + 0xe) != 0x2f)) {
        uVar3 = 7;
      }
      else {
        uVar3 = 8;
      }
      FUN_00416e20(param_1,iVar1,uVar3);
    }
    FUN_00a29220(auStack_38,0x7c,0x3a);
    FUN_00a29220(auStack_38,0x2f,0x5c);
  }
  FUN_00414480(&local_10);
  return param_1;
}

