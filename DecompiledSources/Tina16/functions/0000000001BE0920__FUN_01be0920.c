/* Ghidra address: 01be0920 */
/* Ghidra symbol: FUN_01be0920 */


longlong * FUN_01be0920(longlong *param_1)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *local_20;
  
  plVar3 = (longlong *)(**(code **)(*param_1 + 8))(param_1);
  if ((*(ushort *)(param_1[2] + 0x34) & 0x10) == 0) {
    local_20 = plVar3;
    if (plVar3[0x93] != 0) {
      *(undefined8 *)(plVar3[0x93] + 0x30) = 0;
      plVar3[0xc6] = 0;
      (**(code **)(*plVar3 + 0x308))(plVar3,0);
      iVar2 = FUN_00611650(param_1);
      if ((iVar2 == 1) && (cVar1 = FUN_004113d0(param_1[2],&PTR_FUN_01bdd620), cVar1 == '\0')) {
        uVar4 = FUN_004113f0(plVar3,&PTR_FUN_01bdd620);
        lVar5 = FUN_01be0910(param_1);
        *(undefined8 *)(lVar5 + 0x620) = uVar4;
        return plVar3;
      }
      local_20 = (longlong *)0x0;
      FUN_00410f20(plVar3);
    }
  }
  else {
    local_20 = (longlong *)0x0;
    FUN_00410f20(plVar3);
  }
  return local_20;
}

