/* Ghidra address: 007d8690 */
/* Ghidra symbol: FUN_007d8690 */


void FUN_007d8690(longlong param_1,longlong *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined8 local_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  undefined2 local_a;
  
  local_40 = auStack_68;
  puVar1 = auStack_68;
  if (DAT_020125b4 == 0) {
    DAT_020125b4 = FUN_0044f100(L"comctl32.dll");
    puVar1 = local_40;
    if (0x5ffff < DAT_020125b4) {
      local_20 = FUN_00427be0(L"comctl32.dll");
      puVar1 = local_40;
      if (local_20 != 0) {
        DAT_020125b8 = (code *)FUN_00427c10(local_20,L"ImageList_WriteEx");
        puVar1 = local_40;
      }
    }
  }
  local_40 = puVar1;
  local_18 = FUN_004d4fa0(&PTR_FUN_0047dd60,1,param_2,0);
  local_28 = FUN_004b6da0(param_2);
  if (DAT_020125b8 == (code *)0x0) {
    uVar3 = FUN_007d56e0(param_1);
    if (local_18 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = local_18 + 0x28;
    }
    iVar2 = thunk_FUN_041ad30d(uVar3,lVar4);
    if (iVar2 == 0) {
      uVar3 = FUN_0044d710(&PTR_FUN_00471da0,1,PTR_PTR_02002c50);
      FUN_004134c0(uVar3);
    }
  }
  else {
    uVar3 = FUN_007d56e0(param_1);
    if (local_18 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = local_18 + 0x28;
    }
    iVar2 = (*DAT_020125b8)(uVar3,1,lVar4);
    if (iVar2 != 0) {
      uVar3 = FUN_0044d710(&PTR_FUN_00471da0,1,PTR_PTR_02002c50);
      FUN_004134c0(uVar3);
    }
  }
  local_30 = FUN_004b6da0(param_2);
  FUN_004b6dc0(param_2,local_28);
  (**(code **)(*param_2 + 0x18))(param_2,&local_a,2);
  if (((char)local_a == 'I') && (local_a._1_1_ == 'L')) {
    FUN_004b6dc0(param_2,local_28 + 8);
    local_a = *(undefined2 *)(param_1 + 0x98);
    (**(code **)(*param_2 + 0x20))(param_2,&local_a,2);
  }
  FUN_004b6dc0(param_2,local_30);
  FUN_00410f20(local_18);
  return;
}

