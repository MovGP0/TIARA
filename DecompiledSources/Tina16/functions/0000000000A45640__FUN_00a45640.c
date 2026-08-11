/* Ghidra address: 00a45640 */
/* Ghidra symbol: FUN_00a45640 */


void FUN_00a45640(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  undefined1 local_40 [16];
  undefined8 local_30;
  undefined8 local_28;
  longlong *local_20;
  
  local_50 = auStack_78;
  local_20 = (longlong *)FUN_0060cbe0(&PTR_FUN_005fa0c8,1);
  (**(code **)(*local_20 + 0xc0))(local_20,*(undefined8 *)(param_1 + 0x88));
  uVar2 = FUN_0060ce20(local_20);
  iVar1 = thunk_FUN_03ea2ad7(uVar2,local_40);
  if (iVar1 != 0) {
    uVar2 = FUN_009ec850(&PTR_FUN_009eb620,1,*(char *)(param_1 + 0x90) != '\x02');
    *(undefined8 *)(param_1 + 0x60) = uVar2;
    FUN_0060b650(*(undefined8 *)(param_1 + 0x60),local_28);
    if (*(char *)(param_1 + 0x90) != '\x02') {
      uVar2 = FUN_009ec7c0(*(undefined8 *)(param_1 + 0x60));
      FUN_0060b650(uVar2,local_30);
      *(undefined1 *)(param_1 + 0x90) = 1;
    }
  }
  FUN_00410f20(local_20);
  return;
}

