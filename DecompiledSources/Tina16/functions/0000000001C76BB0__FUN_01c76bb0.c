/* Ghidra address: 01c76bb0 */
/* Ghidra symbol: FUN_01c76bb0 */


void FUN_01c76bb0(void)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  plVar2 = (longlong *)
           FUN_01152540(&PTR_FUN_01151658,1,*(undefined8 *)PTR_DAT_02004030,PTR_DAT_02004010 + 200,
                        *(undefined8 *)(PTR_DAT_02004010 + 600));
  iVar1 = (**(code **)(*plVar2 + 0x2d0))(plVar2);
  if (iVar1 == 1) {
    plVar4 = plVar2 + 0xe8;
    plVar5 = (longlong *)(PTR_DAT_02004010 + 200);
    for (lVar3 = 0x32; lVar3 != 0; lVar3 = lVar3 + -1) {
      *plVar5 = *plVar4;
      plVar4 = plVar4 + 1;
      plVar5 = plVar5 + 1;
    }
    FUN_00414ad0(PTR_DAT_02004010 + 600,plVar2[0x11b]);
  }
  FUN_00410f20(plVar2);
  return;
}

