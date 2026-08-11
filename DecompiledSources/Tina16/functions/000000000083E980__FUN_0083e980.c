/* Ghidra address: 0083e980 */
/* Ghidra symbol: FUN_0083e980 */


void FUN_0083e980(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined8 local_28;
  undefined8 local_20;
  
  local_28 = 0;
  local_20 = 0;
  FUN_00835220(param_1,0);
  lVar1 = *(longlong *)(param_1 + 0x508);
  pcVar4 = (code *)FUN_00411550(lVar1,0xffa4);
  (*pcVar4)(lVar1,&local_20,*(undefined4 *)(lVar1 + 0x4a8),*(undefined4 *)(lVar1 + 0x4ac));
  FUN_00835710(param_1,local_20);
  lVar1 = *(longlong *)(param_1 + 0x508);
  pcVar4 = (code *)FUN_00411550(lVar1,0xffa7);
  (*pcVar4)(lVar1,&local_28,*(undefined4 *)(lVar1 + 0x4a8),*(undefined4 *)(lVar1 + 0x4ac));
  FUN_00835220(param_1,local_28);
  uVar2 = *(undefined8 *)(param_1 + 0x508);
  pcVar4 = (code *)FUN_00411550(uVar2,0xffa5);
  uVar3 = (*pcVar4)(uVar2);
  FUN_00835820(param_1,uVar3);
  FUN_00414560(&local_28,2);
  return;
}

