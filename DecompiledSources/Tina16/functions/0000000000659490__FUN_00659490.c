/* Ghidra address: 00659490 */
/* Ghidra symbol: FUN_00659490 */


void FUN_00659490(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_50 = auStack_78;
  if (*(longlong *)(param_2 + 0x18) == 0) {
    local_38 = *(undefined8 *)(*(longlong *)(param_2 + 8) + 0x60);
    uStack_30 = *(undefined8 *)(*(longlong *)(param_2 + 8) + 0x68);
    uVar2 = FUN_0065b870(param_1);
    thunk_FUN_0411b3be(0,uVar2,&local_38,2);
    *(short *)(param_1 + 0x318) = *(short *)(param_1 + 0x318) + 1;
    uVar2 = *(undefined8 *)(*(longlong *)(param_2 + 8) + 0x50);
    local_48 = param_1;
    pcVar3 = (code *)FUN_00411550(uVar2,0xffca);
    (*pcVar3)(uVar2,param_1,&local_38);
    if ((*(char *)(param_1 + 0x392) != '\0') && (*(longlong *)(param_1 + 0x340) != 0)) {
      lVar1 = *(longlong *)(param_2 + 8);
      (**(code **)(**(longlong **)(param_1 + 0x340) + 0x30))
                (*(longlong **)(param_1 + 0x340),*(undefined8 *)(lVar1 + 0x50),
                 *(undefined1 *)(lVar1 + 0x70),*(undefined8 *)(lVar1 + 0x78));
    }
    FUN_00654410(param_1);
    local_40 = FUN_007f9b70(param_1,1);
    if (local_40 != 0) {
      FUN_0064e1d0(local_40);
    }
    *(undefined8 *)(param_2 + 0x18) = 1;
  }
  return;
}

