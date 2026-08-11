/* Ghidra address: 00844ea0 */
/* Ghidra symbol: FUN_00844ea0 */


void FUN_00844ea0(longlong param_1,int param_2,int param_3,longlong param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined8 in_stack_ffffffffffffff88;
  undefined4 uVar7;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
  uVar6 = 2;
  if (*(char *)(param_1 + 0x524) == '\0') {
    uVar6 = 6;
  }
  if (param_3 == 0) {
    pcVar4 = (code *)FUN_00411550(param_1,0xffc5);
    cVar1 = (*pcVar4)(param_1);
    if (cVar1 == '\0') {
      FUN_004238d0(local_38,*(undefined4 *)(param_4 + 4),0,*(undefined4 *)(param_4 + 0xc),
                   CONCAT44(uVar7,*(undefined4 *)(param_4 + 0x44)));
    }
    else {
      iVar2 = FUN_0064d0b0(param_1);
      iVar3 = FUN_0064d0b0(param_1);
      FUN_004238d0(local_38,iVar2 - *(int *)(param_4 + 0xc),0,iVar3 - *(int *)(param_4 + 4),
                   CONCAT44(uVar7,*(undefined4 *)(param_4 + 0x44)));
      param_2 = -param_2;
    }
    uVar5 = FUN_0065b870(param_1);
    thunk_FUN_041d5f23(uVar5,param_2,0,local_38,local_38,0,0,uVar6);
  }
  else if (param_2 == 0) {
    FUN_004238d0(local_38,0,*(undefined4 *)(param_4 + 0x3c),*(undefined4 *)(param_4 + 0xc),
                 CONCAT44(uVar7,*(undefined4 *)(param_4 + 0x44)));
    uVar5 = FUN_0065b870(param_1);
    thunk_FUN_041d5f23(uVar5,0,param_3,local_38,local_38,0,0,uVar6);
  }
  else {
    FUN_004238d0(local_38,*(undefined4 *)(param_4 + 4),0,*(undefined4 *)(param_4 + 0xc),
                 CONCAT44(uVar7,*(undefined4 *)(param_4 + 0x3c)));
    uVar5 = FUN_0065b870(param_1);
    thunk_FUN_041d5f23(uVar5,param_2,0,local_38,local_38,0,0,uVar6);
    FUN_004238d0(local_38,0,*(undefined4 *)(param_4 + 0x3c),*(undefined4 *)(param_4 + 4),
                 *(undefined4 *)(param_4 + 0x44));
    uVar5 = FUN_0065b870(param_1);
    thunk_FUN_041d5f23(uVar5,0,param_3,local_38,local_38,0,0,uVar6);
    FUN_004238d0(local_38,*(undefined4 *)(param_4 + 4),*(undefined4 *)(param_4 + 0x3c),
                 *(undefined4 *)(param_4 + 0xc),*(undefined4 *)(param_4 + 0x44));
    uVar5 = FUN_0065b870(param_1);
    thunk_FUN_041d5f23(uVar5,param_2,param_3,local_38,local_38,0,0,uVar6);
  }
  if ((*(uint *)(param_1 + 0x4d4) & 0x1000) != 0) {
    FUN_008482c0(param_1,local_48);
    FUN_00844240(param_1,local_48);
  }
  return;
}

