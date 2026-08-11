/* Ghidra address: 01892830 */
/* Ghidra symbol: FUN_01892830 */


void FUN_01892830(longlong param_1,int param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  uint local_38;
  undefined1 local_28 [16];
  
  uVar2 = FUN_0065b870(param_1);
  uVar2 = thunk_FUN_0411fe47(uVar2);
  local_38 = *(int *)(param_1 + 0x9c) - 1;
  thunk_FUN_0415f13b(local_28,(*(int *)(param_1 + 0x98) - *(int *)(param_1 + 0x588)) + -3,1,
                     *(int *)(param_1 + 0x98) + -1);
  if (param_2 == 0) {
    FUN_01892700(auStack_58,uVar2,local_28,0xff00000f);
    uVar3 = thunk_FUN_0412b593(5);
    FUN_00429590(uVar2,local_28,uVar3);
    FUN_01892770(auStack_58,uVar2,0xff000005);
    local_38 = local_38 & 0xffffff00;
    FUN_0180e220(*(undefined8 *)(param_1 + 0x490),local_28,0xff000012,1);
  }
  if (param_2 == 1) {
    uVar1 = FUN_018910f0(0xff00000d,0xff000005,0x1e);
    FUN_01892700(auStack_58,uVar2,local_28,uVar1);
    FUN_01892770(auStack_58,uVar2,0xff00000d);
    local_38 = local_38 & 0xffffff00;
    FUN_0180e220(*(undefined8 *)(param_1 + 0x490),local_28,0xff000012,1);
  }
  if (param_2 == 2) {
    uVar1 = FUN_018910f0(0xff00000d,0xff000005,0x32);
    FUN_01892700(auStack_58,uVar2,local_28,uVar1);
    FUN_01892770(auStack_58,uVar2,0xff00000d);
    local_38 = local_38 & 0xffffff00;
    FUN_0180e220(*(undefined8 *)(param_1 + 0x490),local_28,0xff000009,1);
  }
  uVar3 = FUN_0065b870(param_1);
  thunk_FUN_041a9b5c(uVar3,uVar2);
  return;
}

