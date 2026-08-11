/* Ghidra address: 00648420 */
/* Ghidra symbol: FUN_00648420 */


void FUN_00648420(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  *(undefined8 *)(DAT_01df5b20 + 0x468) = param_1;
  iVar1 = thunk_FUN_039bb6fb(param_1);
  if (iVar1 == 0) {
    thunk_FUN_03c9d277(param_1,0xfffffffc,*(undefined8 *)(DAT_01df5b20 + 0x470));
    uVar2 = thunk_FUN_04118143(param_1,0xfffffff0);
    if ((uVar2 & 0x40000000) != 0) {
      lVar3 = thunk_FUN_04118143(param_1,0xfffffff4);
      if (lVar3 == 0) {
        thunk_FUN_03c9d277(param_1,0xfffffff4,param_1);
      }
    }
  }
  else {
    thunk_FUN_03c9d277(param_1,0xfffffffc,*(undefined8 *)(DAT_01df5b20 + 0x470));
    uVar2 = thunk_FUN_04118143(param_1,0xfffffff0);
    if ((uVar2 & 0x40000000) != 0) {
      lVar3 = thunk_FUN_04118143(param_1,0xfffffff4);
      if (lVar3 == 0) {
        thunk_FUN_03c9d277(param_1,0xfffffff4,param_1);
      }
    }
  }
  thunk_FUN_03ea0151(param_1,DAT_020122da,DAT_01df5b20);
  thunk_FUN_03ea0151(param_1,DAT_020122d8,DAT_01df5b20);
  lVar3 = DAT_01df5b20;
  DAT_01df5b20 = 0;
  (**(code **)(lVar3 + 0x470))(param_1,param_2,param_3,param_4);
  return;
}

