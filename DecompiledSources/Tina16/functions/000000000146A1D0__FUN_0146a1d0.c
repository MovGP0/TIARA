/* Ghidra address: 0146a1d0 */
/* Ghidra symbol: FUN_0146a1d0 */


void FUN_0146a1d0(undefined8 param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_01469cb0(param_1,L"Background",0);
  *(undefined1 *)(*param_2 + 0x99) = uVar1;
  uVar2 = FUN_01469cb0(param_1,L"BgndColor",0xffffff);
  *(undefined4 *)(*param_2 + 0x9c) = uVar2;
  uVar1 = FUN_01469cb0(param_1,L"Border",0);
  *(undefined1 *)(*param_2 + 0xa0) = uVar1;
  return;
}

