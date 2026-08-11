/* Ghidra address: 01b987c0 */
/* Ghidra symbol: FUN_01b987c0 */


void FUN_01b987c0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  int local_1c;
  
  local_30 = auStack_58;
  FUN_0065f800(*(undefined8 *)(param_1 + 0x8b0));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x8b0));
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x880) + 0x28))();
  local_1c = 0;
  if (-1 < iVar1 + -1) {
    do {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x880) + 0x30))
                        (*(longlong **)(param_1 + 0x880),local_1c);
      FUN_00410f20(uVar2);
      local_1c = local_1c + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 0x880));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x888));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x890));
  FUN_008088b0(*(undefined8 *)PTR_DAT_02005950,0xfff5);
  FUN_01b951f0(param_1);
  FUN_008088b0(*(undefined8 *)PTR_DAT_02005950,0);
  return;
}

