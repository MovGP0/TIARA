/* Ghidra address: 00d9d690 */
/* Ghidra symbol: FUN_00d9d690 */


void FUN_00d9d690(longlong param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 in_stack_ffffffffffffff78;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 local_40 [32];
  
  uVar2 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
  local_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  if ((*(uint *)(param_1 + 200) & 2) == 0) {
    FUN_00d83520(local_40,*(undefined8 *)(param_1 + 0xc0),param_3,param_4);
    uVar2 = FUN_0060f550(*(undefined4 *)(param_1 + 200));
    uVar2 = FUN_0060f500(uVar2);
    FUN_00d83080(&local_60,*(undefined8 *)(param_1 + 0xc0),*(undefined8 *)(param_1 + 0xb8),uVar2);
    (**(code **)(**(longlong **)(param_1 + 0x68) + 0x340))
              (*(longlong **)(param_1 + 0x68),param_2,
               *(undefined8 *)(*(longlong *)(param_1 + 0x60) + 8),local_40,&local_60,L"default");
  }
  else {
    uVar4 = 0;
    if (*(longlong *)(param_1 + 0xb8) != 0) {
      uVar4 = *(undefined4 *)(*(longlong *)(param_1 + 0xb8) + -4);
    }
    uVar3 = FUN_00416740(*(undefined8 *)(param_1 + 0xb8));
    uVar1 = FUN_0060f550(*(undefined4 *)(param_1 + 200));
    uVar1 = FUN_0060f500(uVar1);
    thunk_FUN_041a24be(*(undefined8 *)(param_1 + 0xa0),uVar3,uVar4,*(undefined8 *)(param_1 + 0xc0),
                       CONCAT44(uVar2,uVar1));
  }
  FUN_00417740(&local_60,&DAT_00d623c8);
  return;
}

