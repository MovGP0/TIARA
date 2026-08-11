/* Ghidra address: 00d85120 */
/* Ghidra symbol: FUN_00d85120 */


undefined8 *
FUN_00d85120(longlong param_1,undefined8 *param_2,uint param_3,undefined8 param_4,undefined8 param_5
            )

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  
  *param_2 = DAT_01ecf394;
  param_2[1] = DAT_01ecf39c;
  lVar3 = 0;
  lVar4 = 0;
  iVar1 = FUN_00416db0(param_5,L"default");
  if (iVar1 != 0) {
    lVar3 = FUN_00d74650(*(undefined8 *)(param_1 + 0x48),param_5);
    if (lVar3 != 0) {
      lVar4 = FUN_00d77580(lVar3,0xd);
    }
  }
  if ((lVar3 == 0) || (lVar4 == 0)) {
    uVar2 = param_3 & 0xff;
    if (uVar2 < 3) {
      if (uVar2 == 2) {
        lVar3 = **(longlong **)(param_1 + 0x58);
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 8);
      }
      else if (uVar2 == 0) {
        lVar3 = **(longlong **)(param_1 + 0x58);
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 8);
      }
      else if (uVar2 == 1) {
        lVar3 = **(longlong **)(param_1 + 0x58);
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 8);
      }
    }
    else if (uVar2 == 4) {
      lVar3 = **(longlong **)(param_1 + 0x58);
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 8);
    }
    else if (uVar2 == 6) {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0xf0);
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0xf8);
    }
  }
  if ((lVar4 == 0) || (lVar3 == 0)) {
    FUN_00d80950(param_1,param_2,param_3,param_4,param_5);
  }
  else {
    FUN_00d77b90(lVar3,param_4);
    iVar1 = FUN_00416db0(param_5,L"default");
    if (iVar1 != 0) {
      FUN_00d76870(lVar3);
    }
    FUN_00d77cb0(lVar4,param_2);
  }
  return param_2;
}

