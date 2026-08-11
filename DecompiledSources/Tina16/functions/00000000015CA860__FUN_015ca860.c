/* Ghidra address: 015ca860 */
/* Ghidra symbol: FUN_015ca860 */


void FUN_015ca860(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [40];
  undefined1 *local_10;
  
  local_10 = auStack_38;
  *(undefined8 *)(param_1 + 0x118) = 0;
  if (*(short *)(*(longlong *)(param_1 + 0x1f8) + 0x8b) == 0) {
    local_10 = auStack_38;
    uVar2 = FUN_00409570(*(undefined8 *)(param_1 + 0x110));
    *(undefined8 *)(param_1 + 0x120) = uVar2;
    FUN_00409a70(*(undefined8 *)(param_1 + 0x108),*(undefined8 *)(param_1 + 0x120),
                 *(undefined8 *)(param_1 + 0x110));
    *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_1 + 0x110);
  }
  else {
    *(ulonglong *)(param_1 + 0xf8) =
         *(longlong *)(param_1 + 0x110) + 0x10b + *(longlong *)(param_1 + 0x110) / 10 &
         0xffffffffffffff00;
    uVar2 = FUN_00409570(*(undefined8 *)(param_1 + 0xf8),*(longlong *)(param_1 + 0x110) % 10);
    *(undefined8 *)(param_1 + 0x120) = uVar2;
    *(undefined8 *)(param_1 + 0x15c) = *(undefined8 *)(param_1 + 0x108);
    *(undefined4 *)(param_1 + 0x164) = *(undefined4 *)(param_1 + 0x110);
    *(undefined8 *)(param_1 + 0x16c) = *(undefined8 *)(param_1 + 0x120);
    *(undefined4 *)(param_1 + 0x174) = *(undefined4 *)(param_1 + 0xf8);
    *(ulonglong *)(param_1 + 0xf0) = (ulonglong)*(uint *)(param_1 + 0x178);
    if (*(longlong *)(param_1 + 0x110) ==
        *(longlong *)(param_1 + 0x200) - *(longlong *)(param_1 + 0xe8)) {
      uVar1 = FUN_01596ad0(param_1 + 0x15c,4);
      FUN_015969b0(uVar1);
    }
    else {
      uVar1 = FUN_01596ad0(param_1 + 0x15c,2);
      FUN_015969b0(uVar1);
    }
    *(ulonglong *)(param_1 + 0x100) =
         (ulonglong)*(uint *)(param_1 + 0x178) - *(longlong *)(param_1 + 0xf0);
    if (*(longlong *)(param_1 + 0xe8) == 0) {
      *(undefined8 *)(param_1 + 0x118) = 2;
      *(longlong *)(param_1 + 0x100) = *(longlong *)(param_1 + 0x100) + -2;
    }
    else {
      *(undefined8 *)(param_1 + 0x118) = 0;
    }
  }
  return;
}

