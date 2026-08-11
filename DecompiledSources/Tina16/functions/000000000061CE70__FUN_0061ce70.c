/* Ghidra address: 0061ce70 */
/* Ghidra symbol: FUN_0061ce70 */


undefined4 FUN_0061ce70(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  
  cVar1 = FUN_007e6100();
  if (cVar1 == '\0') {
    uVar2 = FUN_007f9990(*(undefined4 *)(param_2 + 0x10));
    uVar2 = FUN_007dc5f0(*(undefined2 *)(param_2 + 8),uVar2);
    if ((short)uVar2 != 0) {
      iVar3 = FUN_005b4540();
      iVar8 = 0;
      if (-1 < iVar3 + -1) {
        do {
          plVar5 = (longlong *)FUN_005b4350(param_1,iVar8);
          cVar1 = FUN_004113d0(plVar5,&PTR_FUN_0061c2b8);
          if (cVar1 != '\0') {
            if (*(short *)((longlong)plVar5 + 0x102) == (short)uVar2) {
LAB_0061cf23:
              uVar2 = (**(code **)(*plVar5 + 200))(plVar5);
              return uVar2;
            }
            lVar6 = FUN_005b3290(plVar5);
            if (lVar6 != 0) {
              uVar7 = FUN_005b3290(plVar5);
              iVar4 = FUN_005b1ff0(uVar7,uVar2);
              if (iVar4 != -1) goto LAB_0061cf23;
            }
          }
          iVar8 = iVar8 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
  }
  return 0;
}

