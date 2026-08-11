/* Ghidra address: 016fcc60 */
/* Ghidra symbol: FUN_016fcc60 */


void FUN_016fcc60(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5)

{
  uint uVar1;
  bool bVar2;
  undefined8 uVar3;
  uint uVar4;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  uVar3 = FUN_0065b870(*(undefined8 *)(param_1 + 0x6c8));
  thunk_FUN_041b2403(uVar3,0xd6,&local_20,(longlong)(*(int *)(param_1 + 0x83c) + -1));
  uVar3 = FUN_0065b870(*(undefined8 *)(param_1 + 0x6c8));
  thunk_FUN_041b2403(uVar3,0xd6,&local_28,
                     (longlong)(*(int *)(param_1 + 0x83c) + *(int *)(param_1 + 0x840) + -1));
  if (((param_4 < local_20) || (local_28 < param_4)) || (param_5 < local_1c)) {
    bVar2 = false;
  }
  else {
    uVar1 = *(uint *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x6c8) + 0xb8) + 0x18) +
                     0x28);
    uVar4 = (int)uVar1 >> 0x1f;
    bVar2 = param_5 <= (int)(local_24 + ((uVar1 ^ uVar4) - uVar4));
  }
  if (bVar2) {
    FUN_0064e140(*(undefined8 *)(param_1 + 0x6c8),0xffeb);
    *(undefined1 *)(param_1 + 0x838) = 1;
  }
  else {
    FUN_0064e140(*(undefined8 *)(param_1 + 0x6c8),0);
    *(undefined1 *)(param_1 + 0x838) = 0;
  }
  return;
}

