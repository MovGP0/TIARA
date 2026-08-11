/* Ghidra address: 01419990 */
/* Ghidra symbol: FUN_01419990 */


void FUN_01419990(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  uVar3 = FUN_007fc180(&PTR_FUN_010739f8,1,*(undefined8 *)PTR_DAT_02004030);
  *(undefined8 *)PTR_DAT_02002ab0 = uVar3;
  FUN_010792c0(*(undefined8 *)PTR_DAT_02002ab0,*(undefined8 *)(param_1 + 0xfb0));
  FUN_01079310(*(undefined8 *)PTR_DAT_02002ab0,*(undefined8 *)(param_1 + 0xfb8));
  FUN_01081a90(*(undefined8 *)PTR_DAT_02002ab0,*(undefined4 *)(param_1 + 0xfc0),
               *(undefined8 *)(param_1 + 4000));
  uVar3 = FUN_0065b870(*(undefined8 *)PTR_DAT_02002ab0);
  FUN_01081d80(*(undefined8 *)PTR_DAT_02002ab0,uVar3,1,0,0,0);
  (**(code **)(**(longlong **)PTR_DAT_02002ab0 + 0x2d0))(*(longlong **)PTR_DAT_02002ab0);
  *(undefined1 *)(param_1 + 0x769) = *(undefined1 *)(*(longlong *)PTR_DAT_02002ab0 + 0x4d48);
  *(undefined1 *)(param_1 + 0x76a) = *(undefined1 *)(*(longlong *)PTR_DAT_02002ab0 + 0x4d49);
  cVar1 = FUN_0107b2f0(*(undefined8 *)PTR_DAT_02002ab0);
  if (cVar1 == '\0') {
    FUN_01417f80(param_1,1);
    FUN_01417bc0(param_1);
    (**(code **)(**(longlong **)(param_1 + 0x748) + 0x90))(*(longlong **)(param_1 + 0x748));
    (**(code **)(**(longlong **)(param_1 + 0x750) + 0x90))(*(longlong **)(param_1 + 0x750));
    iVar2 = (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02002ab0 + 0x4d38) + 0x28))
                      (*(longlong **)(*(longlong *)PTR_DAT_02002ab0 + 0x4d38));
    if (0 < iVar2) {
      (**(code **)(**(longlong **)(param_1 + 0x750) + 0x10))
                (*(longlong **)(param_1 + 0x750),
                 *(undefined8 *)(*(longlong *)PTR_DAT_02002ab0 + 0x4d38));
    }
    iVar2 = (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02002ab0 + 0x4d40) + 0x28))
                      (*(longlong **)(*(longlong *)PTR_DAT_02002ab0 + 0x4d40));
    if ((0 < iVar2) || (*(char *)(param_1 + 0x76a) != '\0')) {
      (**(code **)(**(longlong **)(param_1 + 0x748) + 0x10))
                (*(longlong **)(param_1 + 0x748),
                 *(undefined8 *)(*(longlong *)PTR_DAT_02002ab0 + 0x4d40));
    }
    FUN_01419960(param_1);
    *(undefined4 *)(param_1 + 0xf88) = *(undefined4 *)(param_1 + 0xf8c);
  }
  FUN_00410f20(*(undefined8 *)PTR_DAT_02002ab0);
  *(undefined8 *)PTR_DAT_02002ab0 = 0;
  FUN_00414480(local_20);
  return;
}

