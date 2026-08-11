/* Ghidra address: 00821ad0 */
/* Ghidra symbol: FUN_00821ad0 */


void FUN_00821ad0(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 *local_40;
  undefined4 local_30;
  int local_2c;
  
  local_40 = auStack_68;
  local_48 = 0;
  FUN_004b3260(param_2);
  lVar2 = *(longlong *)(param_1 + 0x4a0);
  *(short *)(lVar2 + 0x30) = (short)param_2[6];
  *(undefined2 *)(lVar2 + 0x2e) = *(undefined2 *)((longlong)param_2 + 0x2e);
  *(undefined2 *)(lVar2 + 0x2c) = *(undefined2 *)((longlong)param_2 + 0x2c);
  FUN_00414ad0(lVar2 + 0x18,param_2[3]);
  iVar1 = (**(code **)(*param_2 + 0x28))();
  local_2c = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(*param_2 + 0x18))(param_2,&local_48,local_2c);
      local_30 = (**(code **)(**(longlong **)(param_1 + 0x4a0) + 0x78))
                           (*(longlong **)(param_1 + 0x4a0),local_48);
      lVar2 = (**(code **)(*param_2 + 0x30))(param_2,local_2c);
      if (lVar2 != 0) {
        uVar3 = (**(code **)(*param_2 + 0x30))(param_2,local_2c);
        pcVar4 = (code *)FUN_00411550(param_1,0xffab);
        (*pcVar4)(param_1,local_30,uVar3);
      }
      local_2c = local_2c + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_004b3390(param_2);
  FUN_00414480(&local_48);
  return;
}

