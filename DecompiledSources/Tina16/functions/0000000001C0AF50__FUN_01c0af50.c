/* Ghidra address: 01c0af50 */
/* Ghidra symbol: FUN_01c0af50 */


void FUN_01c0af50(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined1 local_38 [16];
  undefined8 local_28;
  undefined8 local_20;
  
  local_40 = auStack_68;
  local_20 = FUN_005fddc0(&DAT_005f3a38,1,*(undefined8 *)(*(longlong *)(param_1 + 0x310) + 0x80));
  local_28 = FUN_005fdd10(&DAT_005f38c8,1,*(undefined8 *)(*(longlong *)(param_1 + 0x310) + 0x78));
  if (*(longlong *)(param_1 + 800) != 0) {
    cVar1 = FUN_01bfea90(*(longlong *)(param_1 + 800));
    if ((cVar1 != '\0') && (*(char *)(param_1 + 0x35c) == '\0')) {
      FUN_005fdcb0(*(undefined8 *)(*(longlong *)(param_1 + 0x310) + 0x80),0);
      goto LAB_01c0b07c;
    }
  }
  lVar5 = FUN_01c03e40(*(undefined8 *)(param_1 + 0x368));
  FUN_005fdab0(*(undefined8 *)(*(longlong *)(param_1 + 0x310) + 0x80),*(undefined4 *)(lVar5 + 0x8c))
  ;
  FUN_0064d000(param_1,local_38);
  uVar4 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x310));
  thunk_FUN_03998bad(uVar4,local_38,4,1);
  uVar4 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x310));
  thunk_FUN_03998bad(uVar4,local_38,4,4);
LAB_01c0b07c:
  lVar5 = FUN_01c03e40(*(undefined8 *)(param_1 + 0x368));
  FUN_005fd4e0(*(undefined8 *)(*(longlong *)(param_1 + 0x310) + 0x78),*(undefined4 *)(lVar5 + 0x94))
  ;
  iVar2 = FUN_0064d120(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x310) + 200))
            (*(longlong **)(param_1 + 0x310),0x20,(longlong)iVar2 / 2 & 0xffffffff);
  uVar3 = FUN_0064d0b0(param_1);
  iVar2 = FUN_0064d120(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x310) + 0xc0))
            (*(longlong **)(param_1 + 0x310),uVar3,(longlong)iVar2 / 2 & 0xffffffff);
  FUN_00410f20(local_20);
  FUN_00410f20(local_28);
  return;
}

