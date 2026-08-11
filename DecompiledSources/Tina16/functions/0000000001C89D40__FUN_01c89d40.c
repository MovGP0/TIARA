/* Ghidra address: 01c89d40 */
/* Ghidra symbol: FUN_01c89d40 */


void FUN_01c89d40(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  
  cVar1 = FUN_01c8cee0(param_1);
  if (cVar1 == '\0') {
    lVar3 = FUN_01993ec0(*(undefined8 *)(param_1 + 0x27a8));
    if ((lVar3 != 0) && (*PTR_DAT_020023b0 == '\0')) {
      cVar1 = FUN_0198a580(lVar3);
      if (cVar1 == '\x04') {
        cVar1 = FUN_01d04d40(lVar3);
        if (cVar1 != '\0') {
          plVar4 = (longlong *)
                   FUN_01b921c0(&PTR_FUN_01b91680,1,*(undefined8 *)PTR_DAT_02004030,lVar3);
          iVar2 = (**(code **)(*plVar4 + 0x2d0))(plVar4);
          if (iVar2 == 1) {
            FUN_0199e310(*(undefined8 *)(param_1 + 0x27a8),0,1,0);
          }
          FUN_00410f20(plVar4);
        }
      }
    }
  }
  return;
}

