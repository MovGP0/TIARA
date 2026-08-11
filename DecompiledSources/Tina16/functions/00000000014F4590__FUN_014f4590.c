/* Ghidra address: 014f4590 */
/* Ghidra symbol: FUN_014f4590 */


void FUN_014f4590(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 local_c8 [22];
  
  puVar4 = local_c8;
  for (lVar3 = 0x16; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  plVar2 = (longlong *)FUN_007fc180(&PTR_FUN_014edb90,1,*(undefined8 *)PTR_DAT_02004030);
  FUN_014eeb90(plVar2,param_1 + 0x8d8);
  iVar1 = (**(code **)(*plVar2 + 0x2d0))(plVar2);
  if (iVar1 == 1) {
    FUN_014eec20(plVar2,local_c8);
    FUN_00417c40(param_1 + 0x8d8,local_c8,&DAT_014ed9e8);
    *(undefined1 *)(param_1 + 0x8ca) = 1;
  }
  FUN_00410f20(plVar2);
  FUN_00417740(local_c8,&DAT_014ed9e8);
  return;
}

