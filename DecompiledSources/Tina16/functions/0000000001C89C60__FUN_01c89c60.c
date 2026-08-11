/* Ghidra address: 01c89c60 */
/* Ghidra symbol: FUN_01c89c60 */


void FUN_01c89c60(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined1 local_28;
  undefined1 *local_10;
  
  local_10 = auStack_48;
  uVar2 = FUN_007fc180(&PTR_FUN_01c34750,1,*(undefined8 *)PTR_DAT_02004030);
  *(undefined8 *)PTR_DAT_02004f70 = uVar2;
  iVar1 = (**(code **)(**(longlong **)PTR_DAT_02004f70 + 0x2d0))(*(longlong **)PTR_DAT_02004f70);
  if (iVar1 == 6) {
    FUN_00414ad0(param_1 + 0x2760,*(undefined8 *)(*(longlong *)PTR_DAT_02004f70 + 0xc08));
    local_28 = (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02004f70 + 0x8c8) + 0x260))
                         (*(longlong **)(*(longlong *)PTR_DAT_02004f70 + 0x8c8));
    FUN_01c6ec30(param_1,0x39,1,1);
  }
  FUN_00805ad0(*(undefined8 *)PTR_DAT_02004f70);
  return;
}

