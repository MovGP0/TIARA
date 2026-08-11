/* Ghidra address: 00842b00 */
/* Ghidra symbol: FUN_00842b00 */


void FUN_00842b00(longlong param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong *local_28;
  longlong *local_20;
  
  local_30 = auStack_58;
  local_28 = (longlong *)FUN_005fd250(&PTR_FUN_005f3290,1);
  local_20 = *(longlong **)(param_1 + 0x490);
  (**(code **)(*local_28 + 0x10))(local_28,local_20[0xf]);
  FUN_005fd670(local_20[0xf],2);
  FUN_005fd640(local_20[0xf],0xe);
  uVar3 = thunk_FUN_03f3ed25(1,*(undefined4 *)(param_1 + 0x2cc),0x60);
  FUN_005fd6d0(local_20[0xf],uVar3);
  if (*(char *)(param_1 + 0x550) == '\x02') {
    pcVar4 = (code *)FUN_00411550(param_1,0xffc5);
    cVar2 = (*pcVar4)(param_1);
    if (cVar2 == '\0') {
      (**(code **)(*local_20 + 200))(local_20,0,*(undefined4 *)(param_1 + 0x4f4));
      (**(code **)(*local_20 + 0xc0))
                (local_20,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_1 + 0x4f4));
    }
    else {
      iVar1 = *(int *)(param_2 + 0xc);
      (**(code **)(*local_20 + 200))(local_20,iVar1,*(undefined4 *)(param_1 + 0x4f4));
      (**(code **)(*local_20 + 0xc0))
                (local_20,iVar1 - *(int *)(param_2 + 8),*(undefined4 *)(param_1 + 0x4f4));
    }
  }
  else {
    (**(code **)(*local_20 + 200))(local_20,*(undefined4 *)(param_1 + 0x4f4),0);
    (**(code **)(*local_20 + 0xc0))
              (local_20,*(undefined4 *)(param_1 + 0x4f4),*(undefined4 *)(param_2 + 0x40));
  }
  FUN_005ff8a0(local_20,local_28);
  FUN_00410f20(local_28);
  return;
}

