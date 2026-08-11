/* Ghidra address: 01be4310 */
/* Ghidra symbol: FUN_01be4310 */


void FUN_01be4310(longlong param_1,byte param_2)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  
  bVar1 = *(byte *)(param_1 + 0x4f8);
  FUN_01c02180(param_1);
  if (((param_2 != bVar1 & param_2) != 0) && (*(longlong *)(param_1 + 0x648) != 0)) {
    iVar2 = FUN_00611650();
    iVar4 = 0;
    if (-1 < iVar2 + -1) {
      do {
        plVar3 = (longlong *)FUN_004aeac0(*(undefined8 *)(*(longlong *)(param_1 + 0x648) + 8),iVar4)
        ;
        (**(code **)(*plVar3 + 0x330))(plVar3,1);
        iVar4 = iVar4 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return;
}

